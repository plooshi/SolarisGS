#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Com-Eventile-BigTitle.TextStyle-Com-Eventile-BigTitle_C
// (None)

class UClass* UTextStyleMinusComMinusEventileMinusBigTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Com-Eventile-BigTitle_C");

	return Clss;
}


// TextStyle-Com-Eventile-BigTitle_C TextStyle-Com-Eventile-BigTitle.Default__TextStyle-Com-Eventile-BigTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusComMinusEventileMinusBigTitle_C* UTextStyleMinusComMinusEventileMinusBigTitle_C::GetDefaultObj()
{
	static class UTextStyleMinusComMinusEventileMinusBigTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusComMinusEventileMinusBigTitle_C*>(UTextStyleMinusComMinusEventileMinusBigTitle_C::StaticClass()->DefaultObject);

	return Default;
}

}


