#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-40pc.TextStyle-Base-XS-B-40pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinus40pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-40pc_C");

	return Clss;
}


// TextStyle-Base-XS-B-40pc_C TextStyle-Base-XS-B-40pc.Default__TextStyle-Base-XS-B-40pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinus40pc_C* UTextStyleMinusBaseMinusXSMinusBMinus40pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinus40pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinus40pc_C*>(UTextStyleMinusBaseMinusXSMinusBMinus40pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


