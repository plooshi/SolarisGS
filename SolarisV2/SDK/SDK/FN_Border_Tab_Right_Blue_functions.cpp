#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Tab_Right_Blue.Border_Tab_Right_Blue_C
// (None)

class UClass* UBorder_Tab_Right_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Tab_Right_Blue_C");

	return Clss;
}


// Border_Tab_Right_Blue_C Border_Tab_Right_Blue.Default__Border_Tab_Right_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Tab_Right_Blue_C* UBorder_Tab_Right_Blue_C::GetDefaultObj()
{
	static class UBorder_Tab_Right_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Tab_Right_Blue_C*>(UBorder_Tab_Right_Blue_C::StaticClass()->DefaultObject);

	return Default;
}

}


