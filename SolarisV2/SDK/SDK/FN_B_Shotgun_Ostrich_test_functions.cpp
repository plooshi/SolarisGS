#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C
// (Actor)

class UClass* AB_Shotgun_Ostrich_test_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Shotgun_Ostrich_test_C");

	return Clss;
}


// B_Shotgun_Ostrich_test_C B_Shotgun_Ostrich_test.Default__B_Shotgun_Ostrich_test_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Shotgun_Ostrich_test_C* AB_Shotgun_Ostrich_test_C::GetDefaultObj()
{
	static class AB_Shotgun_Ostrich_test_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Shotgun_Ostrich_test_C*>(AB_Shotgun_Ostrich_test_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C.OnLoadedRockets
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NumRocketsLoaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Shotgun_Ostrich_test_C::OnLoadedRockets(int32 NumRocketsLoaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Shotgun_Ostrich_test_C", "OnLoadedRockets");

	Params::AB_Shotgun_Ostrich_test_C_OnLoadedRockets_Params Parms{};

	Parms.NumRocketsLoaded = NumRocketsLoaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C.OnRocketFired
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USceneComponent*             AttachToMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AttachToSocket                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Shotgun_Ostrich_test_C::OnRocketFired(class USceneComponent* AttachToMesh, class FName AttachToSocket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Shotgun_Ostrich_test_C", "OnRocketFired");

	Params::AB_Shotgun_Ostrich_test_C_OnRocketFired_Params Parms{};

	Parms.AttachToMesh = AttachToMesh;
	Parms.AttachToSocket = AttachToSocket;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C.OnRocketLauncherSettle
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USceneComponent*             AttachToMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AttachToSocket                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Shotgun_Ostrich_test_C::OnRocketLauncherSettle(class USceneComponent* AttachToMesh, class FName AttachToSocket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Shotgun_Ostrich_test_C", "OnRocketLauncherSettle");

	Params::AB_Shotgun_Ostrich_test_C_OnRocketLauncherSettle_Params Parms{};

	Parms.AttachToMesh = AttachToMesh;
	Parms.AttachToSocket = AttachToSocket;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C.OnRocketFiringStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USceneComponent*             AttachToMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AttachToSocket                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Shotgun_Ostrich_test_C::OnRocketFiringStarted(class USceneComponent* AttachToMesh, class FName AttachToSocket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Shotgun_Ostrich_test_C", "OnRocketFiringStarted");

	Params::AB_Shotgun_Ostrich_test_C_OnRocketFiringStarted_Params Parms{};

	Parms.AttachToMesh = AttachToMesh;
	Parms.AttachToSocket = AttachToSocket;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Shotgun_Ostrich_test_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Shotgun_Ostrich_test_C", "OnPlayWeaponFireFX");

	Params::AB_Shotgun_Ostrich_test_C_OnPlayWeaponFireFX_Params Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C.ExecuteUbergraph_B_Shotgun_Ostrich_test
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMagazineAmmoCount_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NumRocketsLoaded                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Event_AttachToMesh_2                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_AttachToSocket_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Event_AttachToMesh_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_AttachToSocket_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Event_AttachToMesh                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_AttachToSocket                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Shotgun_Ostrich_test_C::ExecuteUbergraph_B_Shotgun_Ostrich_test(int32 EntryPoint, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, int32 K2Node_Event_NumRocketsLoaded, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, class USceneComponent* K2Node_Event_AttachToMesh_2, class FName K2Node_Event_AttachToSocket_2, class USceneComponent* K2Node_Event_AttachToMesh_1, class FName K2Node_Event_AttachToSocket_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class USceneComponent* K2Node_Event_AttachToMesh, class FName K2Node_Event_AttachToSocket, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, class APawn* CallFunc_GetInstigator_ReturnValue_2, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Shotgun_Ostrich_test_C", "ExecuteUbergraph_B_Shotgun_Ostrich_test");

	Params::AB_Shotgun_Ostrich_test_C_ExecuteUbergraph_B_Shotgun_Ostrich_test_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetMagazineAmmoCount_ReturnValue = CallFunc_GetMagazineAmmoCount_ReturnValue;
	Parms.K2Node_Event_NumRocketsLoaded = K2Node_Event_NumRocketsLoaded;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.K2Node_Event_AttachToMesh_2 = K2Node_Event_AttachToMesh_2;
	Parms.K2Node_Event_AttachToSocket_2 = K2Node_Event_AttachToSocket_2;
	Parms.K2Node_Event_AttachToMesh_1 = K2Node_Event_AttachToMesh_1;
	Parms.K2Node_Event_AttachToSocket_1 = K2Node_Event_AttachToSocket_1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.K2Node_Event_AttachToMesh = K2Node_Event_AttachToMesh;
	Parms.K2Node_Event_AttachToSocket = K2Node_Event_AttachToSocket;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue_1 = CallFunc_GetInstigator_ReturnValue_1;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1 = CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.CallFunc_GetInstigator_ReturnValue_2 = CallFunc_GetInstigator_ReturnValue_2;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2 = CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


