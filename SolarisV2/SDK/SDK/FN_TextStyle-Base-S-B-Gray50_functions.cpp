#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-Gray50.TextStyle-Base-S-B-Gray50_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusGray50_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-Gray50_C");

	return Clss;
}


// TextStyle-Base-S-B-Gray50_C TextStyle-Base-S-B-Gray50.Default__TextStyle-Base-S-B-Gray50_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusGray50_C* UTextStyleMinusBaseMinusSMinusBMinusGray50_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusGray50_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusGray50_C*>(UTextStyleMinusBaseMinusSMinusBMinusGray50_C::StaticClass()->DefaultObject);

	return Default;
}

}


