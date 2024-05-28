#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Get_DirectDamageParent.Get_DirectDamageParent_C
// (None)

class UClass* UGet_DirectDamageParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Get_DirectDamageParent_C");

	return Clss;
}


// Get_DirectDamageParent_C Get_DirectDamageParent.Default__Get_DirectDamageParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGet_DirectDamageParent_C* UGet_DirectDamageParent_C::GetDefaultObj()
{
	static class UGet_DirectDamageParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGet_DirectDamageParent_C*>(UGet_DirectDamageParent_C::StaticClass()->DefaultObject);

	return Default;
}

}


