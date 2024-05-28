#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-StatBG.Border-StatBG_C
// (None)

class UClass* UBorderMinusStatBG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-StatBG_C");

	return Clss;
}


// Border-StatBG_C Border-StatBG.Default__Border-StatBG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusStatBG_C* UBorderMinusStatBG_C::GetDefaultObj()
{
	static class UBorderMinusStatBG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusStatBG_C*>(UBorderMinusStatBG_C::StaticClass()->DefaultObject);

	return Default;
}

}


