#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_SkillTree.Frontend_SkillTree_C
// (Actor)

class UClass* AFrontend_SkillTree_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_SkillTree_C");

	return Clss;
}


// Frontend_SkillTree_C Frontend_SkillTree.Default__Frontend_SkillTree_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_SkillTree_C* AFrontend_SkillTree_C::GetDefaultObj()
{
	static class AFrontend_SkillTree_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_SkillTree_C*>(AFrontend_SkillTree_C::StaticClass()->DefaultObject);

	return Default;
}

}


