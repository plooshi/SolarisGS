#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ZipLine_Damage_Structure.GE_ZipLine_Damage_Structure_C
// (None)

class UClass* UGE_ZipLine_Damage_Structure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ZipLine_Damage_Structure_C");

	return Clss;
}


// GE_ZipLine_Damage_Structure_C GE_ZipLine_Damage_Structure.Default__GE_ZipLine_Damage_Structure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ZipLine_Damage_Structure_C* UGE_ZipLine_Damage_Structure_C::GetDefaultObj()
{
	static class UGE_ZipLine_Damage_Structure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ZipLine_Damage_Structure_C*>(UGE_ZipLine_Damage_Structure_C::StaticClass()->DefaultObject);

	return Default;
}

}


