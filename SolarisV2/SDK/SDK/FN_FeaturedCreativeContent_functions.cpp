#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FeaturedCreativeContent.FeaturedCreativeContent_C
// (None)

class UClass* UFeaturedCreativeContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FeaturedCreativeContent_C");

	return Clss;
}


// FeaturedCreativeContent_C FeaturedCreativeContent.Default__FeaturedCreativeContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFeaturedCreativeContent_C* UFeaturedCreativeContent_C::GetDefaultObj()
{
	static class UFeaturedCreativeContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFeaturedCreativeContent_C*>(UFeaturedCreativeContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FeaturedCreativeContent.FeaturedCreativeContent_C.SetFeaturedContentDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCreativeAdData             CurrentAd                                                        (Edit, BlueprintVisible)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeaturedCreativeContent_C::SetFeaturedContentDetails(int32 Index, const struct FCreativeAdData& CurrentAd, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeaturedCreativeContent_C", "SetFeaturedContentDetails");

	Params::UFeaturedCreativeContent_C_SetFeaturedContentDetails_Params Parms{};

	Parms.Index = Index;
	Parms.CurrentAd = CurrentAd;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FeaturedCreativeContent.FeaturedCreativeContent_C.OnSetupAds
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FString>              MediaURLs                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FCreativeAdData>     AdMetadata                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFeaturedCreativeContent_C::OnSetupAds(TArray<class FString>& MediaURLs, TArray<struct FCreativeAdData>& AdMetadata)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeaturedCreativeContent_C", "OnSetupAds");

	Params::UFeaturedCreativeContent_C_OnSetupAds_Params Parms{};

	Parms.MediaURLs = MediaURLs;
	Parms.AdMetadata = AdMetadata;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FeaturedCreativeContent.FeaturedCreativeContent_C.BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              CurrentPageIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeaturedCreativeContent_C::BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature(int32 CurrentPageIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeaturedCreativeContent_C", "BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature");

	Params::UFeaturedCreativeContent_C_BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature_Params Parms{};

	Parms.CurrentPageIndex = CurrentPageIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FeaturedCreativeContent.FeaturedCreativeContent_C.ExecuteUbergraph_FeaturedCreativeContent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_Event_MediaURLs                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FCreativeAdData>     K2Node_Event_AdMetadata                                          (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              K2Node_ComponentBoundEvent_CurrentPageIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeaturedCreativeContent_C::ExecuteUbergraph_FeaturedCreativeContent(int32 EntryPoint, TArray<class FString>& K2Node_Event_MediaURLs, TArray<struct FCreativeAdData>& K2Node_Event_AdMetadata, int32 K2Node_ComponentBoundEvent_CurrentPageIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeaturedCreativeContent_C", "ExecuteUbergraph_FeaturedCreativeContent");

	Params::UFeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MediaURLs = K2Node_Event_MediaURLs;
	Parms.K2Node_Event_AdMetadata = K2Node_Event_AdMetadata;
	Parms.K2Node_ComponentBoundEvent_CurrentPageIndex = K2Node_ComponentBoundEvent_CurrentPageIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


