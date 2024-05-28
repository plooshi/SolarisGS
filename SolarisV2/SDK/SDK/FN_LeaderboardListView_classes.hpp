#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x238 - 0x230)
// WidgetBlueprintGeneratedClass LeaderboardListView.LeaderboardListView_C
class ULeaderboardListView_C : public UCommonUserWidget
{
public:
	class UCommonListView*                       List;                                              // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULeaderboardListView_C* GetDefaultObj();

	void FocusListView(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
};

}


