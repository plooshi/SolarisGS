#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x370 - 0x318)
// BlueprintGeneratedClass CommandRoomItemPedestal.CommandRoomItemPedestal_C
class ACommandRoomItemPedestal_C : public AFortCommandRoomPedestal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagQuery                     Animation_Tag_Query_Idle;                          // 0x328(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ACommandRoomItemPedestal_C* GetDefaultObj();

	void OnHeroPawnSetupCompleted();
	void ExecuteUbergraph_CommandRoomItemPedestal(int32 EntryPoint, TScriptInterface<class ICustomCharacterPartOwnerInterface> CallFunc_PlayAnimationsMatchingQuery_self_CastInput);
};

}


