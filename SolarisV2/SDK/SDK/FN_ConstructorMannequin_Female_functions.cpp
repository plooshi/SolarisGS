#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ConstructorMannequin_Female.ConstructorMannequin_Female_C
// (Actor)

class UClass* AConstructorMannequin_Female_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstructorMannequin_Female_C");

	return Clss;
}


// ConstructorMannequin_Female_C ConstructorMannequin_Female.Default__ConstructorMannequin_Female_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AConstructorMannequin_Female_C* AConstructorMannequin_Female_C::GetDefaultObj()
{
	static class AConstructorMannequin_Female_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AConstructorMannequin_Female_C*>(AConstructorMannequin_Female_C::StaticClass()->DefaultObject);

	return Default;
}

}


