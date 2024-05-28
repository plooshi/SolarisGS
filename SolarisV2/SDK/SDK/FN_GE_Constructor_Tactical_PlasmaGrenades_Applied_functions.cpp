#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Constructor_Tactical_PlasmaGrenades_Applied.GE_Constructor_Tactical_PlasmaGrenades_Applied_C
// (None)

class UClass* UGE_Constructor_Tactical_PlasmaGrenades_Applied_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Constructor_Tactical_PlasmaGrenades_Applied_C");

	return Clss;
}


// GE_Constructor_Tactical_PlasmaGrenades_Applied_C GE_Constructor_Tactical_PlasmaGrenades_Applied.Default__GE_Constructor_Tactical_PlasmaGrenades_Applied_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Constructor_Tactical_PlasmaGrenades_Applied_C* UGE_Constructor_Tactical_PlasmaGrenades_Applied_C::GetDefaultObj()
{
	static class UGE_Constructor_Tactical_PlasmaGrenades_Applied_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Constructor_Tactical_PlasmaGrenades_Applied_C*>(UGE_Constructor_Tactical_PlasmaGrenades_Applied_C::StaticClass()->DefaultObject);

	return Default;
}

}


