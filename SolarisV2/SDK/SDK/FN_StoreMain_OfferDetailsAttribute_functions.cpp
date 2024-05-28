#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StoreMain_OfferDetailsAttribute.StoreMain_OfferDetailsAttribute_C
// (None)

class UClass* UStoreMain_OfferDetailsAttribute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoreMain_OfferDetailsAttribute_C");

	return Clss;
}


// StoreMain_OfferDetailsAttribute_C StoreMain_OfferDetailsAttribute.Default__StoreMain_OfferDetailsAttribute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStoreMain_OfferDetailsAttribute_C* UStoreMain_OfferDetailsAttribute_C::GetDefaultObj()
{
	static class UStoreMain_OfferDetailsAttribute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoreMain_OfferDetailsAttribute_C*>(UStoreMain_OfferDetailsAttribute_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StoreMain_OfferDetailsAttribute.StoreMain_OfferDetailsAttribute_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_OfferDetailsAttribute_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreMain_OfferDetailsAttribute_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreMain_OfferDetailsAttribute.StoreMain_OfferDetailsAttribute_C.ExecuteUbergraph_StoreMain_OfferDetailsAttribute
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetailsAttribute_C::ExecuteUbergraph_StoreMain_OfferDetailsAttribute(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreMain_OfferDetailsAttribute_C", "ExecuteUbergraph_StoreMain_OfferDetailsAttribute");

	Params::UStoreMain_OfferDetailsAttribute_C_ExecuteUbergraph_StoreMain_OfferDetailsAttribute_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


