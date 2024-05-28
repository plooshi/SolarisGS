#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-Empty.Border-Empty_C
// (None)

class UClass* UBorderMinusEmpty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-Empty_C");

	return Clss;
}


// Border-Empty_C Border-Empty.Default__Border-Empty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusEmpty_C* UBorderMinusEmpty_C::GetDefaultObj()
{
	static class UBorderMinusEmpty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusEmpty_C*>(UBorderMinusEmpty_C::StaticClass()->DefaultObject);

	return Default;
}

}


