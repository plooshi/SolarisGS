#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ModalHeader.Border-ModalHeader_C
// (None)

class UClass* UBorderMinusModalHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ModalHeader_C");

	return Clss;
}


// Border-ModalHeader_C Border-ModalHeader.Default__Border-ModalHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusModalHeader_C* UBorderMinusModalHeader_C::GetDefaultObj()
{
	static class UBorderMinusModalHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusModalHeader_C*>(UBorderMinusModalHeader_C::StaticClass()->DefaultObject);

	return Default;
}

}


