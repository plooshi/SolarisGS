#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-AthenaItemInfoHeader.Border-AthenaItemInfoHeader_C
// (None)

class UClass* UBorderMinusAthenaItemInfoHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-AthenaItemInfoHeader_C");

	return Clss;
}


// Border-AthenaItemInfoHeader_C Border-AthenaItemInfoHeader.Default__Border-AthenaItemInfoHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusAthenaItemInfoHeader_C* UBorderMinusAthenaItemInfoHeader_C::GetDefaultObj()
{
	static class UBorderMinusAthenaItemInfoHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusAthenaItemInfoHeader_C*>(UBorderMinusAthenaItemInfoHeader_C::StaticClass()->DefaultObject);

	return Default;
}

}


