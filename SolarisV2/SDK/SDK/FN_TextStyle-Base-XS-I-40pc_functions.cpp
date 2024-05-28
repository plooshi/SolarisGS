#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-I-40pc.TextStyle-Base-XS-I-40pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusIMinus40pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-I-40pc_C");

	return Clss;
}


// TextStyle-Base-XS-I-40pc_C TextStyle-Base-XS-I-40pc.Default__TextStyle-Base-XS-I-40pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusIMinus40pc_C* UTextStyleMinusBaseMinusXSMinusIMinus40pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusIMinus40pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusIMinus40pc_C*>(UTextStyleMinusBaseMinusXSMinusIMinus40pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


