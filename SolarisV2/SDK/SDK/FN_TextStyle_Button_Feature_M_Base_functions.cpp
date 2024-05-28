#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_Button_Feature_M_Base.TextStyle_Button_Feature_M_Base_C
// (None)

class UClass* UTextStyle_Button_Feature_M_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_Button_Feature_M_Base_C");

	return Clss;
}


// TextStyle_Button_Feature_M_Base_C TextStyle_Button_Feature_M_Base.Default__TextStyle_Button_Feature_M_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_Button_Feature_M_Base_C* UTextStyle_Button_Feature_M_Base_C::GetDefaultObj()
{
	static class UTextStyle_Button_Feature_M_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_Button_Feature_M_Base_C*>(UTextStyle_Button_Feature_M_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


