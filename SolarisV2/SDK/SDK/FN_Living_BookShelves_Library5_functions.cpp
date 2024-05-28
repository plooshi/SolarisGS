#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Living_BookShelves_Library5.Living_BookShelves_Library5_C
// (Actor)

class UClass* ALiving_BookShelves_Library5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Living_BookShelves_Library5_C");

	return Clss;
}


// Living_BookShelves_Library5_C Living_BookShelves_Library5.Default__Living_BookShelves_Library5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALiving_BookShelves_Library5_C* ALiving_BookShelves_Library5_C::GetDefaultObj()
{
	static class ALiving_BookShelves_Library5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALiving_BookShelves_Library5_C*>(ALiving_BookShelves_Library5_C::StaticClass()->DefaultObject);

	return Default;
}

}


