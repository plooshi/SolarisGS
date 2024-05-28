#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Primary-LSkew.TextStyle-Button-Primary-LSkew_C
// (None)

class UClass* UTextStyleMinusButtonMinusPrimaryMinusLSkew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Primary-LSkew_C");

	return Clss;
}


// TextStyle-Button-Primary-LSkew_C TextStyle-Button-Primary-LSkew.Default__TextStyle-Button-Primary-LSkew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusPrimaryMinusLSkew_C* UTextStyleMinusButtonMinusPrimaryMinusLSkew_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusPrimaryMinusLSkew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusPrimaryMinusLSkew_C*>(UTextStyleMinusButtonMinusPrimaryMinusLSkew_C::StaticClass()->DefaultObject);

	return Default;
}

}


