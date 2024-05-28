#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_BurbankSmall_M_White.TextStyle_BurbankSmall_M_White_C
// (None)

class UClass* UTextStyle_BurbankSmall_M_White_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_BurbankSmall_M_White_C");

	return Clss;
}


// TextStyle_BurbankSmall_M_White_C TextStyle_BurbankSmall_M_White.Default__TextStyle_BurbankSmall_M_White_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_BurbankSmall_M_White_C* UTextStyle_BurbankSmall_M_White_C::GetDefaultObj()
{
	static class UTextStyle_BurbankSmall_M_White_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_BurbankSmall_M_White_C*>(UTextStyle_BurbankSmall_M_White_C::StaticClass()->DefaultObject);

	return Default;
}

}


