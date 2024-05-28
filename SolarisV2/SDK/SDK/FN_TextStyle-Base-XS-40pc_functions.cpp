#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-40pc.TextStyle-Base-XS-40pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinus40pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-40pc_C");

	return Clss;
}


// TextStyle-Base-XS-40pc_C TextStyle-Base-XS-40pc.Default__TextStyle-Base-XS-40pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinus40pc_C* UTextStyleMinusBaseMinusXSMinus40pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinus40pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinus40pc_C*>(UTextStyleMinusBaseMinusXSMinus40pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


