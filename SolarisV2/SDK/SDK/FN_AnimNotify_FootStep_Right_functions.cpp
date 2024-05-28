#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_FootStep_Right.AnimNotify_FootStep_Right_C
// (None)

class UClass* UAnimNotify_FootStep_Right_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_FootStep_Right_C");

	return Clss;
}


// AnimNotify_FootStep_Right_C AnimNotify_FootStep_Right.Default__AnimNotify_FootStep_Right_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_FootStep_Right_C* UAnimNotify_FootStep_Right_C::GetDefaultObj()
{
	static class UAnimNotify_FootStep_Right_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_FootStep_Right_C*>(UAnimNotify_FootStep_Right_C::StaticClass()->DefaultObject);

	return Default;
}

}


