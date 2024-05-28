#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Ninja_Tactical_EscapeArtist_Applied.GE_Ninja_Tactical_EscapeArtist_Applied_C
// (None)

class UClass* UGE_Ninja_Tactical_EscapeArtist_Applied_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Ninja_Tactical_EscapeArtist_Applied_C");

	return Clss;
}


// GE_Ninja_Tactical_EscapeArtist_Applied_C GE_Ninja_Tactical_EscapeArtist_Applied.Default__GE_Ninja_Tactical_EscapeArtist_Applied_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Ninja_Tactical_EscapeArtist_Applied_C* UGE_Ninja_Tactical_EscapeArtist_Applied_C::GetDefaultObj()
{
	static class UGE_Ninja_Tactical_EscapeArtist_Applied_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Ninja_Tactical_EscapeArtist_Applied_C*>(UGE_Ninja_Tactical_EscapeArtist_Applied_C::StaticClass()->DefaultObject);

	return Default;
}

}


