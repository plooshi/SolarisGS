#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-M-B_Red.TextStyle-Base-M-B_Red_C
// (None)

class UClass* UTextStyleMinusBaseMinusMMinusB_Red_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-M-B_Red_C");

	return Clss;
}


// TextStyle-Base-M-B_Red_C TextStyle-Base-M-B_Red.Default__TextStyle-Base-M-B_Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusMMinusB_Red_C* UTextStyleMinusBaseMinusMMinusB_Red_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusMMinusB_Red_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusMMinusB_Red_C*>(UTextStyleMinusBaseMinusMMinusB_Red_C::StaticClass()->DefaultObject);

	return Default;
}

}


