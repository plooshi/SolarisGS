#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S.TextStyle-Base-S_C
// (None)

class UClass* UTextStyleMinusBaseMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S_C");

	return Clss;
}


// TextStyle-Base-S_C TextStyle-Base-S.Default__TextStyle-Base-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusS_C* UTextStyleMinusBaseMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusS_C*>(UTextStyleMinusBaseMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


