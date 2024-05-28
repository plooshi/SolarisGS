#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-RoundBoxM.Border-RoundBoxM_C
// (None)

class UClass* UBorderMinusRoundBoxM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-RoundBoxM_C");

	return Clss;
}


// Border-RoundBoxM_C Border-RoundBoxM.Default__Border-RoundBoxM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusRoundBoxM_C* UBorderMinusRoundBoxM_C::GetDefaultObj()
{
	static class UBorderMinusRoundBoxM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusRoundBoxM_C*>(UBorderMinusRoundBoxM_C::StaticClass()->DefaultObject);

	return Default;
}

}


