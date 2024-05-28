#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_TransparentList_Social.ButtonStyle_TransparentList_Social_C
// (None)

class UClass* UButtonStyle_TransparentList_Social_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_TransparentList_Social_C");

	return Clss;
}


// ButtonStyle_TransparentList_Social_C ButtonStyle_TransparentList_Social.Default__ButtonStyle_TransparentList_Social_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_TransparentList_Social_C* UButtonStyle_TransparentList_Social_C::GetDefaultObj()
{
	static class UButtonStyle_TransparentList_Social_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_TransparentList_Social_C*>(UButtonStyle_TransparentList_Social_C::StaticClass()->DefaultObject);

	return Default;
}

}


