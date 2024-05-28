#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Ranged_GenericDamage_Explosive.GE_Ranged_GenericDamage_Explosive_C
// (None)

class UClass* UGE_Ranged_GenericDamage_Explosive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Ranged_GenericDamage_Explosive_C");

	return Clss;
}


// GE_Ranged_GenericDamage_Explosive_C GE_Ranged_GenericDamage_Explosive.Default__GE_Ranged_GenericDamage_Explosive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Ranged_GenericDamage_Explosive_C* UGE_Ranged_GenericDamage_Explosive_C::GetDefaultObj()
{
	static class UGE_Ranged_GenericDamage_Explosive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Ranged_GenericDamage_Explosive_C*>(UGE_Ranged_GenericDamage_Explosive_C::StaticClass()->DefaultObject);

	return Default;
}

}


