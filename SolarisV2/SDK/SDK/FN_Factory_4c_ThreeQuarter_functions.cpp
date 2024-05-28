#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Factory_4c_ThreeQuarter.Factory_4c_ThreeQuarter_C
// (Actor)

class UClass* AFactory_4c_ThreeQuarter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Factory_4c_ThreeQuarter_C");

	return Clss;
}


// Factory_4c_ThreeQuarter_C Factory_4c_ThreeQuarter.Default__Factory_4c_ThreeQuarter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFactory_4c_ThreeQuarter_C* AFactory_4c_ThreeQuarter_C::GetDefaultObj()
{
	static class AFactory_4c_ThreeQuarter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFactory_4c_ThreeQuarter_C*>(AFactory_4c_ThreeQuarter_C::StaticClass()->DefaultObject);

	return Default;
}

}


