#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass F_MED_HIS_Ramirez_Head_01_AnimBP_Child.F_MED_HIS_Ramirez_Head_01_AnimBP_Child_C
// (None)

class UClass* UF_MED_HIS_Ramirez_Head_01_AnimBP_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("F_MED_HIS_Ramirez_Head_01_AnimBP_Child_C");

	return Clss;
}


// F_MED_HIS_Ramirez_Head_01_AnimBP_Child_C F_MED_HIS_Ramirez_Head_01_AnimBP_Child.Default__F_MED_HIS_Ramirez_Head_01_AnimBP_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UF_MED_HIS_Ramirez_Head_01_AnimBP_Child_C* UF_MED_HIS_Ramirez_Head_01_AnimBP_Child_C::GetDefaultObj()
{
	static class UF_MED_HIS_Ramirez_Head_01_AnimBP_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UF_MED_HIS_Ramirez_Head_01_AnimBP_Child_C*>(UF_MED_HIS_Ramirez_Head_01_AnimBP_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


