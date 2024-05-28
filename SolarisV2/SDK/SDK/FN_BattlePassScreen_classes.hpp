#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x4D4 - 0x4B0)
// WidgetBlueprintGeneratedClass BattlePassScreen.BattlePassScreen_C
class UBattlePassScreen_C : public UBattlePassScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBattlePassScreenLanding_C*            AthenaBattlePassLanding;                           // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Page_Controller;                                   // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_63;                                       // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        CurrentZoomLevel;                                  // 0x4D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBattlePassScreen_C* GetDefaultObj();

	void Update_Zoom_Level(float ZoomLevel);
	class UWidget* GetWidgetForFramingViewedItem(class UWidget* CallFunc_GetBattlePassWidgetForFramingViewedItem_Widget);
	void HandleZoomRequest(class AActor* PlacementActor, bool bZoomOut);
	void OnHandlePipSelectedBP(int32 PipIndex);
	void OnInitialized();
	void ExecuteUbergraph_BattlePassScreen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class AActor* K2Node_Event_PlacementActor, bool K2Node_Event_bZoomOut, class AVaultCharacterPlacementHelper_C* K2Node_DynamicCast_AsVault_Character_Placement_Helper, bool K2Node_DynamicCast_bSuccess, int32 K2Node_Event_PipIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable, class FText K2Node_Select_Default);
};

}


