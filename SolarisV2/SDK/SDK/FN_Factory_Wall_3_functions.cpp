#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Factory_Wall_3.Factory_Wall_3_C
// (Actor)

class UClass* AFactory_Wall_3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Factory_Wall_3_C");

	return Clss;
}


// Factory_Wall_3_C Factory_Wall_3.Default__Factory_Wall_3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFactory_Wall_3_C* AFactory_Wall_3_C::GetDefaultObj()
{
	static class AFactory_Wall_3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFactory_Wall_3_C*>(AFactory_Wall_3_C::StaticClass()->DefaultObject);

	return Default;
}

}


