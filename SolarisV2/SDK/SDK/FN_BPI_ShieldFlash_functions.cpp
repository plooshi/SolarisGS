#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ShieldFlash.BPI_ShieldFlash_C
// (None)

class UClass* IBPI_ShieldFlash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ShieldFlash_C");

	return Clss;
}


// BPI_ShieldFlash_C BPI_ShieldFlash.Default__BPI_ShieldFlash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ShieldFlash_C* IBPI_ShieldFlash_C::GetDefaultObj()
{
	static class IBPI_ShieldFlash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ShieldFlash_C*>(IBPI_ShieldFlash_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ShieldFlash.BPI_ShieldFlash_C.FlashShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_ShieldFlash_C::FlashShield()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ShieldFlash_C", "FlashShield");



	UObject::ProcessEvent(Func, nullptr);

}

}


