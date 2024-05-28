#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-MainL.Border-MainL_C
// (None)

class UClass* UBorderMinusMainL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-MainL_C");

	return Clss;
}


// Border-MainL_C Border-MainL.Default__Border-MainL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusMainL_C* UBorderMinusMainL_C::GetDefaultObj()
{
	static class UBorderMinusMainL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusMainL_C*>(UBorderMinusMainL_C::StaticClass()->DefaultObject);

	return Default;
}

}


