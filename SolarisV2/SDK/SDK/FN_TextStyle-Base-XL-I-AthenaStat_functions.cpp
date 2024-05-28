#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XL-I-AthenaStat.TextStyle-Base-XL-I-AthenaStat_C
// (None)

class UClass* UTextStyleMinusBaseMinusXLMinusIMinusAthenaStat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XL-I-AthenaStat_C");

	return Clss;
}


// TextStyle-Base-XL-I-AthenaStat_C TextStyle-Base-XL-I-AthenaStat.Default__TextStyle-Base-XL-I-AthenaStat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXLMinusIMinusAthenaStat_C* UTextStyleMinusBaseMinusXLMinusIMinusAthenaStat_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXLMinusIMinusAthenaStat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXLMinusIMinusAthenaStat_C*>(UTextStyleMinusBaseMinusXLMinusIMinusAthenaStat_C::StaticClass()->DefaultObject);

	return Default;
}

}


