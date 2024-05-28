#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-HeroLoadoutWarningStyle.Border-HeroLoadoutWarningStyle_C
// (None)

class UClass* UBorderMinusHeroLoadoutWarningStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-HeroLoadoutWarningStyle_C");

	return Clss;
}


// Border-HeroLoadoutWarningStyle_C Border-HeroLoadoutWarningStyle.Default__Border-HeroLoadoutWarningStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusHeroLoadoutWarningStyle_C* UBorderMinusHeroLoadoutWarningStyle_C::GetDefaultObj()
{
	static class UBorderMinusHeroLoadoutWarningStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusHeroLoadoutWarningStyle_C*>(UBorderMinusHeroLoadoutWarningStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


