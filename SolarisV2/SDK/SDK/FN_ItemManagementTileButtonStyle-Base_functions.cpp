#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemManagementTileButtonStyle-Base.ItemManagementTileButtonStyle-Base_C
// (None)

class UClass* UItemManagementTileButtonStyleMinusBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemManagementTileButtonStyle-Base_C");

	return Clss;
}


// ItemManagementTileButtonStyle-Base_C ItemManagementTileButtonStyle-Base.Default__ItemManagementTileButtonStyle-Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemManagementTileButtonStyleMinusBase_C* UItemManagementTileButtonStyleMinusBase_C::GetDefaultObj()
{
	static class UItemManagementTileButtonStyleMinusBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemManagementTileButtonStyleMinusBase_C*>(UItemManagementTileButtonStyleMinusBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


