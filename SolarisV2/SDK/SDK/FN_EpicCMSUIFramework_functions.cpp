#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EpicCMSUIFramework.EpicCMSImage
// (None)

class UClass* UEpicCMSImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpicCMSImage");

	return Clss;
}


// EpicCMSImage EpicCMSUIFramework.Default__EpicCMSImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UEpicCMSImage* UEpicCMSImage::GetDefaultObj()
{
	static class UEpicCMSImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpicCMSImage*>(UEpicCMSImage::StaticClass()->DefaultObject);

	return Default;
}


// Function EpicCMSUIFramework.EpicCMSImage.SetMediaURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MediaUrl                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSImage::SetMediaURL(const class FString& MediaUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicCMSImage", "SetMediaURL");

	Params::UEpicCMSImage_SetMediaURL_Params Parms{};

	Parms.MediaUrl = MediaUrl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EpicCMSUIFramework.EpicCMSLayoutBase
// (None)

class UClass* UEpicCMSLayoutBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpicCMSLayoutBase");

	return Clss;
}


// EpicCMSLayoutBase EpicCMSUIFramework.Default__EpicCMSLayoutBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UEpicCMSLayoutBase* UEpicCMSLayoutBase::GetDefaultObj()
{
	static class UEpicCMSLayoutBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpicCMSLayoutBase*>(UEpicCMSLayoutBase::StaticClass()->DefaultObject);

	return Default;
}


// Class EpicCMSUIFramework.EpicCMSManager
// (None)

class UClass* UEpicCMSManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpicCMSManager");

	return Clss;
}


// EpicCMSManager EpicCMSUIFramework.Default__EpicCMSManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UEpicCMSManager* UEpicCMSManager::GetDefaultObj()
{
	static class UEpicCMSManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpicCMSManager*>(UEpicCMSManager::StaticClass()->DefaultObject);

	return Default;
}


// Class EpicCMSUIFramework.EpicCMSScreenBase
// (None)

class UClass* UEpicCMSScreenBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpicCMSScreenBase");

	return Clss;
}


// EpicCMSScreenBase EpicCMSUIFramework.Default__EpicCMSScreenBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UEpicCMSScreenBase* UEpicCMSScreenBase::GetDefaultObj()
{
	static class UEpicCMSScreenBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpicCMSScreenBase*>(UEpicCMSScreenBase::StaticClass()->DefaultObject);

	return Default;
}


// Class EpicCMSUIFramework.EpicCMSSimpleMessage
// (None)

class UClass* UEpicCMSSimpleMessage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpicCMSSimpleMessage");

	return Clss;
}


// EpicCMSSimpleMessage EpicCMSUIFramework.Default__EpicCMSSimpleMessage
// (Public, ClassDefaultObject, ArchetypeObject)

class UEpicCMSSimpleMessage* UEpicCMSSimpleMessage::GetDefaultObj()
{
	static class UEpicCMSSimpleMessage* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpicCMSSimpleMessage*>(UEpicCMSSimpleMessage::StaticClass()->DefaultObject);

	return Default;
}


// Class EpicCMSUIFramework.EpicCMSTileBase
// (None)

class UClass* UEpicCMSTileBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpicCMSTileBase");

	return Clss;
}


// EpicCMSTileBase EpicCMSUIFramework.Default__EpicCMSTileBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UEpicCMSTileBase* UEpicCMSTileBase::GetDefaultObj()
{
	static class UEpicCMSTileBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpicCMSTileBase*>(UEpicCMSTileBase::StaticClass()->DefaultObject);

	return Default;
}


// Function EpicCMSUIFramework.EpicCMSTileBase.Launch
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UEpicCMSTileBase::Launch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicCMSTileBase", "Launch");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class EpicCMSUIFramework.EpicCMSTileCarousel
// (None)

class UClass* UEpicCMSTileCarousel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpicCMSTileCarousel");

	return Clss;
}


// EpicCMSTileCarousel EpicCMSUIFramework.Default__EpicCMSTileCarousel
// (Public, ClassDefaultObject, ArchetypeObject)

class UEpicCMSTileCarousel* UEpicCMSTileCarousel::GetDefaultObj()
{
	static class UEpicCMSTileCarousel* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpicCMSTileCarousel*>(UEpicCMSTileCarousel::StaticClass()->DefaultObject);

	return Default;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              PageIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::SetCurrentPageByIndex(int32 PageIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicCMSTileCarousel", "SetCurrentPageByIndex");

	Params::UEpicCMSTileCarousel_SetCurrentPageByIndex_Params Parms{};

	Parms.PageIndex = PageIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UEpicCMSTileCarousel::PreviousPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicCMSTileCarousel", "PreviousPage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UEpicCMSTileCarousel::NextPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicCMSTileCarousel", "NextPage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowNavigation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::NavigationVisibilityChanged(bool bShowNavigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicCMSTileCarousel", "NavigationVisibilityChanged");

	Params::UEpicCMSTileCarousel_NavigationVisibilityChanged_Params Parms{};

	Parms.bShowNavigation = bShowNavigation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     TileWidget                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::HandleTilePageAdded(class UWidget* TileWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicCMSTileCarousel", "HandleTilePageAdded");

	Params::UEpicCMSTileCarousel_HandleTilePageAdded_Params Parms{};

	Parms.TileWidget = TileWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEpicCMSTileCarousel::GetCurrentPageIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicCMSTileCarousel", "GetCurrentPageIndex");

	Params::UEpicCMSTileCarousel_GetCurrentPageIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UEpicCMSTileCarousel::BeginAutoScrolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicCMSTileCarousel", "BeginAutoScrolling");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     TilePageWidget                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::AddTilePage(class UWidget* TilePageWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicCMSTileCarousel", "AddTilePage");

	Params::UEpicCMSTileCarousel_AddTilePage_Params Parms{};

	Parms.TilePageWidget = TilePageWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


