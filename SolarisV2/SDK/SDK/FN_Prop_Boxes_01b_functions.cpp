#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prop_Boxes_01b.Prop_Boxes_01b_C
// (Actor)

class UClass* AProp_Boxes_01b_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prop_Boxes_01b_C");

	return Clss;
}


// Prop_Boxes_01b_C Prop_Boxes_01b.Default__Prop_Boxes_01b_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProp_Boxes_01b_C* AProp_Boxes_01b_C::GetDefaultObj()
{
	static class AProp_Boxes_01b_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProp_Boxes_01b_C*>(AProp_Boxes_01b_C::StaticClass()->DefaultObject);

	return Default;
}

}


