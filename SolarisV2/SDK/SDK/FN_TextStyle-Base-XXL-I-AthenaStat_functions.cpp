#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XXL-I-AthenaStat.TextStyle-Base-XXL-I-AthenaStat_C
// (None)

class UClass* UTextStyleMinusBaseMinusXXLMinusIMinusAthenaStat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XXL-I-AthenaStat_C");

	return Clss;
}


// TextStyle-Base-XXL-I-AthenaStat_C TextStyle-Base-XXL-I-AthenaStat.Default__TextStyle-Base-XXL-I-AthenaStat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXXLMinusIMinusAthenaStat_C* UTextStyleMinusBaseMinusXXLMinusIMinusAthenaStat_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXXLMinusIMinusAthenaStat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXXLMinusIMinusAthenaStat_C*>(UTextStyleMinusBaseMinusXXLMinusIMinusAthenaStat_C::StaticClass()->DefaultObject);

	return Default;
}

}


