#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ModalHeader-Dark.Border-ModalHeader-Dark_C
// (None)

class UClass* UBorderMinusModalHeaderMinusDark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ModalHeader-Dark_C");

	return Clss;
}


// Border-ModalHeader-Dark_C Border-ModalHeader-Dark.Default__Border-ModalHeader-Dark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusModalHeaderMinusDark_C* UBorderMinusModalHeaderMinusDark_C::GetDefaultObj()
{
	static class UBorderMinusModalHeaderMinusDark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusModalHeaderMinusDark_C*>(UBorderMinusModalHeaderMinusDark_C::StaticClass()->DefaultObject);

	return Default;
}

}


