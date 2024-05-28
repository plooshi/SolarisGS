#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-TabM.Border-TabM_C
// (None)

class UClass* UBorderMinusTabM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-TabM_C");

	return Clss;
}


// Border-TabM_C Border-TabM.Default__Border-TabM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusTabM_C* UBorderMinusTabM_C::GetDefaultObj()
{
	static class UBorderMinusTabM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusTabM_C*>(UBorderMinusTabM_C::StaticClass()->DefaultObject);

	return Default;
}

}


