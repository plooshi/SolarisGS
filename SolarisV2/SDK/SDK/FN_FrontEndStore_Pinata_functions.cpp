#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FrontEndStore_Pinata.FrontEndStore_Pinata_C
// (Actor)

class UClass* AFrontEndStore_Pinata_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrontEndStore_Pinata_C");

	return Clss;
}


// FrontEndStore_Pinata_C FrontEndStore_Pinata.Default__FrontEndStore_Pinata_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontEndStore_Pinata_C* AFrontEndStore_Pinata_C::GetDefaultObj()
{
	static class AFrontEndStore_Pinata_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontEndStore_Pinata_C*>(AFrontEndStore_Pinata_C::StaticClass()->DefaultObject);

	return Default;
}

}


