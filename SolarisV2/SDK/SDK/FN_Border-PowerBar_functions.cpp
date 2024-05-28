#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-PowerBar.Border-PowerBar_C
// (None)

class UClass* UBorderMinusPowerBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-PowerBar_C");

	return Clss;
}


// Border-PowerBar_C Border-PowerBar.Default__Border-PowerBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusPowerBar_C* UBorderMinusPowerBar_C::GetDefaultObj()
{
	static class UBorderMinusPowerBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusPowerBar_C*>(UBorderMinusPowerBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


