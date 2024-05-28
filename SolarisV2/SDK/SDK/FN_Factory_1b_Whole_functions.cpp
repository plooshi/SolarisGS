#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Factory_1b_Whole.Factory_1b_Whole_C
// (Actor)

class UClass* AFactory_1b_Whole_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Factory_1b_Whole_C");

	return Clss;
}


// Factory_1b_Whole_C Factory_1b_Whole.Default__Factory_1b_Whole_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFactory_1b_Whole_C* AFactory_1b_Whole_C::GetDefaultObj()
{
	static class AFactory_1b_Whole_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFactory_1b_Whole_C*>(AFactory_1b_Whole_C::StaticClass()->DefaultObject);

	return Default;
}

}


