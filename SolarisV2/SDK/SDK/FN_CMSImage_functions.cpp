#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CMSImage.CMSImage_C
// (None)

class UClass* UCMSImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CMSImage_C");

	return Clss;
}


// CMSImage_C CMSImage.Default__CMSImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCMSImage_C* UCMSImage_C::GetDefaultObj()
{
	static class UCMSImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCMSImage_C*>(UCMSImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CMSImage.CMSImage_C.SetMediaURL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MediaUrl                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCMSImage_C::SetMediaURL(const class FString& MediaUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CMSImage_C", "SetMediaURL");

	Params::UCMSImage_C_SetMediaURL_Params Parms{};

	Parms.MediaUrl = MediaUrl;

	UObject::ProcessEvent(Func, &Parms);

}

}


