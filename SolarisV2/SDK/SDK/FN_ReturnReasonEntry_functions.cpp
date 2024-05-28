#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ReturnReasonEntry.ReturnReasonEntry_C
// (None)

class UClass* UReturnReasonEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReturnReasonEntry_C");

	return Clss;
}


// ReturnReasonEntry_C ReturnReasonEntry.Default__ReturnReasonEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReturnReasonEntry_C* UReturnReasonEntry_C::GetDefaultObj()
{
	static class UReturnReasonEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReturnReasonEntry_C*>(UReturnReasonEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


