#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass comLogoTitle.comLogoTitle_C
// (None)

class UClass* UComLogoTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("comLogoTitle_C");

	return Clss;
}


// comLogoTitle_C comLogoTitle.Default__comLogoTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComLogoTitle_C* UComLogoTitle_C::GetDefaultObj()
{
	static class UComLogoTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComLogoTitle_C*>(UComLogoTitle_C::StaticClass()->DefaultObject);

	return Default;
}

}


