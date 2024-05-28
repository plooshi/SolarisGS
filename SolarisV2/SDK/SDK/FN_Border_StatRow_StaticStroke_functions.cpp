#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_StatRow_StaticStroke.Border_StatRow_StaticStroke_C
// (None)

class UClass* UBorder_StatRow_StaticStroke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_StatRow_StaticStroke_C");

	return Clss;
}


// Border_StatRow_StaticStroke_C Border_StatRow_StaticStroke.Default__Border_StatRow_StaticStroke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_StatRow_StaticStroke_C* UBorder_StatRow_StaticStroke_C::GetDefaultObj()
{
	static class UBorder_StatRow_StaticStroke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_StatRow_StaticStroke_C*>(UBorder_StatRow_StaticStroke_C::StaticClass()->DefaultObject);

	return Default;
}

}


