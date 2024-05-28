#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C
// (None)

class UClass* UGA_Athena_ShieldSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_ShieldSmall_C");

	return Clss;
}


// GA_Athena_ShieldSmall_C GA_Athena_ShieldSmall.Default__GA_Athena_ShieldSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_ShieldSmall_C* UGA_Athena_ShieldSmall_C::GetDefaultObj()
{
	static class UGA_Athena_ShieldSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_ShieldSmall_C*>(UGA_Athena_ShieldSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


