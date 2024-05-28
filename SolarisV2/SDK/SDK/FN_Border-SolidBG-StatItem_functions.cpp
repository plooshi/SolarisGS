#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-SolidBG-StatItem.Border-SolidBG-StatItem_C
// (None)

class UClass* UBorderMinusSolidBGMinusStatItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-SolidBG-StatItem_C");

	return Clss;
}


// Border-SolidBG-StatItem_C Border-SolidBG-StatItem.Default__Border-SolidBG-StatItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusSolidBGMinusStatItem_C* UBorderMinusSolidBGMinusStatItem_C::GetDefaultObj()
{
	static class UBorderMinusSolidBGMinusStatItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusSolidBGMinusStatItem_C*>(UBorderMinusSolidBGMinusStatItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


