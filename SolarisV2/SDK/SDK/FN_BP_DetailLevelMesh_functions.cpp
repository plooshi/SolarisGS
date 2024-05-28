#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DetailLevelMesh.BP_DetailLevelMesh_C
// (Actor)

class UClass* ABP_DetailLevelMesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DetailLevelMesh_C");

	return Clss;
}


// BP_DetailLevelMesh_C BP_DetailLevelMesh.Default__BP_DetailLevelMesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DetailLevelMesh_C* ABP_DetailLevelMesh_C::GetDefaultObj()
{
	static class ABP_DetailLevelMesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DetailLevelMesh_C*>(ABP_DetailLevelMesh_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DetailLevelMesh.BP_DetailLevelMesh_C.ExecuteUbergraph_BP_DetailLevelMesh
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DetailLevelMesh_C::ExecuteUbergraph_BP_DetailLevelMesh(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DetailLevelMesh_C", "ExecuteUbergraph_BP_DetailLevelMesh");

	Params::ABP_DetailLevelMesh_C_ExecuteUbergraph_BP_DetailLevelMesh_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


