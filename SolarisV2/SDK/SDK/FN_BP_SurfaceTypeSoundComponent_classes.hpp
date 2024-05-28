#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7D (0x155 - 0xD8)
// BlueprintGeneratedClass BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C
class UBP_SurfaceTypeSoundComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EPhysicalSurface                  SurfaceType;                                       // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4824[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EPhysicalSurface, class USoundBase*> SoundMap;                                          // 0xE8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                             DelayDistanceRange;                                // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             DelayTimeRange;                                    // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x148(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSurfaceTypeSet;                                  // 0x154(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_SurfaceTypeSoundComponent_C* GetDefaultObj();

	void GetTimeDelayFromDistance(float* Delay, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_DistanceBetweenTwoVectors_Distance, float CallFunc_MapRangeClamped_ReturnValue);
	void ActuallyPlaySound(class USoundBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SetSurfaceType(enum class EPhysicalSurface SurfaceType, class AActor* Actor, enum class EPhysicalSurface Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor, bool K2Node_DynamicCast_bSuccess, enum class EPhysicalSurface Temp_byte_Variable_1, enum class EPhysicalSurface Temp_byte_Variable_2, enum class EPhysicalSurface Temp_byte_Variable_3, enum class EFortResourceType Temp_byte_Variable_4, enum class EPhysicalSurface Temp_byte_Variable_5, enum class EPhysicalSurface K2Node_Select_Default);
	void PlaySound(const struct FVector& Location, float CallFunc_GetTimeDelayFromDistance_Delay, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class USoundBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Test_Delay();
	void ExecuteUbergraph_BP_SurfaceTypeSoundComponent(int32 EntryPoint);
};

}


