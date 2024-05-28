#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_StatRow_DarkBlue.Border_StatRow_DarkBlue_C
// (None)

class UClass* UBorder_StatRow_DarkBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_StatRow_DarkBlue_C");

	return Clss;
}


// Border_StatRow_DarkBlue_C Border_StatRow_DarkBlue.Default__Border_StatRow_DarkBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_StatRow_DarkBlue_C* UBorder_StatRow_DarkBlue_C::GetDefaultObj()
{
	static class UBorder_StatRow_DarkBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_StatRow_DarkBlue_C*>(UBorder_StatRow_DarkBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


