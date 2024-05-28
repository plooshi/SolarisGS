#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemManagementTileButtonStyle-AthenaLocker.ItemManagementTileButtonStyle-AthenaLocker_C
// (None)

class UClass* UItemManagementTileButtonStyleMinusAthenaLocker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemManagementTileButtonStyle-AthenaLocker_C");

	return Clss;
}


// ItemManagementTileButtonStyle-AthenaLocker_C ItemManagementTileButtonStyle-AthenaLocker.Default__ItemManagementTileButtonStyle-AthenaLocker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemManagementTileButtonStyleMinusAthenaLocker_C* UItemManagementTileButtonStyleMinusAthenaLocker_C::GetDefaultObj()
{
	static class UItemManagementTileButtonStyleMinusAthenaLocker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemManagementTileButtonStyleMinusAthenaLocker_C*>(UItemManagementTileButtonStyleMinusAthenaLocker_C::StaticClass()->DefaultObject);

	return Default;
}

}


