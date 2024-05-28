#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Matchmaking_Rectangle.Border_Matchmaking_Rectangle_C
// (None)

class UClass* UBorder_Matchmaking_Rectangle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Matchmaking_Rectangle_C");

	return Clss;
}


// Border_Matchmaking_Rectangle_C Border_Matchmaking_Rectangle.Default__Border_Matchmaking_Rectangle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Matchmaking_Rectangle_C* UBorder_Matchmaking_Rectangle_C::GetDefaultObj()
{
	static class UBorder_Matchmaking_Rectangle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Matchmaking_Rectangle_C*>(UBorder_Matchmaking_Rectangle_C::StaticClass()->DefaultObject);

	return Default;
}

}


