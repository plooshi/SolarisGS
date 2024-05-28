#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SharedPlayerTrapStatTransfer.GE_SharedPlayerTrapStatTransfer_C
// (None)

class UClass* UGE_SharedPlayerTrapStatTransfer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SharedPlayerTrapStatTransfer_C");

	return Clss;
}


// GE_SharedPlayerTrapStatTransfer_C GE_SharedPlayerTrapStatTransfer.Default__GE_SharedPlayerTrapStatTransfer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SharedPlayerTrapStatTransfer_C* UGE_SharedPlayerTrapStatTransfer_C::GetDefaultObj()
{
	static class UGE_SharedPlayerTrapStatTransfer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SharedPlayerTrapStatTransfer_C*>(UGE_SharedPlayerTrapStatTransfer_C::StaticClass()->DefaultObject);

	return Default;
}

}


