#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-AthenaItemInfoRule.Border-AthenaItemInfoRule_C
// (None)

class UClass* UBorderMinusAthenaItemInfoRule_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-AthenaItemInfoRule_C");

	return Clss;
}


// Border-AthenaItemInfoRule_C Border-AthenaItemInfoRule.Default__Border-AthenaItemInfoRule_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusAthenaItemInfoRule_C* UBorderMinusAthenaItemInfoRule_C::GetDefaultObj()
{
	static class UBorderMinusAthenaItemInfoRule_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusAthenaItemInfoRule_C*>(UBorderMinusAthenaItemInfoRule_C::StaticClass()->DefaultObject);

	return Default;
}

}


