#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Factory_Wall_13.Factory_Wall_13_C
// (Actor)

class UClass* AFactory_Wall_13_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Factory_Wall_13_C");

	return Clss;
}


// Factory_Wall_13_C Factory_Wall_13.Default__Factory_Wall_13_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFactory_Wall_13_C* AFactory_Wall_13_C::GetDefaultObj()
{
	static class AFactory_Wall_13_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFactory_Wall_13_C*>(AFactory_Wall_13_C::StaticClass()->DefaultObject);

	return Default;
}

}


