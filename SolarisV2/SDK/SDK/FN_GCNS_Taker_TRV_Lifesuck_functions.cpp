#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_Taker_TRV_Lifesuck.GCNS_Taker_TRV_Lifesuck_C
// (None)

class UClass* UGCNS_Taker_TRV_Lifesuck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_Taker_TRV_Lifesuck_C");

	return Clss;
}


// GCNS_Taker_TRV_Lifesuck_C GCNS_Taker_TRV_Lifesuck.Default__GCNS_Taker_TRV_Lifesuck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_Taker_TRV_Lifesuck_C* UGCNS_Taker_TRV_Lifesuck_C::GetDefaultObj()
{
	static class UGCNS_Taker_TRV_Lifesuck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_Taker_TRV_Lifesuck_C*>(UGCNS_Taker_TRV_Lifesuck_C::StaticClass()->DefaultObject);

	return Default;
}

}


