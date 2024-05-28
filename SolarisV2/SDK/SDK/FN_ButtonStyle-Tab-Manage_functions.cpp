#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Tab-Manage.ButtonStyle-Tab-Manage_C
// (None)

class UClass* UButtonStyleMinusTabMinusManage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Tab-Manage_C");

	return Clss;
}


// ButtonStyle-Tab-Manage_C ButtonStyle-Tab-Manage.Default__ButtonStyle-Tab-Manage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTabMinusManage_C* UButtonStyleMinusTabMinusManage_C::GetDefaultObj()
{
	static class UButtonStyleMinusTabMinusManage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTabMinusManage_C*>(UButtonStyleMinusTabMinusManage_C::StaticClass()->DefaultObject);

	return Default;
}

}


