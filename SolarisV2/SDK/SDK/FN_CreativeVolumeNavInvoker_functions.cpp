#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CreativeVolumeNavInvoker.CreativeVolumeNavInvoker_C
// (Actor)

class UClass* ACreativeVolumeNavInvoker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeVolumeNavInvoker_C");

	return Clss;
}


// CreativeVolumeNavInvoker_C CreativeVolumeNavInvoker.Default__CreativeVolumeNavInvoker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACreativeVolumeNavInvoker_C* ACreativeVolumeNavInvoker_C::GetDefaultObj()
{
	static class ACreativeVolumeNavInvoker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACreativeVolumeNavInvoker_C*>(ACreativeVolumeNavInvoker_C::StaticClass()->DefaultObject);

	return Default;
}

}


