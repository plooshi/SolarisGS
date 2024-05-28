#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PurchaseFlow.PurchaseFlowJSBridge
// (None)

class UClass* UPurchaseFlowJSBridge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PurchaseFlowJSBridge");

	return Clss;
}


// PurchaseFlowJSBridge PurchaseFlow.Default__PurchaseFlowJSBridge
// (Public, ClassDefaultObject, ArchetypeObject)

class UPurchaseFlowJSBridge* UPurchaseFlowJSBridge::GetDefaultObj()
{
	static class UPurchaseFlowJSBridge* Default = nullptr;

	if (!Default)
		Default = static_cast<UPurchaseFlowJSBridge*>(UPurchaseFlowJSBridge::StaticClass()->DefaultObject);

	return Default;
}


// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
// (Final, Native, Public)
// Parameters:
// class FString                      CloseInfo                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPurchaseFlowJSBridge::RequestClose(const class FString& CloseInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "RequestClose");

	Params::UPurchaseFlowJSBridge_RequestClose_Params Parms{};

	Parms.CloseInfo = CloseInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.RECEIPT
// (Final, Native, Public)
// Parameters:
// struct FPurchaseFlowReceiptParam   RECEIPT                                                          (Parm, NativeAccessSpecifierPublic)

void UPurchaseFlowJSBridge::RECEIPT(const struct FPurchaseFlowReceiptParam& RECEIPT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "RECEIPT");

	Params::UPurchaseFlowJSBridge_RECEIPT_Params Parms{};

	Parms.RECEIPT = RECEIPT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.LaunchValidatedExternalBrowserUrl
// (Final, Native, Public)
// Parameters:
// class FString                      AllowedBrowserID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPurchaseFlowJSBridge::LaunchValidatedExternalBrowserUrl(const class FString& AllowedBrowserID, const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "LaunchValidatedExternalBrowserUrl");

	Params::UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Params Parms{};

	Parms.AllowedBrowserID = AllowedBrowserID;
	Parms.URL = URL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.LaunchExternalBrowserUrl
// (Final, Native, Public)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPurchaseFlowJSBridge::LaunchExternalBrowserUrl(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "LaunchExternalBrowserUrl");

	Params::UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Params Parms{};

	Parms.URL = URL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserPath
// (Final, Native, Public)
// Parameters:
// class FString                      BrowserId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPurchaseFlowJSBridge::GetExternalBrowserPath(const class FString& BrowserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "GetExternalBrowserPath");

	Params::UPurchaseFlowJSBridge_GetExternalBrowserPath_Params Parms{};

	Parms.BrowserId = BrowserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserName
// (Final, Native, Public)
// Parameters:
// class FString                      BrowserId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPurchaseFlowJSBridge::GetExternalBrowserName(const class FString& BrowserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "GetExternalBrowserName");

	Params::UPurchaseFlowJSBridge_GetExternalBrowserName_Params Parms{};

	Parms.BrowserId = BrowserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.GetDefaultExternalBrowserID
// (Final, Native, Public)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPurchaseFlowJSBridge::GetDefaultExternalBrowserID(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "GetDefaultExternalBrowserID");

	Params::UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Params Parms{};

	Parms.URL = URL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


