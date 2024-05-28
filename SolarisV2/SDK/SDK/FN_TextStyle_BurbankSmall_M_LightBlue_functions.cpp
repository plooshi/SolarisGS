#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_BurbankSmall_M_LightBlue.TextStyle_BurbankSmall_M_LightBlue_C
// (None)

class UClass* UTextStyle_BurbankSmall_M_LightBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_BurbankSmall_M_LightBlue_C");

	return Clss;
}


// TextStyle_BurbankSmall_M_LightBlue_C TextStyle_BurbankSmall_M_LightBlue.Default__TextStyle_BurbankSmall_M_LightBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_BurbankSmall_M_LightBlue_C* UTextStyle_BurbankSmall_M_LightBlue_C::GetDefaultObj()
{
	static class UTextStyle_BurbankSmall_M_LightBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_BurbankSmall_M_LightBlue_C*>(UTextStyle_BurbankSmall_M_LightBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


