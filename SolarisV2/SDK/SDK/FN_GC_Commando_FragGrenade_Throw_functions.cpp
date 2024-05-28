#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Commando_FragGrenade_Throw.GC_Commando_FragGrenade_Throw_C
// (None)

class UClass* UGC_Commando_FragGrenade_Throw_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Commando_FragGrenade_Throw_C");

	return Clss;
}


// GC_Commando_FragGrenade_Throw_C GC_Commando_FragGrenade_Throw.Default__GC_Commando_FragGrenade_Throw_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Commando_FragGrenade_Throw_C* UGC_Commando_FragGrenade_Throw_C::GetDefaultObj()
{
	static class UGC_Commando_FragGrenade_Throw_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Commando_FragGrenade_Throw_C*>(UGC_Commando_FragGrenade_Throw_C::StaticClass()->DefaultObject);

	return Default;
}

}


