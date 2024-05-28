#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_StatRow_Unlocked.Border_StatRow_Unlocked_C
// (None)

class UClass* UBorder_StatRow_Unlocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_StatRow_Unlocked_C");

	return Clss;
}


// Border_StatRow_Unlocked_C Border_StatRow_Unlocked.Default__Border_StatRow_Unlocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_StatRow_Unlocked_C* UBorder_StatRow_Unlocked_C::GetDefaultObj()
{
	static class UBorder_StatRow_Unlocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_StatRow_Unlocked_C*>(UBorder_StatRow_Unlocked_C::StaticClass()->DefaultObject);

	return Default;
}

}


