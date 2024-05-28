#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-Gray.TextStyle-Base-S-Gray_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusGray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-Gray_C");

	return Clss;
}


// TextStyle-Base-S-Gray_C TextStyle-Base-S-Gray.Default__TextStyle-Base-S-Gray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusGray_C* UTextStyleMinusBaseMinusSMinusGray_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusGray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusGray_C*>(UTextStyleMinusBaseMinusSMinusGray_C::StaticClass()->DefaultObject);

	return Default;
}

}


