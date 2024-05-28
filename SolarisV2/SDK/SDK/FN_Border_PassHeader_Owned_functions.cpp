#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_PassHeader_Owned.Border_PassHeader_Owned_C
// (None)

class UClass* UBorder_PassHeader_Owned_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_PassHeader_Owned_C");

	return Clss;
}


// Border_PassHeader_Owned_C Border_PassHeader_Owned.Default__Border_PassHeader_Owned_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_PassHeader_Owned_C* UBorder_PassHeader_Owned_C::GetDefaultObj()
{
	static class UBorder_PassHeader_Owned_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_PassHeader_Owned_C*>(UBorder_PassHeader_Owned_C::StaticClass()->DefaultObject);

	return Default;
}

}


