#pragma once

// Dumped with Dumper-7!
#include <algorithm>

#include "../Holder.h"
HolderClass(BaseAddress, reinterpret_cast<uint8_t*>(GetModuleHandle(0)));
extern BaseAddressHolder BaseAddress;

namespace SDK
{

void InitGObjects();

template<typename Fn>
inline Fn GetVFunction(const void* Instance, std::size_t Index)
{
	auto Vtable = *reinterpret_cast<const void***>(const_cast<void*>(Instance));
	return reinterpret_cast<Fn>(Vtable[Index]);
}

struct FUObjectItem
{
	class UObject* Object;
	uint8 Pad_0[0x10];

};

class TUObjectArray
{
public:
	enum
	{
		ElementsPerChunk = 0x10000,
	};

public:
	static inline auto DecryptPtr = [](void* ObjPtr) -> uint8*
	{
		return reinterpret_cast<uint8*>(ObjPtr);
	};
	
	FUObjectItem** Objects;
	uint8 Pad_0[0x08];
	int32 MaxElements;
	int32 NumElements;
	int32 MaxChunks;
	int32 NumChunks;


public:
	// Call InitGObjects() before using these functions
	inline int32 Num() const
	{
		return NumElements;
	}

	inline FUObjectItem** GetDecrytedObjPtr() const
	{
		return reinterpret_cast<FUObjectItem**>(DecryptPtr(Objects));
	}

	inline class UObject* GetByIndex(const int32 Index) const
	{
		if (Index < 0 || Index > NumElements)
			return nullptr;

		const int32 ChunkIndex = Index / ElementsPerChunk;
		const int32 InChunkIdx = Index % ElementsPerChunk;

		return GetDecrytedObjPtr()[ChunkIndex][InChunkIdx].Object;
	}
};

class FMemory
{
public:
	//static inline void (*Free)(void* Array) = decltype(Free)(BaseAddress + 0x2001630);
	static inline auto Realloc = (void* (*)(void*, __int64, unsigned int)) (BaseAddress + 0x2010b20);

	static inline void* Malloc(uint64 Size, uint32 Alignment = 0x0)
	{
		return Realloc(nullptr, Size, Alignment);
	}
	static inline void Free(void* ptr)
	{
		Realloc(ptr, 0, 0);
	}
};

template<class T>
class TArray
{
protected:
	class Iterator
	{
	private:
		TArray<T>& IteratedArray;
		int32 Index;

	public:
		Iterator(const TArray<T>& Array, int32 StartIndex = 0x0)
			: IteratedArray(const_cast<TArray<T>&>(Array)), Index(StartIndex)
		{
		}

	public:
		inline int32 GetIndex() { return Index; }

		inline int32 IsValid() { return IteratedArray.IsValidIndex(GetIndex()); }

	public:
		inline Iterator& operator++() { ++Index; return *this; }
		inline Iterator& operator--() { --Index; return *this; }

		inline const T& operator*() const { return IteratedArray[GetIndex()]; }
		inline       T& operator*() { return IteratedArray[GetIndex()]; }

		inline       T* operator->() { return &IteratedArray[GetIndex()]; }
		inline const T* operator->() const { return &IteratedArray[GetIndex()]; }

		inline bool operator==(const Iterator& Other) const { return &IteratedArray == &Other.IteratedArray && Index == Other.Index; }
		inline bool operator!=(const Iterator& Other) const { return &IteratedArray != &Other.IteratedArray || Index != Other.Index; }
	};

public:
	T* Data;
	int32 NumElements;
	int32 MaxElements;

	inline TArray()
		:NumElements(0), MaxElements(0), Data(nullptr)
	{
	}

	inline TArray(int32 Size)
		: NumElements(0), MaxElements(Size), Data(reinterpret_cast<T*>(FMemory::Malloc(sizeof(T)* Size)))
	{
	}

	template<typename F>
	inline operator TArray<F>() {
		return *(TArray<F>*)this;
	}

	inline T& operator[](int32 Index)
	{
		if (Index >= NumElements) throw std::out_of_range("Index out of range");
		return Data[Index];
	}
	inline const T& operator[](int32 Index) const
	{
		if (Index >= NumElements) throw std::out_of_range("Index out of range");
		return Data[Index];
	}

	inline T& GetUnsafe(uint32 Index)
	{
		return Data[Index];
	}

	inline const T& GetUnsafe(uint32 Index) const
	{
		return Data[Index];
	}

	inline int32 Num() const
	{
		return NumElements;
	}

	inline int32 Max() const
	{
		return MaxElements;
	}

	inline int32 GetSlack()
	{
		return MaxElements - NumElements;
	}

	inline bool IsValid()
	{
		return Data != nullptr;
	}

	inline bool IsValidIndex(int32 Index) const
	{
		return Index >= 0 && Index < NumElements;
	}

	inline void ResetNum()
	{
		NumElements = 0;
	}

	inline void Reserve(const int Num)
	{
		if (Num + NumElements > MaxElements) Data = (T*)FMemory::Realloc(Data, (MaxElements = Num + NumElements) * sizeof(T), 0);
	}

	inline void Free()
	{
		if (Data)
			FMemory::Free(Data);

		MaxElements = 0;
		NumElements = 0;
		Data = nullptr;
	}



	inline T& Add(const T& InData)
	{
		Reserve(1);

		Data[NumElements] = InData;
		++NumElements;

		return Data[NumElements - 1];
	}

	inline bool Remove(int Index)
	{
		if (Index < NumElements)
		{
			if (Index != NumElements - 1)
			{
				Data[Index] = Data[NumElements - 1];
			}

			--NumElements;
			return true;
		}
		return false;
	}
	
	inline bool Remove(T* ptr) {
		if (ptr < Data || ptr >= Data + NumElements)
			return false;
		return Remove((int) ((__int64(ptr) - __int64(Data)) / sizeof(T*)));

	}


	template <typename F>
	T* Search(bool (*check)(T& val, F& param), F& param) {
		for (auto& v : *this) {
			if (check(v, param)) return &v;
		}
		return nullptr;
	}


	template <typename F>
	int32_t SearchIndex(bool (*check)(T& val, F& param), F& param) {
		for (int32_t i = 0; i < Num(); i++) {
			if (check((*this)[i], param)) return i;
		}
		return -1;
	}



	inline Iterator begin() { return Iterator(*this, 0); }
	inline Iterator end() { return Iterator(*this, Num()); }
};


class FString : public TArray<wchar_t>
{
public:
	inline FString() = default;

	using TArray::TArray;

	inline FString(const wchar_t* WChar)
	{
		MaxElements = NumElements = *WChar ? (int32) std::wcslen(WChar) + 1 : 0;

		if (NumElements)
		{
			Data = const_cast<wchar_t*>(WChar);
		}
	}

	inline FString operator=(const wchar_t*&& Other)
	{
		return FString(Other);
	}

	inline std::wstring ToWString()
	{
		if (IsValid())
		{
			return Data;
		}

		return L"";
	}

	inline std::string ToString()
	{
		if (IsValid())
		{
			std::wstring WData(Data);
			//return std::string(WData.begin(), WData.end());
			std::string str(WData.length(), 0);
			std::transform(WData.begin(), WData.end(), str.begin(), [](wchar_t c) {
				return (char)c;
			});
			return str;
		}

		return "";
	}
};

class FName
{
public:
	// GNames - either of type TNameEntryArray [<4.23] or FNamePool [>=4.23]
	static inline void* GNames = nullptr;

	// Members of FName - depending on configuration [WITH_CASE_PRESERVING_NAME | FNAME_OUTLINE_NUMBER]
	int32 ComparisonIndex;
	int32 Number;
	static inline auto FNameConstructor = reinterpret_cast<void(*)(FName*, wchar_t*, int)>(BaseAddress + 0x20c7620);
	static inline auto ToStringInternal = reinterpret_cast<void(*)(FName*, FString*)>(BaseAddress + 0x20da640);


	inline FName(wchar_t *str) {
		FNameConstructor(this, str, 1);
	}

	inline FName(const wchar_t *str) {
		FNameConstructor(this, (wchar_t *) str, 1);
	}


	inline FName(FString str) {
		FNameConstructor(this, str.Data, 1);
	}

	inline FName(int InComparisonIndex = 0, int InNumber = 0)
		: ComparisonIndex(InComparisonIndex), Number(InNumber)
	{
	}


	// GetDisplayIndex - returns the Id of the string depending on the configuration [default: ComparisonIndex, WITH_CASE_PRESERVING_NAME: DisplayIndex]
	inline int32 GetDisplayIndex() const
	{
		return ComparisonIndex;
	}

	// GetRawString - returns an unedited string as the engine uses it
	inline std::string GetRawString() const
	{
		/*thread_local FString TempString(1024);
		static void(*AppendString)(const FName*, FString&) = nullptr;

		if (!AppendString)
			AppendString = reinterpret_cast<void(*)(const FName*, FString&)>(BaseAddress + Offsets::AppendString);

		AppendString(this, TempString);

		std::string OutputString = TempString.ToString();
		TempString.ResetNum();

		return OutputString;*/
		FString out;
		ToStringInternal(const_cast<FName*>(this), &out);
		return out.ToString();
	}

	static inline void InitGNames()
	{
		GNames = reinterpret_cast<void*>(BaseAddress + Offsets::GNames);
	}

	// ToString - returns an edited string as it's used by most SDKs ["/Script/CoreUObject" -> "CoreUObject"]
	inline std::string ToString() const
	{
		std::string OutputString = GetRawString();

		size_t pos = OutputString.rfind('/');

		if (pos == std::string::npos)
			return OutputString;

		return OutputString.substr(pos + 1);
	}

	inline bool operator==(const FName& Other) const
	{
		return ComparisonIndex == Other.ComparisonIndex && Number == Other.Number;
	}

	inline bool operator!=(const FName& Other) const
	{
		return ComparisonIndex != Other.ComparisonIndex || Number != Other.Number;
	}

	inline bool operator<(const FName& Other) const
	{
		return this->ComparisonIndex == Other.ComparisonIndex ? /* (Number - Rhs.Number) < 0 */ Number < Other.Number : this->ComparisonIndex < Other.ComparisonIndex;
	}
};

template<typename ClassType>
class TSubclassOf
{
	class UClass* ClassPtr;

public:
	TSubclassOf() = default;

	inline TSubclassOf(UClass* Class)
		: ClassPtr(Class)
	{
	}

	inline UClass* Get()
	{
		return ClassPtr;
	}

	inline operator UClass*() const
	{
		return ClassPtr;
	}

	template<typename Target, typename = std::enable_if<std::is_base_of_v<Target, ClassType>, bool>::type>
	inline operator TSubclassOf<Target>() const
	{
		return ClassPtr;
	}

	inline UClass* operator->()
	{
		return ClassPtr;
	}

	inline TSubclassOf& operator=(UClass* Class)
	{
		ClassPtr = Class;

		return *this;
	}

	inline bool operator==(const TSubclassOf& Other) const
	{
		return ClassPtr == Other.ClassPtr;
	}

	inline bool operator!=(const TSubclassOf& Other) const
	{
		return ClassPtr != Other.ClassPtr;
	}

	inline bool operator==(UClass* Other) const
	{
		return ClassPtr == Other;
	}

	inline bool operator!=(UClass* Other) const
	{
		return ClassPtr != Other;
	}
};

template <typename KeyType, typename ValueType>
class TPair
{
public:
	KeyType First;
	ValueType Second;

public:
	TPair(KeyType Key, ValueType Value)
		: First(Key), Second(Value)
	{
	}

public:
	inline       KeyType& Key() { return First; }
	inline const KeyType& Key() const { return First; }

	inline       ValueType& Value() { return Second; }
	inline const ValueType& Value() const { return Second; }
};

class FTextData 
{
public:
	uint8 Pad[0x28];
	wchar_t* Name;
	int32 Length;
};

class FText 
{
public:
	FTextData* Data;
	uint8 Pad[0x10];

	wchar_t* Get() const 
	{
		if (Data) 
			return Data->Name;

		return nullptr;
	}

	std::string ToString()
	{
		if (Data)
		{
			std::wstring Temp(Data->Name);
			//return std::string(Temp.begin(), Temp.end());
			std::string str(Temp.length(), 0);
			std::transform(Temp.begin(), Temp.end(), str.begin(), [](wchar_t c) {
				return (char)c;
				});
			return str;
		}

		return "";
	}
};

/*template <int NumElements>
class TInlineAllocator
{
private:
	template <int Size, int Alignment>
	struct alignas(Alignment) TAlignedBytes
	{
		unsigned char Pad[Size];
	};

	template <typename ElementType>
	struct TTypeCompatibleBytes : public TAlignedBytes<sizeof(ElementType), alignof(ElementType)>
	{
	};

public:
	template <typename ElementType>
	class ForElementType
	{
		friend class TBitArray;

	private:
		TTypeCompatibleBytes<ElementType> InlineData[NumElements];

		ElementType* SecondaryData;

	public:

		int32 NumInlineBytes() const
		{
			return sizeof(ElementType) * NumElements;
		}
		int32 NumInlineBits() const
		{
			return NumInlineBytes() * 8;
		}

		ElementType& operator[](int32 Index)
		{
			return *(ElementType*)(&InlineData[Index]);
		}
		const ElementType& operator[](int32 Index) const
		{
			return *(ElementType*)(&InlineData[Index]);
		}

		void operator=(void* InElements)
		{
			SecondaryData = InElements;
		}

		ElementType& GetInlineElement(int32 Index)
		{
			return *(ElementType*)(&InlineData[Index]);
		}
		const ElementType& GetInlineElement(int32 Index) const
		{
			return *(ElementType*)(&InlineData[Index]);
		}
		ElementType& GetSecondaryElement(int32 Index)
		{
			return SecondaryData[Index];
		}
		const ElementType& GetSecondaryElement(int32 Index) const
		{
			return SecondaryData[Index];
		}
		ElementType* GetInlineElements() const
		{
			return (ElementType*)InlineData;
		}
		ElementType* GetAllocation() const
		{
			return IfAThenAElseB<ElementType>(SecondaryData, GetInlineElements());
		}
	};
};

static uint32 CountLeadingZeros(uint32 Value)
{
	unsigned long Log2;
	if (_BitScanReverse(&Log2, Value) != 0)
	{
		return 31 - Log2;
	}

	return 32;
}


class TBitArray
{
public:
	TInlineAllocator<4>::ForElementType<unsigned int> Data;
	int NumBits;
	int MaxBits;

	struct FRelativeBitReference
	{
	public:
		explicit FRelativeBitReference(int32 BitIndex)
			: DWORDIndex(BitIndex >> 5)
			, Mask(1 << (BitIndex & (32 - 1)))
		{
		}

		int32 DWORDIndex;
		uint32 Mask;
	};

public:
	struct FBitReference
	{
		FBitReference(uint32& InData, uint32 InMask)
			: Data(InData)
			, Mask(InMask)
		{
		}
		const FBitReference(const uint32& InData, const uint32 InMask)
			: Data(const_cast<uint32&>(InData))
			, Mask(InMask)
		{
		}

		void SetBit(const bool Value)
		{
			Value ? Data |= Mask : Data &= ~Mask;

			// 10011101 - Data			 // 10011101 - Data
			// 00000010 - Mask - true |	 // 00000010 - Mask - false
			// 10011111	-  |=			 // 11111101 -  ~
			//							 // 10011111 -  &=
		}

		operator bool() const
		{
			return (Data & Mask) != 0;
		}
		void operator=(const bool Value)
		{
			this->SetBit(Value);
		}

	private:
		uint32& Data;
		uint32 Mask;
	};

public:
	class FBitIterator : public FRelativeBitReference
	{
	private:
		int32 Index;
		const TBitArray& IteratedArray;

	public:
		const FBitIterator(const TBitArray& ToIterate, const int32 StartIndex) // Begin
			: IteratedArray(ToIterate)
			, Index(StartIndex)
			, FRelativeBitReference(StartIndex)
		{
		}
		const FBitIterator(const TBitArray& ToIterate) // End
			: IteratedArray(ToIterate)
			, Index(ToIterate.NumBits)
			, FRelativeBitReference(ToIterate.NumBits)
		{
		}

		explicit operator bool() const
		{
			return Index < IteratedArray.Num();
		}
		FBitIterator& operator++()
		{
			++Index;
			this->Mask <<= 1;
			if (!this->Mask)
			{
				this->Mask = 1;
				++this->DWORDIndex;
			}
			return *this;
		}
		bool operator*() const
		{
			// Thesis: Once there are more elements in the BitArray than InlineData can hold it'll just allocate all of 
			// them through SecondaryElements, leaving InlineData all true

			if (IteratedArray.NumBits < IteratedArray.Data.NumInlineBits())
			{
				return (bool)FBitReference(IteratedArray.Data.GetInlineElement(this->DWORDIndex), this->Mask);
			}
			else
			{
				return (bool)FBitReference(IteratedArray.Data.GetSecondaryElement(this->DWORDIndex), this->Mask);
			}
		}
		bool operator==(const FBitIterator& OtherIt) const
		{
			return Index == OtherIt.Index;
		}
		bool operator!=(const FBitIterator& OtherIt) const
		{
			return Index </*=* / OtherIt.Index;
		}
		bool operator < (const int32 Other) const
		{
			return Index < Other;
		}
		bool operator > (const int32 Other) const
		{
			return Index < Other;
		}

		int32 GetIndex() const
		{
			return Index;
		}
	};

	class FSetBitIterator : public FRelativeBitReference
	{
	private:
		const TBitArray& IteratedArray;

		uint32 UnvisitedBitMask;
		int32  CurrentBitIndex;
		int32  BaseBitIndex;

	public:
		FSetBitIterator(const TBitArray& ToIterate, int32 StartIndex)
			: FRelativeBitReference(StartIndex)
			, IteratedArray(const_cast<TBitArray&>(ToIterate))
			, UnvisitedBitMask((~0U) << (StartIndex & (32 - 1)))
			, CurrentBitIndex(StartIndex)
			, BaseBitIndex(StartIndex & ~(32 - 1))
		{
			if (StartIndex != IteratedArray.NumBits)
			{
				FindNextSetBit();
			}
		}
		FSetBitIterator(const TBitArray& ToIterate)
			: FRelativeBitReference(ToIterate.NumBits)
			, IteratedArray(const_cast<TBitArray&>(ToIterate))
			, UnvisitedBitMask(0)
			, CurrentBitIndex(ToIterate.NumBits)
			, BaseBitIndex(ToIterate.NumBits)
		{
		}

		FSetBitIterator& operator++()
		{
			UnvisitedBitMask &= ~this->Mask;

			FindNextSetBit();

			return *this;
		}
		bool operator*() const
		{
			return true;
		}

		bool operator==(const FSetBitIterator& Other) const
		{
			return CurrentBitIndex == Other.CurrentBitIndex;
		}
		bool operator!=(const FSetBitIterator& Other) const
		{
			return CurrentBitIndex </*=* / Other.CurrentBitIndex;
		}

		explicit operator bool() const
		{
			return CurrentBitIndex < IteratedArray.NumBits;
		}

		int32 GetIndex() const
		{
			return CurrentBitIndex;
		}

	private:

		void FindNextSetBit()
		{
			//InlineData is the first 16-bytes of TBitArray
			const uint32* ArrayData = (IteratedArray.Data.SecondaryData ? IteratedArray.Data.SecondaryData : (uint32*)&IteratedArray.Data.InlineData);

			if (!ArrayData)
				return;

			const int32 ArrayNum = IteratedArray.NumBits;
			const int32 LastDWORDIndex = (ArrayNum - 1) / 32;

			uint32 RemainingBitMask = ArrayData[this->DWORDIndex] & UnvisitedBitMask;

			while (!RemainingBitMask)
			{
				++this->DWORDIndex;
				BaseBitIndex += 32;

				if (this->DWORDIndex > LastDWORDIndex)
				{
					CurrentBitIndex = ArrayNum;
					return;
				}

				RemainingBitMask = ArrayData[this->DWORDIndex];
				UnvisitedBitMask = ~0;
			}

			const uint32 NewRemainingBitMask = RemainingBitMask & (RemainingBitMask - 1);

			this->Mask = NewRemainingBitMask ^ RemainingBitMask;

			CurrentBitIndex = BaseBitIndex + 32 - 1 - CountLeadingZeros(this->Mask);

			if (CurrentBitIndex > ArrayNum)
			{
				CurrentBitIndex = ArrayNum;
			}
		}
	};

public:
	FBitIterator Iterator(int32 StartIndex)
	{
		return FBitIterator(*this, StartIndex);
	}
	FSetBitIterator SetBitIterator(int32 StartIndex)
	{
		return FSetBitIterator(*this, StartIndex);
	}

	FBitIterator begin()
	{
		return FBitIterator(*this, 0);
	}
	const FBitIterator begin() const
	{
		return FBitIterator(*this, 0);
	}
	FBitIterator end()
	{
		return FBitIterator(*this);
	}
	const FBitIterator end() const
	{
		return  FBitIterator(*this);
	}

	FSetBitIterator SetBitsItBegin()
	{
		return FSetBitIterator(*this, 0);
	}
	const FSetBitIterator SetBitsItBegin() const
	{
		return FSetBitIterator(*this, 0);
	}
	const FSetBitIterator SetBitsItEnd()
	{
		return FSetBitIterator(*this);
	}
	const FSetBitIterator SetBitsItEnd() const
	{
		return FSetBitIterator(*this);
	}

	int32 Num() const
	{
		return NumBits;
	}
	int32 Max() const
	{
		return MaxBits;
	}
	bool IsSet(int32 Index) const
	{
		return *FBitIterator(*this, Index);
	}
	void Set(const int32 Index, const bool Value, bool bIsSettingAllZero = false)
	{
		const int32 DWORDIndex = (Index >> ((int32)5));
		const int32 Mask = (1 << (Index & (((int32)32) - 1)));

		if (!bIsSettingAllZero)
			NumBits = Index >= NumBits ? Index < MaxBits ? Index + 1 : NumBits : NumBits;

		FBitReference(Data[DWORDIndex], Mask).SetBit(Value);
	}
	void ZeroAll()
	{
		for (int i = 0; i < MaxBits; ++i)
		{
			Set(i, false, true);
		}
	}
};

template <typename ElementType>
union TSparseArrayElementOrListLink
{
	TSparseArrayElementOrListLink(ElementType& InElement)
		: ElementData(InElement)
	{
	}
	TSparseArrayElementOrListLink(ElementType&& InElement)
		: ElementData(InElement)
	{
	}

	TSparseArrayElementOrListLink(int32 InPrevFree, int32 InNextFree)
		: PrevFreeIndex(InPrevFree)
		, NextFreeIndex(InNextFree)
	{
	}

	TSparseArrayElementOrListLink<ElementType> operator=(const TSparseArrayElementOrListLink<ElementType>& Other)
	{
		return TSparseArrayElementOrListLink(Other.NextFreeIndex, Other.PrevFreeIndex);
	}

	/** If the element is allocated, its value is stored here. * /
	ElementType ElementData;

	struct
	{
		/** If the element isn't allocated, this is a link to the previous element in the array's free list. * /
		int PrevFreeIndex;

		/** If the element isn't allocated, this is a link to the next element in the array's free list. * /
		int NextFreeIndex;
	};
};

template <typename ArrayType>
class TSparseArray
{
public:
	typedef TSparseArrayElementOrListLink<ArrayType> FSparseArrayElement;

	TArray<FSparseArrayElement> &Data;
	TBitArray AllocationFlags;
	int32 FirstFreeIndex;
	int32 NumFreeIndices;

	int32 Num() const
	{
		return Data.Num() - NumFreeIndices;
	}

	class FBaseIterator
	{
	private:
		TSparseArray<ArrayType>& IteratedArray;
		TBitArray::FSetBitIterator BitArrayIt;

	public:
		FBaseIterator(const TSparseArray<ArrayType>& Array, const TBitArray::FSetBitIterator BitIterator)
			: IteratedArray(const_cast<TSparseArray<ArrayType>&>(Array))
			, BitArrayIt(const_cast<TBitArray::FSetBitIterator&>(BitIterator))
		{
		}

		explicit operator bool() const
		{
			return (bool)BitArrayIt;
		}
		TSparseArray<ArrayType>::FBaseIterator& operator++()
		{
			++BitArrayIt;
			return *this;
		}
		ArrayType& operator*()
		{
			return IteratedArray[BitArrayIt.GetIndex()].ElementData;
		}
		const ArrayType& operator*() const
		{
			return IteratedArray[BitArrayIt.GetIndex()].ElementData;
		}
		ArrayType* operator->()
		{
			return &IteratedArray[BitArrayIt.GetIndex()].ElementData;
		}
		const ArrayType* operator->() const
		{
			return &IteratedArray[BitArrayIt.GetIndex()].ElementData;
		}
		bool operator==(const TSparseArray<ArrayType>::FBaseIterator& Other) const
		{
			return BitArrayIt == Other.BitArrayIt;
		}
		bool operator!=(const TSparseArray<ArrayType>::FBaseIterator& Other) const
		{
			return BitArrayIt != Other.BitArrayIt;
		}

		int32 GetIndex() const
		{
			return BitArrayIt.GetIndex();
		}
		bool IsElementValid() const
		{
			return *BitArrayIt;
		}
	};

public:
	TSparseArray<ArrayType>::FBaseIterator begin()
	{
		return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags, 0));
	}
	const TSparseArray<ArrayType>::FBaseIterator begin() const
	{
		return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags, 0));
	}
	TSparseArray<ArrayType>::FBaseIterator end()
	{
		return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags));
	}
	const TSparseArray<ArrayType>::FBaseIterator end() const
	{
		return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags));
	}

	FSparseArrayElement& operator[](uint32 Index)
	{
		return *(FSparseArrayElement*)&Data[Index].ElementData;
	}
	const FSparseArrayElement& operator[](uint32 Index) const
	{
		return *(const FSparseArrayElement*)&Data[Index].ElementData;
	}
	int32 GetNumFreeIndices() const
	{
		return NumFreeIndices;
	}
	int32 GetFirstFreeIndex() const
	{
		return FirstFreeIndex;
	}
	const TArray<FSparseArrayElement>& GetData() const
	{
		return Data;
	}
	FSparseArrayElement& GetData(int32 Index)
	{
		return *(FSparseArrayElement*)&Data[Index].ElementData;
		// return ((FSparseArrayElement*)Data.Data)[Index];
	}

	/** Accessor for the element or free list data. * /
	const FSparseArrayElement& GetData(int32 Index) const
	{
		return *(const FSparseArrayElement*)&Data[Index].ElementData;
		// return ((FSparseArrayElement*)Data.Data)[Index];
	}
	const TBitArray& GetAllocationFlags() const
	{
		return AllocationFlags;
	}
	bool IsIndexValid(int32 IndexToCheck) const
	{
		return AllocationFlags.IsSet(IndexToCheck);
	}

	void RemoveAt(int32 Index, int32 Count = 1)
	{
		/* if (!TIsTriviallyDestructible<ElementType>::Value)
		{
			for (int32 It = Index, ItCount = Count; ItCount; ++It, --ItCount)
			{
				((ElementType&)GetData(It).ElementData).~ElementType();
			}
		} * /

		RemoveAtUninitialized(Index, Count);
	}

	/** Removes Count elements from the array, starting from Index, without destructing them. * /
	void RemoveAtUninitialized(int32 Index, int32 Count = 1)
	{
		for (; Count; --Count)
		{
			// check(AllocationFlags[Index]);

			// Mark the element as free and add it to the free element list.
			if (NumFreeIndices)
			{
				GetData(FirstFreeIndex).PrevFreeIndex = Index;
			}
			auto& IndexData = GetData(Index);
			IndexData.PrevFreeIndex = -1;
			IndexData.NextFreeIndex = NumFreeIndices > 0 ? FirstFreeIndex : -1;
			FirstFreeIndex = Index;
			++NumFreeIndices;
			AllocationFlags.Set(Index, false);
			// AllocationFlags[Index] = false;

			++Index;
		}
	}

	/*
	bool RemoveAt(const int32 IndexToRemove)
	{
		LOG_INFO(LogDev, "IndexToRemove: {}", IndexToRemove);
		LOG_INFO(LogDev, "AllocationFlags.IsSet(IndexToRemove): {}", AllocationFlags.IsSet(IndexToRemove));
		LOG_INFO(LogDev, "Data.Num(): {}", Data.Num());

		if (IndexToRemove >= 0 && IndexToRemove < Data.Num() && AllocationFlags.IsSet(IndexToRemove))
		{
			int32 PreviousFreeIndex = -1;
			int32 NextFreeIndex = -1;

			LOG_INFO(LogDev, "NumFreeIndices: {}", NumFreeIndices);

			if (NumFreeIndices == 0)
			{
				FirstFreeIndex = IndexToRemove;
				Data.at(IndexToRemove) = { -1, -1 };
			}
			else
			{
				for (auto It = AllocationFlags.begin(); It != AllocationFlags.end(); ++It)
				{
					if (!It)
					{
						if (It.GetIndex() < IndexToRemove)
						{
							Data.at(IndexToRemove).PrevFreeIndex = It.GetIndex();
						}
						else if (It.GetIndex() > IndexToRemove)
						{
							Data.at(IndexToRemove).NextFreeIndex = It.GetIndex();
							break;
						}
					}
				}
			}

			AllocationFlags.Set(IndexToRemove, false);
			NumFreeIndices++;

			return true;
		}
		return false;
	}
	* /
};


template <typename ElementType>
class TSetElement
{
public:
	ElementType Value;
	mutable int32 HashNextId;
	mutable int32 HashIndex;

	TSetElement(ElementType InValue, int32 InHashNextId, int32 InHashIndex)
		: Value(InValue)
		, HashNextId(InHashNextId)
		, HashIndex(InHashIndex)
	{
	}

	TSetElement<ElementType>& operator=(const TSetElement<ElementType>& Other)
	{
		Value = Other.Value;
	}

	bool operator==(const TSetElement& Other) const
	{
		return Value == Other.Value;
	}
	bool operator!=(const TSetElement& Other) const
	{
		return Value != Other.Value;
	}
};

template<typename SetType>
class TSet {
	uint8 WaitTillIImplementIt[0x50];
};
template<typename SetType>
class RTSet
{
private:
	friend TSparseArray;

public:
	typedef TSetElement<SetType> ElementType;
	typedef TSparseArrayElementOrListLink<ElementType> ArrayElementType;

public:
	TSparseArray<ElementType> Elements;

	mutable TInlineAllocator<1>::ForElementType<int> Hash;
	mutable int32 HashSize;

public:
	class FBaseIterator
	{
	private:
		RTSet<SetType>& IteratedSet;
		TSparseArray<ElementType>::FBaseIterator ElementIt;

	public:
		FBaseIterator(const RTSet<SetType>& InSet, TSparseArray<TSetElement<SetType>>::FBaseIterator InElementIt)
			: IteratedSet(const_cast<RTSet<SetType>&>(InSet))
			, ElementIt(InElementIt)
		{
		}

		explicit operator bool() const
		{
			return (bool)ElementIt;
		}
		RTSet<SetType>::FBaseIterator& operator++()
		{
			++ElementIt;
			return *this;
		}
		bool operator==(const RTSet<SetType>::FBaseIterator& OtherIt) const
		{
			return ElementIt == OtherIt.ElementIt;
		}
		bool operator!=(const RTSet<SetType>::FBaseIterator& OtherIt) const
		{
			return ElementIt != OtherIt.ElementIt;
		}
		RTSet<SetType>::FBaseIterator& operator=(RTSet<SetType>::FBaseIterator& OtherIt)
		{
			return ElementIt = OtherIt.ElementIt;
		}
		SetType& operator*()
		{
			return (*ElementIt).Value;
		}
		const SetType& operator*() const
		{
			return &((*ElementIt).Value);
		}
		SetType* operator->()
		{
			return &((*ElementIt).Value);
		}
		const SetType* operator->() const
		{
			return &(*ElementIt).Value;
		}
		const int32 GetIndex() const
		{
			return ElementIt.GetIndex();
		}
		ElementType& GetSetElement()
		{
			return *ElementIt;
		}
		const ElementType& GetSetElement() const
		{
			return *ElementIt;
		}
		bool IsElementValid() const
		{
			return ElementIt.IsElementValid();
		}
	};

public:
	RTSet<SetType>::FBaseIterator begin()
	{
		return RTSet<SetType>::FBaseIterator(*this, Elements.begin());
	}
	const RTSet<SetType>::FBaseIterator begin() const
	{
		return RTSet<SetType>::FBaseIterator(*this, Elements.begin());
	}
	RTSet<SetType>::FBaseIterator end()
	{
		return RTSet<SetType>::FBaseIterator(*this, Elements.end());
	}
	const RTSet<SetType>::FBaseIterator end() const
	{
		return RTSet<SetType>::FBaseIterator(*this, Elements.end());
	}

	SetType& operator[](int Index)
	{
		return Elements[Index].ElementData.Value;
	}

	int32 Num() const
	{
		return Elements.Num();
	}
	bool IsValid() const
	{
		return Elements.Data.Data != nullptr && Elements.AllocationFlags.MaxBits > 0;
	}
	TSparseArray<ElementType>& GetElements()
	{
		return Elements;
	}
	const TSparseArray<ElementType>& GetElements() const
	{
		return Elements;
	}
	const TBitArray& GetAllocationFlags() const
	{
		return Elements.GetAllocationFlags();
	}
	bool IsIndexValid(int32 IndexToCheck) const
	{
		return Elements.IsIndexValid(IndexToCheck);
	}
	const bool Contains(const SetType& ElementToLookFor) const
	{
		if (Num() <= 0)
			return false;

		for (SetType Element : *this)
		{
			if (Element == ElementToLookFor)
				return true;
		}
		return false;
	}
	const int32 Find(const SetType& ElementToLookFor) const
	{
		for (auto It = this->begin(); It != this->end(); ++It)
		{
			if (*It == ElementToLookFor)
			{
				return It.GetIndex();
			}
		}

		return -1;
	}
	bool Remove(const SetType& ElementToRemove)
	{
		auto Idx = Find(ElementToRemove);

		if (Idx == -1)
			return false;

		Elements.RemoveAt(Idx);
		return true;
	}
	bool Remove(int Index)
	{
		Elements.RemoveAt(Index);
		return true;
	}
};
template<typename KeyType, typename ValueType>
class TMap {
	uint8 WaitTillIImplementIt[0x50];
};
template<typename KeyType, typename ValueType>
class RTMap
{
public:
	typedef RTPair<KeyType, ValueType> ElementType;

public:
	RTSet<ElementType> Pairs;

public:
	class FBaseIterator
	{
	private:
		RTMap<KeyType, ValueType>& IteratedMap;
		RTSet<ElementType>::FBaseIterator SetIt;

	public:
		FBaseIterator(RTMap<KeyType, ValueType>& InMap, RTSet<ElementType>::FBaseIterator InSet)
			: IteratedMap(InMap)
			, SetIt(InSet)
		{
		}
		RTMap<KeyType, ValueType>::FBaseIterator operator++()
		{
			++SetIt;
			return *this;
		}
		RTMap<KeyType, ValueType>::ElementType& operator*()
		{
			return *SetIt;
		}
		const RTMap<KeyType, ValueType>::ElementType& operator*() const
		{
			return *SetIt;
		}
		bool operator==(const RTMap<KeyType, ValueType>::FBaseIterator& Other) const
		{
			return SetIt == Other.SetIt;
		}
		bool operator!=(const RTMap<KeyType, ValueType>::FBaseIterator& Other) const
		{
			return SetIt != Other.SetIt;
		}
		bool IsElementValid() const
		{
			return SetIt.IsElementValid();
		}
	};

	RTMap<KeyType, ValueType>::FBaseIterator begin()
	{
		return RTMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.begin());
	}
	const RTMap<KeyType, ValueType>::FBaseIterator begin() const
	{
		return RTMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.begin());
	}
	RTMap<KeyType, ValueType>::FBaseIterator end()
	{
		return RTMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.end());
	}
	const RTMap<KeyType, ValueType>::FBaseIterator end() const
	{
		return RTMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.end());
	}
	ValueType& operator[](const KeyType& Key)
	{
		return this->GetByKey(Key);
	}
	const ValueType& operator[](const KeyType& Key) const
	{
		return this->GetByKey(Key);
	}

	inline       ElementType& operator[] (int32 Index) { return Pairs[Index]; }
	inline const ElementType& operator[] (int32 Index) const { return Pairs[Index]; }
	int32 Num() const
	{
		return Pairs.Num();
	}
	bool IsValid() const
	{
		return Pairs.IsValid();
	}
	bool IsIndexValid(int32 IndexToCheck) const
	{
		return Pairs.IsIndexValid(IndexToCheck);
	}
	bool Contains(const KeyType& ElementToLookFor) const
	{
		for (auto& Element : *this)
		{
			if (Element.Key() == ElementToLookFor)
				return true;
		}
		return false;
	}
	ValueType& GetByKey(const KeyType& Key, bool* wasSuccessful = nullptr)
	{
		for (auto& Pair : *this)
		{
			if (Pair.Key() == Key)
			{
				if (wasSuccessful)
					*wasSuccessful = true;

				return Pair.Value();
			}
		}

		// LOG_INFO(LogDev, "Failed to find Key!!!");

		if (wasSuccessful)
			*wasSuccessful = false;
	}
	ValueType& Find(const KeyType& Key, bool* wasSuccessful = nullptr)
	{
		return GetByKey(Key, wasSuccessful);
	}
	ValueType GetByKeyNoRef(const KeyType& Key)
	{
		for (auto& Pair : *this)
		{
			if (Pair.Key() == Key)
			{
				return Pair.Value();
			}
		}
	}
};*/

template<int32 Size, uint32 Alignment>
struct TAlignedBytes
{
	alignas(Alignment) uint8 Pad[Size];
};

template<typename SparseArrayType>
union TSparseArrayElementOrFreeListLink
{
	SparseArrayType ElementData;

	struct
	{
		int32 PrevFreeIndex;
		int32 NextFreeIndex;
	};
};


template<uint32 NumInlineElements>
class TInlineAllocator
{
public:
	template<typename ElementType>
	class ForElementType
	{
	private:
		static constexpr int32 ElementSize = sizeof(ElementType);
		static constexpr int32 ElementAlign = alignof(ElementType);

		static constexpr int32 InlineDataSizeBytes = NumInlineElements * ElementSize;

	private:
		TAlignedBytes<ElementSize, ElementAlign> InlineData[NumInlineElements];
		ElementType* SecondaryData;

	public:
		ForElementType()
			: InlineData{ 0x0 }, SecondaryData(nullptr)
		{
		}

		ForElementType(ForElementType&&) = default;
		ForElementType(const ForElementType&) = default;

	public:
		ForElementType& operator=(ForElementType&&) = default;
		ForElementType& operator=(const ForElementType&) = default;

	public:
		inline const ElementType* GetAllocation() const { return SecondaryData ? SecondaryData : reinterpret_cast<const ElementType*>(&InlineData); }

		inline uint32 GetNumInlineBytes() const { return NumInlineElements; }
	};
};



inline uint32 FloorLog2(uint32 Value)
{
	uint32 pos = 0;
	if (Value >= 1 << 16) { Value >>= 16; pos += 16; }
	if (Value >= 1 << 8) { Value >>= 8; pos += 8; }
	if (Value >= 1 << 4) { Value >>= 4; pos += 4; }
	if (Value >= 1 << 2) { Value >>= 2; pos += 2; }
	if (Value >= 1 << 1) { pos += 1; }
	return pos;
}

inline uint32 CountLeadingZeros(uint32 Value)
{
	if (Value == 0)
		return 32;

	return 31 - FloorLog2(Value);
}


class FBitArray
{
public:
	class FRelativeBitReference
	{
	protected:
		static constexpr int32 NumBitsPerDWORD = 32;
		static constexpr int32 NumBitsPerDWORDLogTwo = 5;

	public:
		inline explicit FRelativeBitReference(int32 BitIndex)
			: WordIndex(BitIndex >> NumBitsPerDWORDLogTwo)
			, Mask(1 << (BitIndex & (NumBitsPerDWORD - 1)))
		{
		}

		int32  WordIndex;
		uint32 Mask;
	};

	class FSetBitIterator : public FRelativeBitReference
	{
	private:
		const FBitArray& Array;

		uint32 UnvisitedBitMask;
		int32 CurrentBitIndex;
		int32 BaseBitIndex;

	public:
		explicit FSetBitIterator(const FBitArray& InArray, int32 StartIndex = 0)
			: FRelativeBitReference(StartIndex)
			, Array(InArray)
			, UnvisitedBitMask((~0U) << (StartIndex & (NumBitsPerDWORD - 1)))
			, CurrentBitIndex(StartIndex)
			, BaseBitIndex(StartIndex & ~(NumBitsPerDWORD - 1))
		{
			if (StartIndex != Array.Num())
				FindFirstSetBit();
		}

	public:
		inline FSetBitIterator& operator++()
		{
			UnvisitedBitMask &= ~this->Mask;

			FindFirstSetBit();

			return *this;
		}

		inline explicit operator bool() const { return CurrentBitIndex < Array.Num(); }

		inline bool operator==(const FSetBitIterator& Rhs) const { return CurrentBitIndex == Rhs.CurrentBitIndex && &Array == &Rhs.Array; }
		inline bool operator!=(const FSetBitIterator& Rhs) const { return CurrentBitIndex != Rhs.CurrentBitIndex || &Array != &Rhs.Array; }

	public:
		inline int32 GetIndex() { return CurrentBitIndex; }

		void FindFirstSetBit()
		{
			const uint32* ArrayData = Array.GetData();
			const int32   ArrayNum = Array.Num();
			const int32   LastWordIndex = (ArrayNum - 1) / NumBitsPerDWORD;

			uint32 RemainingBitMask = ArrayData[this->WordIndex] & UnvisitedBitMask;
			while (!RemainingBitMask)
			{
				++this->WordIndex;
				BaseBitIndex += NumBitsPerDWORD;
				if (this->WordIndex > LastWordIndex)
				{
					CurrentBitIndex = ArrayNum;
					return;
				}

				RemainingBitMask = ArrayData[this->WordIndex];
				UnvisitedBitMask = ~0;
			}

			const uint32 NewRemainingBitMask = RemainingBitMask & (RemainingBitMask - 1);

			this->Mask = NewRemainingBitMask ^ RemainingBitMask;

			CurrentBitIndex = BaseBitIndex + NumBitsPerDWORD - 1 - CountLeadingZeros(this->Mask);

			if (CurrentBitIndex > ArrayNum)
				CurrentBitIndex = ArrayNum;
		}
	};

protected:
	static constexpr int32 NumBitsPerDWORD = 32;
	static constexpr int32 NumBitsPerDWORDLogTwo = 5;

private:
	TInlineAllocator<4>::ForElementType<int32> Data;
	int32 NumBits;
	int32 MaxBits;

public:
	FBitArray()
		: NumBits(0), MaxBits(Data.GetNumInlineBytes()* NumBitsPerDWORD)
	{
	}

	FBitArray(const FBitArray&) = default;

	FBitArray(FBitArray&&) = default;

public:
	FBitArray& operator=(FBitArray&&) = default;

	FBitArray& operator=(const FBitArray& Other) = default;

private:
	inline void VerifyIndex(int32 Index) const { if (!IsValidIndex(Index)) throw std::out_of_range("Index was out of range!"); }

public:
	inline int32 Num() const { return NumBits; }
	inline int32 Max() const { return MaxBits; }

	inline const uint32* GetData() const { return reinterpret_cast<const uint32*>(Data.GetAllocation()); }

	inline bool IsValidIndex(int32 Index) const { return Index >= 0 && Index < NumBits; }

	inline bool IsValid() const { return GetData() && NumBits > 0; }

public:
	inline bool operator[](int32 Index) const { VerifyIndex(Index); return GetData()[Index / NumBitsPerDWORD] & (1 << (Index & (NumBitsPerDWORD - 1))); }

	inline bool operator==(const FBitArray& Other) const { return NumBits == Other.NumBits && GetData() == Other.GetData(); }
	inline bool operator!=(const FBitArray& Other) const { return NumBits != Other.NumBits || GetData() != Other.GetData(); }

public:
	friend FSetBitIterator begin(const FBitArray& Array) { return FSetBitIterator(Array, 0); }
	friend FSetBitIterator end(const FBitArray& Array) { return FSetBitIterator(Array, Array.Num()); }
};

template<class ContainerType>
class TContainerIterator
{
private:
	ContainerType& IteratedContainer;
	FBitArray::FSetBitIterator BitIterator;

public:
	TContainerIterator(const ContainerType& Container, const FBitArray& BitArray, int32 StartIndex = 0x0)
		: IteratedContainer(const_cast<ContainerType&>(Container)), BitIterator(BitArray, StartIndex)
	{
	}

public:
	inline int32 GetIndex() { return BitIterator.GetIndex(); }

	inline int32 IsValid() { return IteratedContainer.IsValidIndex(GetIndex()); }

public:
	inline TContainerIterator& operator++() { ++BitIterator; return *this; }
	inline TContainerIterator& operator--() { --BitIterator; return *this; }

	inline       auto& operator*() { return IteratedContainer[GetIndex()]; }
	inline const auto& operator*() const { return IteratedContainer[GetIndex()]; }

	inline       auto* operator->() { return &IteratedContainer[GetIndex()]; }
	inline const auto* operator->() const { return &IteratedContainer[GetIndex()]; }

	inline bool operator==(const TContainerIterator& Other) const { return &IteratedContainer == &Other.IteratedContainer && BitIterator == Other.BitIterator; }
	inline bool operator!=(const TContainerIterator& Other) const { return &IteratedContainer != &Other.IteratedContainer || BitIterator != Other.BitIterator; }
};

template<typename SparseArrayElementType>
class TSparseArray
{
private:
	static constexpr uint32 ElementAlign = alignof(SparseArrayElementType);
	static constexpr uint32 ElementSize = sizeof(SparseArrayElementType);

private:
	using FElementOrFreeListLink = TSparseArrayElementOrFreeListLink<TAlignedBytes<ElementSize, ElementAlign>>;

private:
	TArray<FElementOrFreeListLink> Data;
	FBitArray AllocationFlags;
	int32 FirstFreeIndex;
	int32 NumFreeIndices;

public:
	TSparseArray()
		: FirstFreeIndex(-1), NumFreeIndices(0)
	{
	}

	TSparseArray(TSparseArray&&) = default;
	TSparseArray(const TSparseArray&) = default;

public:
	TSparseArray& operator=(TSparseArray&&) = default;
	TSparseArray& operator=(const TSparseArray&) = default;

private:
	inline void VerifyIndex(int32 Index) const { if (!IsValidIndex(Index)) throw std::out_of_range("Index was out of range!"); }

public:
	inline int32 NumAllocated() const { return Data.Num(); }

	inline int32 Num() const { return NumAllocated() - NumFreeIndices; }
	inline int32 Max() const { return Data.Max(); }

	inline bool IsValidIndex(int32 Index) const { return Data.IsValidIndex(Index) && AllocationFlags[Index]; }

	inline bool IsValid() const { return Data.IsValid() && AllocationFlags.IsValid(); }

public:
	const FBitArray& GetAllocationFlags() const { return AllocationFlags; }

public:
	inline       SparseArrayElementType& operator[](int32 Index) { VerifyIndex(Index); return *reinterpret_cast<SparseArrayElementType*>(&Data.GetUnsafe(Index).ElementData); }
	inline const SparseArrayElementType& operator[](int32 Index) const { VerifyIndex(Index); return *reinterpret_cast<SparseArrayElementType*>(&Data.GetUnsafe(Index).ElementData); }

	inline bool operator==(const TSparseArray<SparseArrayElementType>& Other) const { return Data == Other.Data; }
	inline bool operator!=(const TSparseArray<SparseArrayElementType>& Other) const { return Data != Other.Data; }

public:
	template<typename T> friend TContainerIterator<TSparseArray<T>> begin(const TSparseArray& Array) {
		return TContainerIterator<TSparseArray<T>>(Array, Array.GetAllocationFlags(), 0);
	}
	template<typename T> friend TContainerIterator<TSparseArray<T>> end(const TSparseArray& Array) {
		return TContainerIterator<TSparseArray<T>>(Array, Array.GetAllocationFlags(), Array.NumAllocated());
	}
};

template<typename SetType>
class SetElement
{
private:
	template<typename SetDataType>
	friend class TSet;

private:
	SetType Value;
	int32 HashNextId;
	int32 HashIndex;
};

template<typename SetElementType>
class TSet
{
private:
	static constexpr uint32 ElementAlign = alignof(SetElementType);
	static constexpr uint32 ElementSize = sizeof(SetElementType);

private:
	using SetDataType = SetElement<SetElementType>;
	using HashType = TInlineAllocator<1>::ForElementType<int32>;

private:
	TSparseArray<SetDataType> Elements;
	HashType Hash;
	int32 HashSize;

public:
	TSet()
		: HashSize(0)
	{
	}

	TSet(TSet&&) = default;
	TSet(const TSet&) = default;

public:
	TSet& operator=(TSet&&) = default;
	TSet& operator=(const TSet&) = default;

private:
	inline void VerifyIndex(int32 Index) const { if (!IsValidIndex(Index)) throw std::out_of_range("Index was out of range!"); }

public:
	inline int32 NumAllocated() const { return Elements.NumAllocated(); }

	inline int32 Num() const { return Elements.Num(); }
	inline int32 Max() const { return Elements.Max(); }

	inline bool IsValidIndex(int32 Index) const { return Elements.IsValidIndex(Index); }

	inline bool IsValid() const { return Elements.IsValid(); }

public:
	const FBitArray& GetAllocationFlags() const { return Elements.GetAllocationFlags(); }

public:
	inline       SetElementType& operator[] (int32 Index) { return Elements[Index].Value; }
	inline const SetElementType& operator[] (int32 Index) const { return Elements[Index].Value; }

	inline bool operator==(const TSet<SetElementType>& Other) const { return Elements == Other.Elements; }
	inline bool operator!=(const TSet<SetElementType>& Other) const { return Elements != Other.Elements; }

public:
	template<typename T> friend TContainerIterator<TSet<T>> begin(const TSet& Set) {
		return TContainerIterator<TSet<T>>(Set, Set.GetAllocationFlags(), 0);
	}
	template<typename T> friend TContainerIterator<TSet<T>> end(const TSet& Set) {
		return TContainerIterator<TSet<T>>(Set, Set.GetAllocationFlags(), Set.NumAllocated());
	}
};

template<typename KeyElementType, typename ValueElementType>
class TMap
{
public:
	using ElementType = TPair<KeyElementType, ValueElementType>;

private:
	TSet<ElementType> Elements;

private:
	inline void VerifyIndex(int32 Index) const { if (!IsValidIndex(Index)) throw std::out_of_range("Index was out of range!"); }

public:
	inline int32 NumAllocated() const { return Elements.NumAllocated(); }

	inline int32 Num() const { return Elements.Num(); }
	inline int32 Max() const { return Elements.Max(); }

	inline bool IsValidIndex(int32 Index) const { return Elements.IsValidIndex(Index); }

	inline bool IsValid() const { return Elements.IsValid(); }

public:
	const FBitArray& GetAllocationFlags() const { return Elements.GetAllocationFlags(); }

public:
	inline decltype(auto) Find(const KeyElementType& Key, bool(*Equals)(const KeyElementType& LeftKey, const KeyElementType& RightKey))
	{
		for (auto It = begin(*this); It != end(*this); ++It)
		{
			if (Equals(It->Key(), Key))
				return It;
		}

		return end(*this);
	}

	template<typename NewValueType>
	operator TMap<KeyElementType, NewValueType *>() const
	{
		return *(TMap<KeyElementType, NewValueType *> *) this;
	}

public:
	inline       ElementType& operator[] (int32 Index) { VerifyIndex(Index); return Elements[Index]; }
	inline const ElementType& operator[] (int32 Index) const { VerifyIndex(Index); return Elements[Index]; }

	inline bool operator==(const TMap<KeyElementType, ValueElementType>& Other) const { return Elements == Other.Elements; }
	inline bool operator!=(const TMap<KeyElementType, ValueElementType>& Other) const { return Elements != Other.Elements; }

public:
	/*template<typename KeyType, typename ValueType> */friend TContainerIterator<TMap<KeyElementType, ValueElementType>> begin(const TMap& Map) {
		return TContainerIterator<TMap<KeyElementType, ValueElementType>>(Map, Map.GetAllocationFlags(), 0);
	}
	/*template<typename KeyType, typename ValueType> */friend TContainerIterator<TMap<KeyElementType, ValueElementType>> end(const TMap& Map) {
		return TContainerIterator<TMap<KeyElementType, ValueElementType>>(Map, Map.GetAllocationFlags(), Map.NumAllocated());
	}
};
class FWeakObjectPtr
{
//protected:
public:
	int32		ObjectIndex;
	int32		ObjectSerialNumber;

public:
	class UObject* Get() const;

	class UObject* operator->() const;

	bool operator==(const FWeakObjectPtr& Other) const;
	bool operator!=(const FWeakObjectPtr& Other) const;

	bool operator==(const class UObject* Other) const;
	bool operator!=(const class UObject* Other) const;
};

template<typename UEType>
class TWeakObjectPtr : public FWeakObjectPtr
{
public:

	UEType* Get() const
	{
		return static_cast<UEType*>(FWeakObjectPtr::Get());
	}

	UEType* operator->() const
	{
		return static_cast<UEType*>(FWeakObjectPtr::Get());
	}
};


struct FUniqueObjectGuid
{
	uint32 A;
	uint32 B;
	uint32 C;
	uint32 D;
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32 TagAtLastTest;
	TObjectID ObjectID;

	class UObject* Get() const
	{
		return WeakPtr.Get();
	}
	class UObject* operator->() const
	{
		return WeakPtr.Get();
	}
};

template<typename UEType>
class TLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid>
{
public:

	UEType* Get() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}

	UEType* operator->() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}
};
namespace SoftObjPathWrapper
{
// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.SoftObjectPath
struct FSoftObjectPath
{
public:
	class FName                                  AssetPathName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubPathString;                                     // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

class FSoftObjectPtr : public TPersistentObjectPtr<SoftObjPathWrapper::FSoftObjectPath>
{
public:
	FString GetSubPathString();
	std::string GetSubPathStringStr();

	template<class SoftObjectPath = FSoftObjectPath>
	SoftObjectPath& GetObjectPath();
};

HolderFunc(StaticFindObject_, (UObject* (*)(UClass* Class, UObject* Package, const wchar_t* OrigInName, bool ExactClass)) (BaseAddress + 0x2273b60));
HolderFunc(StaticLoadObject_, (UObject* (*)(UClass* Class, UObject* InOuter, const TCHAR* Name, const TCHAR* Filename, uint32_t LoadFlags, UObject* Sandbox, bool bAllowObjectReconciliation)) (BaseAddress + 0x2274e40));

__forceinline UObject* InternalFindObject(std::string ObjectPath, UClass* Class)
{
	return StaticFindObject_(Class, nullptr, std::wstring(ObjectPath.begin(), ObjectPath.end()).c_str(), false);
}

__forceinline UObject* InternalLoadObject(std::string Path, UClass* InClass, UObject* Outer = nullptr)
{
	return StaticLoadObject_(InClass, Outer, std::wstring(Path.begin(), Path.end()).c_str(), nullptr, 0, nullptr, false);
}

UObject* FindObject(std::string ObjectPath, UClass* Class);

template <typename T>
__forceinline T* FindObject(std::string ObjectPath, UClass* Class = T::StaticClass())
{
	return (T*) FindObject(ObjectPath, Class);
}

template<typename UEType>
class TSoftObjectPtr : public FSoftObjectPtr
{
public:

	UEType* Get() const
	{
		auto obj = static_cast<UEType*>(TPersistentObjectPtr::Get());
		if (!obj) obj = FindObject<UEType>(ObjectID.AssetPathName.GetRawString());
		return obj;
	}

	UEType* operator->() const
	{
		return Get();
	}

	operator UEType *() const
	{
		return Get();
	}
};

template<typename UEType>
class TSoftClassPtr : public FSoftObjectPtr
{
public:

	UClass* Get() const
	{
		auto obj = static_cast<UClass*>(TPersistentObjectPtr::Get());
		if (!obj) obj = FindObject<UClass>(ObjectID.AssetPathName.GetRawString());
		return obj;
	}

	UClass* operator->() const
	{
		return Get();
	}

	operator UClass*() const
	{
		return Get();
	}
};


enum class EClassCastFlags : uint64_t
{
	None = 0x0000000000000000,

	Field							= 0x0000000000000001,
	Int8Property					= 0x0000000000000002,
	Enum							= 0x0000000000000004,
	Struct							= 0x0000000000000008,
	ScriptStruct					= 0x0000000000000010,
	Class							= 0x0000000000000020,
	ByteProperty					= 0x0000000000000040,
	IntProperty						= 0x0000000000000080,
	FloatProperty					= 0x0000000000000100,
	UInt64Property					= 0x0000000000000200,
	ClassProperty					= 0x0000000000000400,
	UInt32Property					= 0x0000000000000800,
	InterfaceProperty				= 0x0000000000001000,
	NameProperty					= 0x0000000000002000,
	StrProperty						= 0x0000000000004000,
	Property						= 0x0000000000008000,
	ObjectProperty					= 0x0000000000010000,
	BoolProperty					= 0x0000000000020000,
	UInt16Property					= 0x0000000000040000,
	Function						= 0x0000000000080000,
	StructProperty					= 0x0000000000100000,
	ArrayProperty					= 0x0000000000200000,
	Int64Property					= 0x0000000000400000,
	DelegateProperty				= 0x0000000000800000,
	NumericProperty					= 0x0000000001000000,
	MulticastDelegateProperty		= 0x0000000002000000,
	ObjectPropertyBase				= 0x0000000004000000,
	WeakObjectProperty				= 0x0000000008000000,
	LazyObjectProperty				= 0x0000000010000000,
	SoftObjectProperty				= 0x0000000020000000,
	TextProperty					= 0x0000000040000000,
	Int16Property					= 0x0000000080000000,
	DoubleProperty					= 0x0000000100000000,
	SoftClassProperty				= 0x0000000200000000,
	Package							= 0x0000000400000000,
	Level							= 0x0000000800000000,
	Actor							= 0x0000001000000000,
	PlayerController				= 0x0000002000000000,
	Pawn							= 0x0000004000000000,
	SceneComponent					= 0x0000008000000000,
	PrimitiveComponent				= 0x0000010000000000,
	SkinnedMeshComponent			= 0x0000020000000000,
	SkeletalMeshComponent			= 0x0000040000000000,
	Blueprint						= 0x0000080000000000,
	DelegateFunction				= 0x0000100000000000,
	StaticMeshComponent				= 0x0000200000000000,
	MapProperty						= 0x0000400000000000,
	SetProperty						= 0x0000800000000000,
	EnumProperty					= 0x0001000000000000,
};

inline constexpr EClassCastFlags operator|(EClassCastFlags Left, EClassCastFlags Right)
{				
	using CastFlagsType = std::underlying_type<EClassCastFlags>::type;
	return static_cast<EClassCastFlags>(static_cast<CastFlagsType>(Left) | static_cast<CastFlagsType>(Right));
}

inline bool operator&(EClassCastFlags Left, EClassCastFlags Right)
{
	using CastFlagsType = std::underlying_type<EClassCastFlags>::type;
	return (static_cast<CastFlagsType>(Left) & static_cast<CastFlagsType>(Right)) == static_cast<CastFlagsType>(Right);
}


enum class EClassFlags : uint32
{
	CLASS_None					= 0x00000000u,
	Abstract					= 0x00000001u,
	DefaultConfig				= 0x00000002u,
	Config						= 0x00000004u,
	Transient					= 0x00000008u,
	Parsed						= 0x00000010u,
	MatchedSerializers			= 0x00000020u,
	ProjectUserConfig			= 0x00000040u,
	Native						= 0x00000080u,
	NoExport					= 0x00000100u,
	NotPlaceable				= 0x00000200u,
	PerObjectConfig				= 0x00000400u,
	ReplicationDataIsSetUp		= 0x00000800u,
	EditInlineNew				= 0x00001000u,
	CollapseCategories			= 0x00002000u,
	Interface					= 0x00004000u,
	CustomConstructor			= 0x00008000u,
	Const						= 0x00010000u,
	LayoutChanging				= 0x00020000u,
	CompiledFromBlueprint		= 0x00040000u,
	MinimalAPI					= 0x00080000u,
	RequiredAPI					= 0x00100000u,
	DefaultToInstanced			= 0x00200000u,
	TokenStreamAssembled		= 0x00400000u,
	HasInstancedReference		= 0x00800000u,
	Hidden						= 0x01000000u,
	Deprecated					= 0x02000000u,
	HideDropDown				= 0x04000000u,
	GlobalUserConfig			= 0x08000000u,
	Intrinsic					= 0x10000000u,
	Constructed					= 0x20000000u,
	ConfigDoNotCheckDefaults	= 0x40000000u,
	NewerVersionExists			= 0x80000000u,
};

inline constexpr EClassFlags operator|(EClassFlags Left, EClassFlags Right)
{
	using ClassFlagsType = std::underlying_type<EClassFlags>::type;
	return static_cast<EClassFlags>(static_cast<ClassFlagsType>(Left) | static_cast<ClassFlagsType>(Right));
}

inline bool operator&(EClassFlags Left, EClassFlags Right)
{
	using ClassFlagsType = std::underlying_type<EClassFlags>::type;
	return ((static_cast<ClassFlagsType>(Left) & static_cast<ClassFlagsType>(Right)) == static_cast<ClassFlagsType>(Right));
}

class FScriptInterface
{
public:
	UObject* ObjectPointer = nullptr;
	void* InterfacePointer = nullptr;

	inline UObject* GetObjectRef()
	{
		return ObjectPointer;
	}
};

template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
};


}


