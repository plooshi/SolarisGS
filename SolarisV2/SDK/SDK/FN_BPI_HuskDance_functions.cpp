#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_HuskDance.BPI_HuskDance_C
// (None)

class UClass* IBPI_HuskDance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_HuskDance_C");

	return Clss;
}


// BPI_HuskDance_C BPI_HuskDance.Default__BPI_HuskDance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_HuskDance_C* IBPI_HuskDance_C::GetDefaultObj()
{
	static class IBPI_HuskDance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_HuskDance_C*>(IBPI_HuskDance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_HuskDance.BPI_HuskDance_C.OnEndDance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HuskDance_C::OnEndDance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HuskDance_C", "OnEndDance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_HuskDance.BPI_HuskDance_C.OnBeginDance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HuskDance_C::OnBeginDance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HuskDance_C", "OnBeginDance");



	UObject::ProcessEvent(Func, nullptr);

}

}


