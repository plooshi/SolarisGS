#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x130 - 0xA8)
// BlueprintGeneratedClass BasicNotification.BasicNotification_C
class UBasicNotification_C : public UFortUINotification
{
public:
	struct FSlateBrush                           Image;                                             // 0xA8(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBasicNotification_C* GetDefaultObj();

	class UTexture2D* GetImageOverride(class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
};

}


