#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-MainModal.Border-MainModal_C
// (None)

class UClass* UBorderMinusMainModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-MainModal_C");

	return Clss;
}


// Border-MainModal_C Border-MainModal.Default__Border-MainModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusMainModal_C* UBorderMinusMainModal_C::GetDefaultObj()
{
	static class UBorderMinusMainModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusMainModal_C*>(UBorderMinusMainModal_C::StaticClass()->DefaultObject);

	return Default;
}

}


