#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-PageTitle.TextStyle-PageTitle_C
// (None)

class UClass* UTextStyleMinusPageTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-PageTitle_C");

	return Clss;
}


// TextStyle-PageTitle_C TextStyle-PageTitle.Default__TextStyle-PageTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusPageTitle_C* UTextStyleMinusPageTitle_C::GetDefaultObj()
{
	static class UTextStyleMinusPageTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusPageTitle_C*>(UTextStyleMinusPageTitle_C::StaticClass()->DefaultObject);

	return Default;
}

}


