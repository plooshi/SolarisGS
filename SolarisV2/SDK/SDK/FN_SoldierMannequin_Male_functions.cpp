#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SoldierMannequin_Male.SoldierMannequin_Male_C
// (Actor)

class UClass* ASoldierMannequin_Male_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoldierMannequin_Male_C");

	return Clss;
}


// SoldierMannequin_Male_C SoldierMannequin_Male.Default__SoldierMannequin_Male_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASoldierMannequin_Male_C* ASoldierMannequin_Male_C::GetDefaultObj()
{
	static class ASoldierMannequin_Male_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASoldierMannequin_Male_C*>(ASoldierMannequin_Male_C::StaticClass()->DefaultObject);

	return Default;
}

}


