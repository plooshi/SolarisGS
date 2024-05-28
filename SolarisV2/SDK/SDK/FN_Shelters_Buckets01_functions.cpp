#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shelters_Buckets01.Shelters_Buckets01_C
// (Actor)

class UClass* AShelters_Buckets01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shelters_Buckets01_C");

	return Clss;
}


// Shelters_Buckets01_C Shelters_Buckets01.Default__Shelters_Buckets01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShelters_Buckets01_C* AShelters_Buckets01_C::GetDefaultObj()
{
	static class AShelters_Buckets01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShelters_Buckets01_C*>(AShelters_Buckets01_C::StaticClass()->DefaultObject);

	return Default;
}

}


