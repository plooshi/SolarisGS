#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-Diff-Inc-Lockout.Border-Diff-Inc-Lockout_C
// (None)

class UClass* UBorderMinusDiffMinusIncMinusLockout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-Diff-Inc-Lockout_C");

	return Clss;
}


// Border-Diff-Inc-Lockout_C Border-Diff-Inc-Lockout.Default__Border-Diff-Inc-Lockout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusDiffMinusIncMinusLockout_C* UBorderMinusDiffMinusIncMinusLockout_C::GetDefaultObj()
{
	static class UBorderMinusDiffMinusIncMinusLockout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusDiffMinusIncMinusLockout_C*>(UBorderMinusDiffMinusIncMinusLockout_C::StaticClass()->DefaultObject);

	return Default;
}

}


