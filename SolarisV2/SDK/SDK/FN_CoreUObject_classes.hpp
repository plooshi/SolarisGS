#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// Class CoreUObject.Object
class UObject
{
public:
	static class TUObjectArray*                  GObjects;                                          // (0x00[0x00]) NOT AUTO-GENERATED PROPERTY
	void**                                       Vft;                                               // (0x00[0x08]) NOT AUTO-GENERATED PROPERTY
	int32                                        Flags;                                             // (0x08[0x04]) NOT AUTO-GENERATED PROPERTY
	int32                                        Index;                                             // (0x0C[0x04]) NOT AUTO-GENERATED PROPERTY
	class UClass*                                Class;                                             // (0x10[0x08]) NOT AUTO-GENERATED PROPERTY
	class FName                                  Name;                                              // (0x18[0x08]) NOT AUTO-GENERATED PROPERTY
	class UObject*                               Outer;                                             // (0x20[0x08]) NOT AUTO-GENERATED PROPERTY


	bool HasTypeFlag(EClassCastFlags TypeFlag) const;

	bool IsDefaultObject() const
	{
		return (Flags & 0x10) == 0x10;
	}


	std::string GetName() const;

	std::string GetFullName() const;

	template<typename UEType = UObject>
	static UEType* FindObject(const std::string& FullName, EClassCastFlags RequiredType = EClassCastFlags::None)
	{
		for (int i = 0; i < GObjects->Num(); ++i)
		{
			UObject* Object = GObjects->GetByIndex(i);
	
			if (!Object)
				continue;
			
			if (Object->HasTypeFlag(RequiredType) && Object->GetFullName() == FullName)
			{
				return static_cast<UEType*>(Object);
			}
		}

		return nullptr;
	}


	template<typename UEType = UObject>
	static UEType* FindObjectFast(const std::string& Name, EClassCastFlags RequiredType = EClassCastFlags::None)
	{
		for (int i = 0; i < GObjects->Num(); ++i)
		{
			UObject* Object = GObjects->GetByIndex(i);
	
			if (!Object)
				continue;
			
			if (Object->HasTypeFlag(RequiredType) && Object->GetName() == Name)
			{
				return static_cast<UEType*>(Object);
			}
		}

		return nullptr;
	}

	template<typename UEType>
	static UEType* FindFirstObject(EClassCastFlags RequiredType = EClassCastFlags::None)
	{
		for (int i = 0; i < UObject::GObjects->Num(); i++)
		{
			UObject* Obj = UObject::GObjects->GetByIndex(i);

			if (!Obj)
				continue;

			if (Obj->IsA<UEType>() && !Obj->IsDefaultObject())
			{
				return static_cast<UEType*>(Obj);
			}
		}

		return nullptr;
	}


	static class UClass* FindClass(const char *ClassFullName)
	{
		return FindObject<class UClass>(ClassFullName, EClassCastFlags::Class);
	}


	static class UClass* FindClassFast(const char *ClassName)
	{
		return FindObjectFast<class UClass>(ClassName, EClassCastFlags::Class);
	}


	bool IsA(class UClass* Clss) const;
	template <typename T>
	bool IsA() const
	{
		return IsA(T::StaticClass());
	}

	inline void ProcessEvent(class UFunction* Function, void* Parms) const
	{
		return GetVFunction<void(*)(const UObject*, class UFunction*, void*)>(this, Offsets::ProcessEventIdx)(this, Function, Parms);
	}

	template <class T>
	T* Cast() {
		return IsA<T>() ? (T*)this : nullptr;
	}

	template <class T>
	T* Cast(UClass* Class) {
		return IsA(Class) ? (T*)this : nullptr;
	}

	static class UClass* StaticClass();
	static class UObject* GetDefaultObj();

	void ExecuteUbergraph(int32 EntryPoint);
};

// 0x0 (0x28 - 0x28)
// Class CoreUObject.Interface
class IInterface : public UObject
{
public:

	static class UClass* StaticClass();
	static class IInterface* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class CoreUObject.Package
class UPackage : public UObject
{
public:
	uint8                                        Pad_14[0x68];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPackage* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class CoreUObject.Field
class UField : public UObject
{
public:
	class UField*                                Next;                                              // (0x28[0x08]) NOT AUTO-GENERATED PROPERTY

	static class UClass* StaticClass();
	static class UField* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class CoreUObject.struct
class UStruct : public UField
{
public:
	uint8                                        Pad_16[0x10];                                      // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
	class UStruct*                               Super;                                             // (0x40[0x08]) NOT AUTO-GENERATED PROPERTY
	class UField*                                Children;                                          // (0x48[0x08]) NOT AUTO-GENERATED PROPERTY
	int32                                        Size;                                              // (0x50[0x04]) NOT AUTO-GENERATED PROPERTY
	uint8                                        Pad_17[0x44];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStruct* GetDefaultObj();

};

// 0x168 (0x200 - 0x98)
// Class CoreUObject.Class
class UClass : public UStruct
{
public:
	uint8                                        Pad_1A[0x20];                                      // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
	enum class EClassCastFlags                   CastFlags;                                         // (0xB8[0x08]) NOT AUTO-GENERATED PROPERTY
	uint8                                        Pad_1B[0x38];                                      // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
	class UObject*                               DefaultObject;                                     // (0xF8[0x08]) NOT AUTO-GENERATED PROPERTY
	uint8                                        Pad_1C[0x100];                                     // Fixing Size Of Struct [ Dumper-7 ]


	class UFunction* GetFunction(const char *ClassName, const char *FuncName);
	static class UClass* StaticClass();
	static class UClass* GetDefaultObj();

	bool DerivativeOf(class UClass* Clss) const
	{
		for (const UStruct* Super = this; Super; Super = Super->Super)
		{
			if (Super == Clss)
			{
				return true;
			}
		}

		return false;
	}

	template <typename T>
	bool DerivativeOf() const
	{
		return DerivativeOf(T::StaticClass());
	}
};

// 0x48 (0x70 - 0x28)
// Class CoreUObject.GCObjectReferencer
class UGCObjectReferencer : public UObject
{
public:
	uint8                                        Pad_1D[0x48];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGCObjectReferencer* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class CoreUObject.TextBuffer
class UTextBuffer : public UObject
{
public:
	uint8                                        Pad_22[0x28];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTextBuffer* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class CoreUObject.ScriptStruct
class UScriptStruct : public UStruct
{
public:
	uint8                                        Pad_25[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UScriptStruct* GetDefaultObj();

};

// 0x30 (0xC8 - 0x98)
// Class CoreUObject.Function
class UFunction : public UStruct
{
public:
	using FNativeFuncPtr = void (*)(void* Context, void* TheStack, void* Result);                                                  // (0x00[0x00]) NOT AUTO-GENERATED PROPERTY
	uint32                                       FunctionFlags;                                     // (0x98[0x08]) NOT AUTO-GENERATED PROPERTY
	uint8                                        Pad_27[0x20];                                      // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
	FNativeFuncPtr                               ExecFunction;                                      // (0xC0[0x08]) NOT AUTO-GENERATED PROPERTY

	static class UClass* StaticClass();
	static class UFunction* GetDefaultObj();

};

// 0x0 (0xC8 - 0xC8)
// Class CoreUObject.DelegateFunction
class UDelegateFunction : public UFunction
{
public:

	static class UClass* StaticClass();
	static class UDelegateFunction* GetDefaultObj();

};

// 0x10 (0xD8 - 0xC8)
// Class CoreUObject.SparseDelegateFunction
class USparseDelegateFunction : public UDelegateFunction
{
public:
	uint8                                        Pad_2A[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USparseDelegateFunction* GetDefaultObj();

};

// 0x68 (0x268 - 0x200)
// Class CoreUObject.DynamicClass
class UDynamicClass : public UClass
{
public:
	uint8                                        Pad_2D[0x68];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicClass* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class CoreUObject.PackageMap
class UPackageMap : public UObject
{
public:
	uint8                                        Pad_30[0xB8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPackageMap* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class CoreUObject.Enum
class UEnum : public UField
{
public:
	uint8                                        Pad_32[0x10];                                      // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
	class TArray<class TPair<class FName, int64>> Names;                                             // (0x40[0x10]) NOT AUTO-GENERATED PROPERTY
	uint8                                        Pad_34[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnum* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class CoreUObject.Property
class UProperty : public UField
{
public:
	uint8                                        Pad_38[0x4];                                       // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
	int32                                        ElementSize;                                       // (0x34[0x04]) NOT AUTO-GENERATED PROPERTY
	uint64                                       PropertyFlags;                                     // (0x38[0x08]) NOT AUTO-GENERATED PROPERTY
	uint8                                        Pad_39[0x4];                                       // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
	int32                                        Offset;                                            // (0x44[0x04]) NOT AUTO-GENERATED PROPERTY
	uint8                                        Pad_3A[0x28];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProperty* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class CoreUObject.EnumProperty
class UEnumProperty : public UProperty
{
public:
	class UProperty*                             UnderlayingProperty;                               // (0x70[0x08]) NOT AUTO-GENERATED PROPERTY
	class UEnum*                                 Enum;                                              // (0x78[0x08]) NOT AUTO-GENERATED PROPERTY

	static class UClass* StaticClass();
	static class UEnumProperty* GetDefaultObj();

};

// 0x1B8 (0x3B8 - 0x200)
// Class CoreUObject.LinkerPlaceholderClass
class ULinkerPlaceholderClass : public UClass
{
public:
	uint8                                        Pad_3F[0x1B8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULinkerPlaceholderClass* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class CoreUObject.LinkerPlaceholderExportObject
class ULinkerPlaceholderExportObject : public UObject
{
public:
	uint8                                        Pad_42[0xC8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULinkerPlaceholderExportObject* GetDefaultObj();

};

// 0x1B8 (0x280 - 0xC8)
// Class CoreUObject.LinkerPlaceholderFunction
class ULinkerPlaceholderFunction : public UFunction
{
public:
	uint8                                        Pad_43[0x1B8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULinkerPlaceholderFunction* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class CoreUObject.MetaData
class UMetaData : public UObject
{
public:
	uint8                                        Pad_46[0xA0];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMetaData* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class CoreUObject.ObjectRedirector
class UObjectRedirector : public UObject
{
public:
	uint8                                        Pad_48[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UObjectRedirector* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.ArrayProperty
class UArrayProperty : public UProperty
{
public:
	class UProperty*                             InnerProperty;                                     // (0x70[0x08]) NOT AUTO-GENERATED PROPERTY

	static class UClass* StaticClass();
	static class UArrayProperty* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.ObjectPropertyBase
class UObjectPropertyBase : public UProperty
{
public:
	class UClass*                                PropertyClass;                                     // (0x70[0x08]) NOT AUTO-GENERATED PROPERTY

	static class UClass* StaticClass();
	static class UObjectPropertyBase* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.BoolProperty
class UBoolProperty : public UProperty
{
public:
	uint8                                        FieldSize;                                         // (0x70[0x01]) NOT AUTO-GENERATED PROPERTY
	uint8                                        ByteOffset;                                        // (0x71[0x01]) NOT AUTO-GENERATED PROPERTY
	uint8                                        ByteMask;                                          // (0x72[0x01]) NOT AUTO-GENERATED PROPERTY
	uint8                                        FieldMask;                                         // (0x73[0x01]) NOT AUTO-GENERATED PROPERTY
	uint8                                        Pad_4D[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBoolProperty* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.NumericProperty
class UNumericProperty : public UProperty
{
public:

	static class UClass* StaticClass();
	static class UNumericProperty* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.ByteProperty
class UByteProperty : public UNumericProperty
{
public:
	class UEnum*                                 Enum;                                              // (0x70[0x08]) NOT AUTO-GENERATED PROPERTY

	static class UClass* StaticClass();
	static class UByteProperty* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class CoreUObject.ObjectProperty
class UObjectProperty : public UObjectPropertyBase
{
public:

	static class UClass* StaticClass();
	static class UObjectProperty* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class CoreUObject.ClassProperty
class UClassProperty : public UObjectProperty
{
public:
	class UClass*                                MetaClass;                                         // (0x78[0x08]) NOT AUTO-GENERATED PROPERTY

	static class UClass* StaticClass();
	static class UClassProperty* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.DelegateProperty
class UDelegateProperty : public UProperty
{
public:
	uint8                                        Pad_52[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDelegateProperty* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.DoubleProperty
class UDoubleProperty : public UNumericProperty
{
public:

	static class UClass* StaticClass();
	static class UDoubleProperty* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.FloatProperty
class UFloatProperty : public UNumericProperty
{
public:

	static class UClass* StaticClass();
	static class UFloatProperty* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.IntProperty
class UIntProperty : public UNumericProperty
{
public:

	static class UClass* StaticClass();
	static class UIntProperty* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.Int16Property
class UInt16Property : public UNumericProperty
{
public:

	static class UClass* StaticClass();
	static class UInt16Property* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.Int64Property
class UInt64Property : public UNumericProperty
{
public:

	static class UClass* StaticClass();
	static class UInt64Property* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.Int8Property
class UInt8Property : public UNumericProperty
{
public:

	static class UClass* StaticClass();
	static class UInt8Property* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.InterfaceProperty
class UInterfaceProperty : public UProperty
{
public:
	uint8                                        Pad_5A[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterfaceProperty* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class CoreUObject.LazyObjectProperty
class ULazyObjectProperty : public UObjectPropertyBase
{
public:

	static class UClass* StaticClass();
	static class ULazyObjectProperty* GetDefaultObj();

};

// 0x28 (0x98 - 0x70)
// Class CoreUObject.MapProperty
class UMapProperty : public UProperty
{
public:
	class UProperty*                             KeyProperty;                                       // (0x70[0x08]) NOT AUTO-GENERATED PROPERTY
	class UProperty*                             ValueProperty;                                     // (0x78[0x08]) NOT AUTO-GENERATED PROPERTY
	uint8                                        Pad_5D[0x18];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMapProperty* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.MulticastDelegateProperty
class UMulticastDelegateProperty : public UProperty
{
public:
	uint8                                        Pad_5F[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMulticastDelegateProperty* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class CoreUObject.MulticastInlineDelegateProperty
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{
public:

	static class UClass* StaticClass();
	static class UMulticastInlineDelegateProperty* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class CoreUObject.MulticastSparseDelegateProperty
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{
public:

	static class UClass* StaticClass();
	static class UMulticastSparseDelegateProperty* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.NameProperty
class UNameProperty : public UProperty
{
public:

	static class UClass* StaticClass();
	static class UNameProperty* GetDefaultObj();

};

// 0x20 (0x90 - 0x70)
// Class CoreUObject.SetProperty
class USetProperty : public UProperty
{
public:
	class UProperty*                             ElementProperty;                                   // (0x70[0x08]) NOT AUTO-GENERATED PROPERTY
	uint8                                        Pad_6A[0x18];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USetProperty* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class CoreUObject.SoftObjectProperty
class USoftObjectProperty : public UObjectPropertyBase
{
public:

	static class UClass* StaticClass();
	static class USoftObjectProperty* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class CoreUObject.SoftClassProperty
class USoftClassProperty : public USoftObjectProperty
{
public:
	uint8                                        Pad_70[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoftClassProperty* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.StrProperty
class UStrProperty : public UProperty
{
public:

	static class UClass* StaticClass();
	static class UStrProperty* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.StructProperty
class UStructProperty : public UProperty
{
public:
	class UStruct*                               Struct;                                            // (0x70[0x08]) NOT AUTO-GENERATED PROPERTY

	static class UClass* StaticClass();
	static class UStructProperty* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.UInt16Property
class UUInt16Property : public UNumericProperty
{
public:

	static class UClass* StaticClass();
	static class UUInt16Property* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.UInt32Property
class UUInt32Property : public UNumericProperty
{
public:

	static class UClass* StaticClass();
	static class UUInt32Property* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.UInt64Property
class UUInt64Property : public UNumericProperty
{
public:

	static class UClass* StaticClass();
	static class UUInt64Property* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class CoreUObject.WeakObjectProperty
class UWeakObjectProperty : public UObjectPropertyBase
{
public:

	static class UClass* StaticClass();
	static class UWeakObjectProperty* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.TextProperty
class UTextProperty : public UProperty
{
public:

	static class UClass* StaticClass();
	static class UTextProperty* GetDefaultObj();

};

}


