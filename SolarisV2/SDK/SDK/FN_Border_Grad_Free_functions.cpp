#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Grad_Free.Border_Grad_Free_C
// (None)

class UClass* UBorder_Grad_Free_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Grad_Free_C");

	return Clss;
}


// Border_Grad_Free_C Border_Grad_Free.Default__Border_Grad_Free_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Grad_Free_C* UBorder_Grad_Free_C::GetDefaultObj()
{
	static class UBorder_Grad_Free_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Grad_Free_C*>(UBorder_Grad_Free_C::StaticClass()->DefaultObject);

	return Default;
}

}


