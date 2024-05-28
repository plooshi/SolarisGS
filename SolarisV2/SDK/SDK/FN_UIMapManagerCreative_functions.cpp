#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UIMapManagerCreative.UIMapManagerCreative_C
// (Actor)

class UClass* AUIMapManagerCreative_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIMapManagerCreative_C");

	return Clss;
}


// UIMapManagerCreative_C UIMapManagerCreative.Default__UIMapManagerCreative_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUIMapManagerCreative_C* AUIMapManagerCreative_C::GetDefaultObj()
{
	static class AUIMapManagerCreative_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUIMapManagerCreative_C*>(AUIMapManagerCreative_C::StaticClass()->DefaultObject);

	return Default;
}

}


