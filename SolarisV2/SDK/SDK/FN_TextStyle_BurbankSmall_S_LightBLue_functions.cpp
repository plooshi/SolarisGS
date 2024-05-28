#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_BurbankSmall_S_LightBLue.TextStyle_BurbankSmall_S_LightBLue_C
// (None)

class UClass* UTextStyle_BurbankSmall_S_LightBLue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_BurbankSmall_S_LightBLue_C");

	return Clss;
}


// TextStyle_BurbankSmall_S_LightBLue_C TextStyle_BurbankSmall_S_LightBLue.Default__TextStyle_BurbankSmall_S_LightBLue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_BurbankSmall_S_LightBLue_C* UTextStyle_BurbankSmall_S_LightBLue_C::GetDefaultObj()
{
	static class UTextStyle_BurbankSmall_S_LightBLue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_BurbankSmall_S_LightBLue_C*>(UTextStyle_BurbankSmall_S_LightBLue_C::StaticClass()->DefaultObject);

	return Default;
}

}


