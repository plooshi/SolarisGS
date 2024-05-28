#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shelters_Boombox01.Shelters_Boombox01_C
// (Actor)

class UClass* AShelters_Boombox01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shelters_Boombox01_C");

	return Clss;
}


// Shelters_Boombox01_C Shelters_Boombox01.Default__Shelters_Boombox01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShelters_Boombox01_C* AShelters_Boombox01_C::GetDefaultObj()
{
	static class AShelters_Boombox01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShelters_Boombox01_C*>(AShelters_Boombox01_C::StaticClass()->DefaultObject);

	return Default;
}

}


