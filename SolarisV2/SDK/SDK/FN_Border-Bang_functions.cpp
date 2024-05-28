#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-Bang.Border-Bang_C
// (None)

class UClass* UBorderMinusBang_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-Bang_C");

	return Clss;
}


// Border-Bang_C Border-Bang.Default__Border-Bang_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusBang_C* UBorderMinusBang_C::GetDefaultObj()
{
	static class UBorderMinusBang_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusBang_C*>(UBorderMinusBang_C::StaticClass()->DefaultObject);

	return Default;
}

}


