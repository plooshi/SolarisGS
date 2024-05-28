#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xEF8 - 0xEE0)
// BlueprintGeneratedClass B_FerretWeapon.B_FerretWeapon_C
class AB_FerretWeapon_C : public AB_Ranged_Dual_Generic_FerretVehicle_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortAthenaFerretVehicle*              Biplane;                                           // 0xEE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          SnowmanCue;                                        // 0xEF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_FerretWeapon_C* GetDefaultObj();

	void K2_OnUnEquip();
	void FerretSnowmanCheck();
	void OnWeaponAttached();
	void HandFired(enum class EDualWeaponHand Hand, bool bPersistantFire);
	void OnStartOverheated();
	void ExecuteUbergraph_B_FerretWeapon(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AAthena_Player_SneakySnowman_C* K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman, bool K2Node_DynamicCast_bSuccess_1, class AB_FerretWeapon_C* K2Node_DynamicCast_AsB_Ferret_Weapon, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AB_SneakySnowman_Athena_C* K2Node_DynamicCast_AsB_Sneaky_Snowman_Athena, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetHostVehicleCached_ReturnValue, class AFortAthenaFerretVehicle* K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle, bool K2Node_DynamicCast_bSuccess_4, enum class EDualWeaponHand K2Node_Event_Hand, bool K2Node_Event_bPersistantFire, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface_1, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_GetCurrentOverheatValue_ReturnValue, float CallFunc_GetOverheatingMaxValue_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UFortVehicleSeatWeaponComponent* CallFunc_GetWeaponComponentCached_ReturnValue, class UFortVehicleSeatWeaponComponent* CallFunc_GetWeaponComponentCached_ReturnValue_1);
};

}


