#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_FootStep_Left.AnimNotify_FootStep_Left_C
// (None)

class UClass* UAnimNotify_FootStep_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_FootStep_Left_C");

	return Clss;
}


// AnimNotify_FootStep_Left_C AnimNotify_FootStep_Left.Default__AnimNotify_FootStep_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_FootStep_Left_C* UAnimNotify_FootStep_Left_C::GetDefaultObj()
{
	static class UAnimNotify_FootStep_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_FootStep_Left_C*>(UAnimNotify_FootStep_Left_C::StaticClass()->DefaultObject);

	return Default;
}

}


