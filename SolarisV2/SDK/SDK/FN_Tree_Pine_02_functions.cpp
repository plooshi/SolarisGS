#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tree_Pine_02.Tree_Pine_02_C
// (Actor)

class UClass* ATree_Pine_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tree_Pine_02_C");

	return Clss;
}


// Tree_Pine_02_C Tree_Pine_02.Default__Tree_Pine_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATree_Pine_02_C* ATree_Pine_02_C::GetDefaultObj()
{
	static class ATree_Pine_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATree_Pine_02_C*>(ATree_Pine_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


