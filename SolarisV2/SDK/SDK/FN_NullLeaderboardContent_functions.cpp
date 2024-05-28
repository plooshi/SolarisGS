#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NullLeaderboardContent.NullLeaderboardContent_C
// (None)

class UClass* UNullLeaderboardContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NullLeaderboardContent_C");

	return Clss;
}


// NullLeaderboardContent_C NullLeaderboardContent.Default__NullLeaderboardContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNullLeaderboardContent_C* UNullLeaderboardContent_C::GetDefaultObj()
{
	static class UNullLeaderboardContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNullLeaderboardContent_C*>(UNullLeaderboardContent_C::StaticClass()->DefaultObject);

	return Default;
}

}


