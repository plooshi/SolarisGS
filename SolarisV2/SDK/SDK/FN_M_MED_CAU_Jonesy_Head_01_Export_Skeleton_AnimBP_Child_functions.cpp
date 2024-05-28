#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass M_MED_CAU_Jonesy_Head_01_Export_Skeleton_AnimBP_Child.M_MED_CAU_Jonesy_Head_01_Export_Skeleton_AnimBP_Child_C
// (None)

class UClass* UM_MED_CAU_Jonesy_Head_01_Export_Skeleton_AnimBP_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_MED_CAU_Jonesy_Head_01_Export_Skeleton_AnimBP_Child_C");

	return Clss;
}


// M_MED_CAU_Jonesy_Head_01_Export_Skeleton_AnimBP_Child_C M_MED_CAU_Jonesy_Head_01_Export_Skeleton_AnimBP_Child.Default__M_MED_CAU_Jonesy_Head_01_Export_Skeleton_AnimBP_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_MED_CAU_Jonesy_Head_01_Export_Skeleton_AnimBP_Child_C* UM_MED_CAU_Jonesy_Head_01_Export_Skeleton_AnimBP_Child_C::GetDefaultObj()
{
	static class UM_MED_CAU_Jonesy_Head_01_Export_Skeleton_AnimBP_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_MED_CAU_Jonesy_Head_01_Export_Skeleton_AnimBP_Child_C*>(UM_MED_CAU_Jonesy_Head_01_Export_Skeleton_AnimBP_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


