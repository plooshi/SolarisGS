#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Sign_Exit_Leave.Sign_Exit_Leave_C
// (Actor)

class UClass* ASign_Exit_Leave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Sign_Exit_Leave_C");

	return Clss;
}


// Sign_Exit_Leave_C Sign_Exit_Leave.Default__Sign_Exit_Leave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASign_Exit_Leave_C* ASign_Exit_Leave_C::GetDefaultObj()
{
	static class ASign_Exit_Leave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASign_Exit_Leave_C*>(ASign_Exit_Leave_C::StaticClass()->DefaultObject);

	return Default;
}

}


