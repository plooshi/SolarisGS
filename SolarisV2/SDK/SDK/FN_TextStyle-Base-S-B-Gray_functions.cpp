#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-Gray.TextStyle-Base-S-B-Gray_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusGray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-Gray_C");

	return Clss;
}


// TextStyle-Base-S-B-Gray_C TextStyle-Base-S-B-Gray.Default__TextStyle-Base-S-B-Gray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusGray_C* UTextStyleMinusBaseMinusSMinusBMinusGray_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusGray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusGray_C*>(UTextStyleMinusBaseMinusSMinusBMinusGray_C::StaticClass()->DefaultObject);

	return Default;
}

}


