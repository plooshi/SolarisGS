#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Chair_Office03.Chair_Office03_C
// (Actor)

class UClass* AChair_Office03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chair_Office03_C");

	return Clss;
}


// Chair_Office03_C Chair_Office03.Default__Chair_Office03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChair_Office03_C* AChair_Office03_C::GetDefaultObj()
{
	static class AChair_Office03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChair_Office03_C*>(AChair_Office03_C::StaticClass()->DefaultObject);

	return Default;
}

}


