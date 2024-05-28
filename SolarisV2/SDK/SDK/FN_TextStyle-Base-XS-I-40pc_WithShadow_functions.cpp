#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-I-40pc_WithShadow.TextStyle-Base-XS-I-40pc_WithShadow_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusIMinus40pc_WithShadow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-I-40pc_WithShadow_C");

	return Clss;
}


// TextStyle-Base-XS-I-40pc_WithShadow_C TextStyle-Base-XS-I-40pc_WithShadow.Default__TextStyle-Base-XS-I-40pc_WithShadow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusIMinus40pc_WithShadow_C* UTextStyleMinusBaseMinusXSMinusIMinus40pc_WithShadow_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusIMinus40pc_WithShadow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusIMinus40pc_WithShadow_C*>(UTextStyleMinusBaseMinusXSMinusIMinus40pc_WithShadow_C::StaticClass()->DefaultObject);

	return Default;
}

}


