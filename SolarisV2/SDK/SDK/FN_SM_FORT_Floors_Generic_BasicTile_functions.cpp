#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SM_FORT_Floors_Generic_BasicTile.SM_FORT_Floors_Generic_BasicTile_C
// (Actor)

class UClass* ASM_FORT_Floors_Generic_BasicTile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SM_FORT_Floors_Generic_BasicTile_C");

	return Clss;
}


// SM_FORT_Floors_Generic_BasicTile_C SM_FORT_Floors_Generic_BasicTile.Default__SM_FORT_Floors_Generic_BasicTile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASM_FORT_Floors_Generic_BasicTile_C* ASM_FORT_Floors_Generic_BasicTile_C::GetDefaultObj()
{
	static class ASM_FORT_Floors_Generic_BasicTile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASM_FORT_Floors_Generic_BasicTile_C*>(ASM_FORT_Floors_Generic_BasicTile_C::StaticClass()->DefaultObject);

	return Default;
}

}


