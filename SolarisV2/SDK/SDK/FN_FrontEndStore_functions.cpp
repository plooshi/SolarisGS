#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FrontEndStore.FrontEndStore_C
// (Actor)

class UClass* AFrontEndStore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrontEndStore_C");

	return Clss;
}


// FrontEndStore_C FrontEndStore.Default__FrontEndStore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontEndStore_C* AFrontEndStore_C::GetDefaultObj()
{
	static class AFrontEndStore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontEndStore_C*>(AFrontEndStore_C::StaticClass()->DefaultObject);

	return Default;
}

}


