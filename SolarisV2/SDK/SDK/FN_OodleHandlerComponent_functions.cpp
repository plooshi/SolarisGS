#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OodleHandlerComponent.OodleTrainerCommandlet
// (None)

class UClass* UOodleTrainerCommandlet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OodleTrainerCommandlet");

	return Clss;
}


// OodleTrainerCommandlet OodleHandlerComponent.Default__OodleTrainerCommandlet
// (Public, ClassDefaultObject, ArchetypeObject)

class UOodleTrainerCommandlet* UOodleTrainerCommandlet::GetDefaultObj()
{
	static class UOodleTrainerCommandlet* Default = nullptr;

	if (!Default)
		Default = static_cast<UOodleTrainerCommandlet*>(UOodleTrainerCommandlet::StaticClass()->DefaultObject);

	return Default;
}

}


