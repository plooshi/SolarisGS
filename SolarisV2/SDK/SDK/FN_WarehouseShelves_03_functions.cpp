#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WarehouseShelves_03.WarehouseShelves_03_C
// (Actor)

class UClass* AWarehouseShelves_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WarehouseShelves_03_C");

	return Clss;
}


// WarehouseShelves_03_C WarehouseShelves_03.Default__WarehouseShelves_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWarehouseShelves_03_C* AWarehouseShelves_03_C::GetDefaultObj()
{
	static class AWarehouseShelves_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWarehouseShelves_03_C*>(AWarehouseShelves_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


