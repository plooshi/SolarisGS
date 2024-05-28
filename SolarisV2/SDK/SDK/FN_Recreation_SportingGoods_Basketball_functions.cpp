#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recreation_SportingGoods_Basketball.Recreation_SportingGoods_Basketball_C
// (Actor)

class UClass* ARecreation_SportingGoods_Basketball_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recreation_SportingGoods_Basketball_C");

	return Clss;
}


// Recreation_SportingGoods_Basketball_C Recreation_SportingGoods_Basketball.Default__Recreation_SportingGoods_Basketball_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecreation_SportingGoods_Basketball_C* ARecreation_SportingGoods_Basketball_C::GetDefaultObj()
{
	static class ARecreation_SportingGoods_Basketball_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecreation_SportingGoods_Basketball_C*>(ARecreation_SportingGoods_Basketball_C::StaticClass()->DefaultObject);

	return Default;
}

}


