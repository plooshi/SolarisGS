#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_TimerBox.Border_TimerBox_C
// (None)

class UClass* UBorder_TimerBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_TimerBox_C");

	return Clss;
}


// Border_TimerBox_C Border_TimerBox.Default__Border_TimerBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_TimerBox_C* UBorder_TimerBox_C::GetDefaultObj()
{
	static class UBorder_TimerBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_TimerBox_C*>(UBorder_TimerBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


