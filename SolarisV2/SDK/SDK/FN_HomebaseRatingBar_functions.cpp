#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HomebaseRatingBar.HomebaseRatingBar_C
// (None)

class UClass* UHomebaseRatingBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HomebaseRatingBar_C");

	return Clss;
}


// HomebaseRatingBar_C HomebaseRatingBar.Default__HomebaseRatingBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHomebaseRatingBar_C* UHomebaseRatingBar_C::GetDefaultObj()
{
	static class UHomebaseRatingBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHomebaseRatingBar_C*>(UHomebaseRatingBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


