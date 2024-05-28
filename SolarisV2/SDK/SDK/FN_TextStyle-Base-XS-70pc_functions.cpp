#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-70pc.TextStyle-Base-XS-70pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinus70pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-70pc_C");

	return Clss;
}


// TextStyle-Base-XS-70pc_C TextStyle-Base-XS-70pc.Default__TextStyle-Base-XS-70pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinus70pc_C* UTextStyleMinusBaseMinusXSMinus70pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinus70pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinus70pc_C*>(UTextStyleMinusBaseMinusXSMinus70pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


