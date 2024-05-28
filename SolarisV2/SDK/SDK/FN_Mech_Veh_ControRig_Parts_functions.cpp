#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass Mech_Veh_ControRig_Parts.Mech_Veh_ControRig_Parts_C
// (None)

class UClass* UMech_Veh_ControRig_Parts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mech_Veh_ControRig_Parts_C");

	return Clss;
}


// Mech_Veh_ControRig_Parts_C Mech_Veh_ControRig_Parts.Default__Mech_Veh_ControRig_Parts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMech_Veh_ControRig_Parts_C* UMech_Veh_ControRig_Parts_C::GetDefaultObj()
{
	static class UMech_Veh_ControRig_Parts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMech_Veh_ControRig_Parts_C*>(UMech_Veh_ControRig_Parts_C::StaticClass()->DefaultObject);

	return Default;
}

}


