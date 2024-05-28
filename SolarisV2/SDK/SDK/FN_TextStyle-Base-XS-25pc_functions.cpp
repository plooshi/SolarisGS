#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-25pc.TextStyle-Base-XS-25pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinus25pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-25pc_C");

	return Clss;
}


// TextStyle-Base-XS-25pc_C TextStyle-Base-XS-25pc.Default__TextStyle-Base-XS-25pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinus25pc_C* UTextStyleMinusBaseMinusXSMinus25pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinus25pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinus25pc_C*>(UTextStyleMinusBaseMinusXSMinus25pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


