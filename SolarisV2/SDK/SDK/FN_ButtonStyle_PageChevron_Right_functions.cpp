#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_PageChevron_Right.ButtonStyle_PageChevron_Right_C
// (None)

class UClass* UButtonStyle_PageChevron_Right_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_PageChevron_Right_C");

	return Clss;
}


// ButtonStyle_PageChevron_Right_C ButtonStyle_PageChevron_Right.Default__ButtonStyle_PageChevron_Right_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_PageChevron_Right_C* UButtonStyle_PageChevron_Right_C::GetDefaultObj()
{
	static class UButtonStyle_PageChevron_Right_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_PageChevron_Right_C*>(UButtonStyle_PageChevron_Right_C::StaticClass()->DefaultObject);

	return Default;
}

}


