#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Factory_Wall_18.Factory_Wall_18_C
// (Actor)

class UClass* AFactory_Wall_18_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Factory_Wall_18_C");

	return Clss;
}


// Factory_Wall_18_C Factory_Wall_18.Default__Factory_Wall_18_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFactory_Wall_18_C* AFactory_Wall_18_C::GetDefaultObj()
{
	static class AFactory_Wall_18_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFactory_Wall_18_C*>(AFactory_Wall_18_C::StaticClass()->DefaultObject);

	return Default;
}

}


