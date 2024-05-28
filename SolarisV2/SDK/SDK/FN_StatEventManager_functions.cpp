#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StatEventManager.StatEventManager_C
// (None)

class UClass* UStatEventManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatEventManager_C");

	return Clss;
}


// StatEventManager_C StatEventManager.Default__StatEventManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatEventManager_C* UStatEventManager_C::GetDefaultObj()
{
	static class UStatEventManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatEventManager_C*>(UStatEventManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


