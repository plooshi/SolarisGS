#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Solaris.MathLibrary_Bool
class UMathLibrary_Bool : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMathLibrary_Bool* GetDefaultObj();

	bool Logical_xor(bool LHS, bool RHS);
	bool Logical_not(bool Value);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.MathLibrary_Int
class UMathLibrary_Int : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMathLibrary_Int* GetDefaultObj();

	int32 Subtract(int32 LHS, int32 RHS);
	bool Not_equal(int32 LHS, int32 RHS);
	int32 Negate(int32 Value);
	int32 Multiply(int32 LHS, int32 RHS);
	int32 Min(int32 LHS, int32 RHS);
	int32 Max(int32 LHS, int32 RHS);
	bool Less_equal(int32 LHS, int32 RHS);
	bool Less(int32 LHS, int32 RHS);
	bool Greater_equal(int32 LHS, int32 RHS);
	bool Greater(int32 LHS, int32 RHS);
	bool Equal(int32 LHS, int32 RHS);
	int32 Divide(int32 LHS, int32 RHS);
	int32 Add(int32 LHS, int32 RHS);
	int32 Abs(int32 Value);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.MathLibrary_Real
class UMathLibrary_Real : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMathLibrary_Real* GetDefaultObj();

	float Subtract(float LHS, float RHS);
	bool Not_equal(float LHS, float RHS);
	float Negate(float Value);
	float Multiply(float LHS, float RHS);
	float Min(float LHS, float RHS);
	float Max(float LHS, float RHS);
	bool Less_equal(float LHS, float RHS);
	bool Less(float LHS, float RHS);
	bool Greater_equal(float LHS, float RHS);
	bool Greater(float LHS, float RHS);
	bool Equal(float LHS, float RHS);
	float Divide(float LHS, float RHS);
	float Add(float LHS, float RHS);
	float Abs(float Value);
};

// 0x20 (0x58 - 0x38)
// Class Solaris.SolarisGameSettings
class USolarisGameSettings : public UDeveloperSettings
{
public:
	TArray<class FString>                        WhiteList;                                         // 0x38(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        Blacklist;                                         // 0x48(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USolarisGameSettings* GetDefaultObj();

};

// 0x30 (0x258 - 0x228)
// Class Solaris.SolUserWidget
class USolUserWidget : public UUserWidget
{
public:
	uint8                                        Pad_237[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USolUserWidget* GetDefaultObj();

};

}


