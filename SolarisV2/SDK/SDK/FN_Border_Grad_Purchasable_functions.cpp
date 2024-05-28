#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Grad_Purchasable.Border_Grad_Purchasable_C
// (None)

class UClass* UBorder_Grad_Purchasable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Grad_Purchasable_C");

	return Clss;
}


// Border_Grad_Purchasable_C Border_Grad_Purchasable.Default__Border_Grad_Purchasable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Grad_Purchasable_C* UBorder_Grad_Purchasable_C::GetDefaultObj()
{
	static class UBorder_Grad_Purchasable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Grad_Purchasable_C*>(UBorder_Grad_Purchasable_C::StaticClass()->DefaultObject);

	return Default;
}

}


