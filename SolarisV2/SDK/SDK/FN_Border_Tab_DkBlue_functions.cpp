#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Tab_DkBlue.Border_Tab_DkBlue_C
// (None)

class UClass* UBorder_Tab_DkBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Tab_DkBlue_C");

	return Clss;
}


// Border_Tab_DkBlue_C Border_Tab_DkBlue.Default__Border_Tab_DkBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Tab_DkBlue_C* UBorder_Tab_DkBlue_C::GetDefaultObj()
{
	static class UBorder_Tab_DkBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Tab_DkBlue_C*>(UBorder_Tab_DkBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


