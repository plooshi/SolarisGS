#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A8 (0x678 - 0x3D0)
// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C
class UAthenaLobbyPlayerPanel_C : public UAthenaLobbyPlayerPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BattlePassChevron;                                 // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        BattlePassRow;                                     // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SeasonPassIcon;                                    // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x3F8(0x200)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            OnGadgetsClicked;                                  // 0x5F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            OnClosed;                                          // 0x608(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  AddFriendText;                                     // 0x618(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  AcceptInviteText;                                  // 0x630(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SentInviteText;                                    // 0x648(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  AcceptedInviteText;                                // 0x660(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAthenaLobbyPlayerPanel_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Cancel();
	void Focus();
	void OnHasBattlePassUpdated(bool bHasBattlePass);
	void OnFriendStatusUpdated(enum class EFortFriendRequestStatus FriendRequestStatus);
	void OnIsMutedUpdated(bool bIsMuted);
	void ExecuteUbergraph_AthenaLobbyPlayerPanel(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable_1, enum class EFortFriendRequestStatus Temp_byte_Variable_2, enum class EFortFriendRequestStatus Temp_byte_Variable_3, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool K2Node_Event_bHasBattlePass, enum class EFortFriendRequestStatus K2Node_Event_FriendRequestStatus, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_5, bool K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool K2Node_Event_bIsMuted, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3);
	void OnClosed__DelegateSignature();
	void OnGadgetsClicked__DelegateSignature();
};

}


