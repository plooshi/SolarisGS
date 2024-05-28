#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2B0 - 0x290)
// WidgetBlueprintGeneratedClass OstrichReticle.OstrichReticle_C
class UOstrichReticle_C : public UOstrichReticleDecorator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_MissleReticle;                               // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Default_Number_Rockets;                            // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B27[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              ReticleMID;                                        // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UOstrichReticle_C* GetDefaultObj();

	float GetGunnerRocketMax(class AFortWeaponRanged_Ostrich* CallFunc_GetGunnerWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetMaxRockets_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void ShotgunReload(float Duration);
	void RocketsFired();
	void RocketLoaded(float Percent, int32 Total);
	void RocketCooldown(float Percent);
	void Construct();
	void OnSetupComplete();
	void ExecuteUbergraph_OstrichReticle(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Event_Duration, float K2Node_Event_Percent_1, int32 K2Node_Event_Total, float K2Node_Event_Percent, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float Temp_float_Variable_2, bool Temp_bool_Variable_1, float Temp_float_Variable_3, float Temp_float_Variable_4, bool Temp_bool_Variable_2, float K2Node_Select_Default_1, float CallFunc_GetGunnerRocketMax_ReturnValue, float CallFunc_GetGunnerRocketMax_ReturnValue_1, float K2Node_Select_Default_2);
};

}


