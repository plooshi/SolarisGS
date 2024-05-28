#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary
class ULiveLinkDebuggerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkDebuggerBlueprintLibrary* GetDefaultObj();

	void HideLiveLinkDebugger();
	void DisplayLiveLinkDebugger(const class FString& SubjectName);
};

// 0x58 (0x80 - 0x28)
// Class LiveLinkCurveDebugUI.LiveLinkDebuggerSettings
class ULiveLinkDebuggerSettings : public UObject
{
public:
	struct FSlateColor                           MinBarColor;                                       // 0x28(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FSlateColor                           MaxBarColor;                                       // 0x50(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	float                                        DPIScaleMultiplier;                                // 0x78(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkDebuggerSettings* GetDefaultObj();

	float GetDPIScaleBasedOnSize(const struct FIntPoint& Size);
	struct FSlateColor GetBarColorForCurveValue(float CurveValue);
};

}


