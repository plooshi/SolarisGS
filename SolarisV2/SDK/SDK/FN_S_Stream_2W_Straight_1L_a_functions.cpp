#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S_Stream_2W_Straight_1L_a.S_Stream_2W_Straight_1L_a_C
// (Actor)

class UClass* AS_Stream_2W_Straight_1L_a_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S_Stream_2W_Straight_1L_a_C");

	return Clss;
}


// S_Stream_2W_Straight_1L_a_C S_Stream_2W_Straight_1L_a.Default__S_Stream_2W_Straight_1L_a_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AS_Stream_2W_Straight_1L_a_C* AS_Stream_2W_Straight_1L_a_C::GetDefaultObj()
{
	static class AS_Stream_2W_Straight_1L_a_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AS_Stream_2W_Straight_1L_a_C*>(AS_Stream_2W_Straight_1L_a_C::StaticClass()->DefaultObject);

	return Default;
}

}


