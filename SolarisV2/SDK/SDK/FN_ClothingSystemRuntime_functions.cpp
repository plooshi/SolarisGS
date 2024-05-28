#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ClothingSystemRuntime.ClothingAssetCustomData
// (None)

class UClass* UClothingAssetCustomData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingAssetCustomData");

	return Clss;
}


// ClothingAssetCustomData ClothingSystemRuntime.Default__ClothingAssetCustomData
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingAssetCustomData* UClothingAssetCustomData::GetDefaultObj()
{
	static class UClothingAssetCustomData* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingAssetCustomData*>(UClothingAssetCustomData::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntime.ClothingAsset
// (None)

class UClass* UClothingAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingAsset");

	return Clss;
}


// ClothingAsset ClothingSystemRuntime.Default__ClothingAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingAsset* UClothingAsset::GetDefaultObj()
{
	static class UClothingAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingAsset*>(UClothingAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntime.ClothingSimulationFactoryNv
// (None)

class UClass* UClothingSimulationFactoryNv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingSimulationFactoryNv");

	return Clss;
}


// ClothingSimulationFactoryNv ClothingSystemRuntime.Default__ClothingSimulationFactoryNv
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingSimulationFactoryNv* UClothingSimulationFactoryNv::GetDefaultObj()
{
	static class UClothingSimulationFactoryNv* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingSimulationFactoryNv*>(UClothingSimulationFactoryNv::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntime.ClothingSimulationInteractorNv
// (None)

class UClass* UClothingSimulationInteractorNv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingSimulationInteractorNv");

	return Clss;
}


// ClothingSimulationInteractorNv ClothingSystemRuntime.Default__ClothingSimulationInteractorNv
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingSimulationInteractorNv* UClothingSimulationInteractorNv::GetDefaultObj()
{
	static class UClothingSimulationInteractorNv* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingSimulationInteractorNv*>(UClothingSimulationInteractorNv::StaticClass()->DefaultObject);

	return Default;
}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InStiffness                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractorNv::SetAnimDriveSpringStiffness(float InStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractorNv", "SetAnimDriveSpringStiffness");

	Params::UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Params Parms{};

	Parms.InStiffness = InStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InStiffness                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractorNv", "SetAnimDriveDamperStiffness");

	Params::UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params Parms{};

	Parms.InStiffness = InStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InVector                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractorNv::EnableGravityOverride(struct FVector& InVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractorNv", "EnableGravityOverride");

	Params::UClothingSimulationInteractorNv_EnableGravityOverride_Params Parms{};

	Parms.InVector = InVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UClothingSimulationInteractorNv::DisableGravityOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractorNv", "DisableGravityOverride");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


