#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x230 - 0x228)
// WidgetBlueprintGeneratedClass CMSImage.CMSImage_C
class UCMSImage_C : public UUserWidget
{
public:
	class UEpicCMSImage*                         Image;                                             // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCMSImage_C* GetDefaultObj();

	void SetMediaURL(const class FString& MediaUrl);
};

}


