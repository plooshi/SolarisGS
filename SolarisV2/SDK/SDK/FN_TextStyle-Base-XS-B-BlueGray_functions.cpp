#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-BlueGray.TextStyle-Base-XS-B-BlueGray_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusBlueGray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-BlueGray_C");

	return Clss;
}


// TextStyle-Base-XS-B-BlueGray_C TextStyle-Base-XS-B-BlueGray.Default__TextStyle-Base-XS-B-BlueGray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusBlueGray_C* UTextStyleMinusBaseMinusXSMinusBMinusBlueGray_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusBlueGray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusBlueGray_C*>(UTextStyleMinusBaseMinusXSMinusBMinusBlueGray_C::StaticClass()->DefaultObject);

	return Default;
}

}


