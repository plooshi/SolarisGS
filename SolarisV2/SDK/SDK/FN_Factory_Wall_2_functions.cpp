#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Factory_Wall_2.Factory_Wall_2_C
// (Actor)

class UClass* AFactory_Wall_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Factory_Wall_2_C");

	return Clss;
}


// Factory_Wall_2_C Factory_Wall_2.Default__Factory_Wall_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFactory_Wall_2_C* AFactory_Wall_2_C::GetDefaultObj()
{
	static class AFactory_Wall_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFactory_Wall_2_C*>(AFactory_Wall_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


