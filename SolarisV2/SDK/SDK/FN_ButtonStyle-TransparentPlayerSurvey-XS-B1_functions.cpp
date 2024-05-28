#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TransparentPlayerSurvey-XS-B1.ButtonStyle-TransparentPlayerSurvey-XS-B1_C
// (None)

class UClass* UButtonStyleMinusTransparentPlayerSurveyMinusXSMinusB1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TransparentPlayerSurvey-XS-B1_C");

	return Clss;
}


// ButtonStyle-TransparentPlayerSurvey-XS-B1_C ButtonStyle-TransparentPlayerSurvey-XS-B1.Default__ButtonStyle-TransparentPlayerSurvey-XS-B1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTransparentPlayerSurveyMinusXSMinusB1_C* UButtonStyleMinusTransparentPlayerSurveyMinusXSMinusB1_C::GetDefaultObj()
{
	static class UButtonStyleMinusTransparentPlayerSurveyMinusXSMinusB1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTransparentPlayerSurveyMinusXSMinusB1_C*>(UButtonStyleMinusTransparentPlayerSurveyMinusXSMinusB1_C::StaticClass()->DefaultObject);

	return Default;
}

}


