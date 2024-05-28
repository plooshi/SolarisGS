#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VictoryImageStyles.VictoryImageStyles_C
// (None)

class UClass* UVictoryImageStyles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VictoryImageStyles_C");

	return Clss;
}


// VictoryImageStyles_C VictoryImageStyles.Default__VictoryImageStyles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVictoryImageStyles_C* UVictoryImageStyles_C::GetDefaultObj()
{
	static class UVictoryImageStyles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVictoryImageStyles_C*>(UVictoryImageStyles_C::StaticClass()->DefaultObject);

	return Default;
}

}


