#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Perk_H_ElectrifiedFloors_T02_Damage_.GE_Perk_H_ElectrifiedFloors_T02_Damage__C
// (None)

class UClass* UGE_Perk_H_ElectrifiedFloors_T02_Damage__C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Perk_H_ElectrifiedFloors_T02_Damage__C");

	return Clss;
}


// GE_Perk_H_ElectrifiedFloors_T02_Damage__C GE_Perk_H_ElectrifiedFloors_T02_Damage_.Default__GE_Perk_H_ElectrifiedFloors_T02_Damage__C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Perk_H_ElectrifiedFloors_T02_Damage__C* UGE_Perk_H_ElectrifiedFloors_T02_Damage__C::GetDefaultObj()
{
	static class UGE_Perk_H_ElectrifiedFloors_T02_Damage__C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Perk_H_ElectrifiedFloors_T02_Damage__C*>(UGE_Perk_H_ElectrifiedFloors_T02_Damage__C::StaticClass()->DefaultObject);

	return Default;
}

}


