#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_TransparentList.ButtonStyle_TransparentList_C
// (None)

class UClass* UButtonStyle_TransparentList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_TransparentList_C");

	return Clss;
}


// ButtonStyle_TransparentList_C ButtonStyle_TransparentList.Default__ButtonStyle_TransparentList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_TransparentList_C* UButtonStyle_TransparentList_C::GetDefaultObj()
{
	static class UButtonStyle_TransparentList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_TransparentList_C*>(UButtonStyle_TransparentList_C::StaticClass()->DefaultObject);

	return Default;
}

}


