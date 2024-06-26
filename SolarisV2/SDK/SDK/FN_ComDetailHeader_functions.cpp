#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ComDetailHeader.ComDetailHeader_C
// (None)

class UClass* UComDetailHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComDetailHeader_C");

	return Clss;
}


// ComDetailHeader_C ComDetailHeader.Default__ComDetailHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComDetailHeader_C* UComDetailHeader_C::GetDefaultObj()
{
	static class UComDetailHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComDetailHeader_C*>(UComDetailHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ComDetailHeader.ComDetailHeader_C.GetAlternateNameForItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*         ItemDef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        Temp_text_Variable                                               (None)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorkerType*             K2Node_DynamicCast_AsFort_Worker_Type                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

class FText UComDetailHeader_C::GetAlternateNameForItem(class UFortItemDefinition* ItemDef, class FText Temp_text_Variable, enum class EFortItemType CallFunc_GetItemType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue, class FText Temp_text_Variable_1, bool Temp_bool_Variable, enum class EFortItemType CallFunc_GetItemType_ReturnValue_1, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UFortWorkerType* K2Node_DynamicCast_AsFort_Worker_Type, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "GetAlternateNameForItem");

	Params::UComDetailHeader_C_GetAlternateNameForItem_Params Parms{};

	Parms.ItemDef = ItemDef;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetItemType_ReturnValue = CallFunc_GetItemType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetItemType_ReturnValue_1 = CallFunc_GetItemType_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Worker_Type = K2Node_DynamicCast_AsFort_Worker_Type;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ComDetailHeader.ComDetailHeader_C.HasValidItemDefinition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasValidDescription                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinition_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UComDetailHeader_C::HasValidItemDefinition(bool* HasValidDescription, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "HasValidItemDefinition");

	Params::UComDetailHeader_C_HasValidItemDefinition_Params Parms{};

	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasValidDescription != nullptr)
		*HasValidDescription = Parms.HasValidDescription;

}


// Function ComDetailHeader.ComDetailHeader_C.UpdateColorRarity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortColorPalette           Colors                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComDetailHeader_C::UpdateColorRarity(struct FFortColorPalette& Colors, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "UpdateColorRarity");

	Params::UComDetailHeader_C_UpdateColorRarity_Params Parms{};

	Parms.Colors = Colors;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComDetailHeader.ComDetailHeader_C.OverrideHeaderAndDiscription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Hearder                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Desciption                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ItemType                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bUseAlternateHeaderBG                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortColorPalette           CallFunc_BPGetRarityColorPalette_ReturnValue                     (NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComDetailHeader_C::OverrideHeaderAndDiscription(class FText Hearder, class FText Desciption, class FText ItemType, bool bUseAlternateHeaderBG, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_TextToUpper_ReturnValue, bool Temp_bool_Variable, const struct FFortColorPalette& CallFunc_BPGetRarityColorPalette_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UWidget* K2Node_Select_Default, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "OverrideHeaderAndDiscription");

	Params::UComDetailHeader_C_OverrideHeaderAndDiscription_Params Parms{};

	Parms.Hearder = Hearder;
	Parms.Desciption = Desciption;
	Parms.ItemType = ItemType;
	Parms.bUseAlternateHeaderBG = bUseAlternateHeaderBG;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BPGetRarityColorPalette_ReturnValue = CallFunc_BPGetRarityColorPalette_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComDetailHeader.ComDetailHeader_C.UpdateDetailVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHorizontalAlignment    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                K2Node_DynamicCast_AsOverlay_Slot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHorizontalAlignment    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComDetailHeader_C::UpdateDetailVisibility(enum class EHorizontalAlignment Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, bool Temp_bool_Variable, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, enum class EHorizontalAlignment K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "UpdateDetailVisibility");

	Params::UComDetailHeader_C_UpdateDetailVisibility_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsOverlay_Slot = K2Node_DynamicCast_AsOverlay_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComDetailHeader.ComDetailHeader_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComDetailHeader_C::SetScrollWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "SetScrollWidget");

	Params::UComDetailHeader_C_SetScrollWidget_Params Parms{};

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComDetailHeader.ComDetailHeader_C.UpdateLocked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UComDetailHeader_C::UpdateLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "UpdateLocked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ComDetailHeader.ComDetailHeader_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldShowLocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LockReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UComDetailHeader_C::SetLocked(bool ShouldShowLocked, class FText LockReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "SetLocked");

	Params::UComDetailHeader_C_SetLocked_Params Parms{};

	Parms.ShouldShowLocked = ShouldShowLocked;
	Parms.LockReason = LockReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComDetailHeader.ComDetailHeader_C.SetRemainingQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldShowRemainingQuantity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NewRemainingQuantity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComDetailHeader_C::SetRemainingQuantity(bool ShouldShowRemainingQuantity, int32 NewRemainingQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "SetRemainingQuantity");

	Params::UComDetailHeader_C_SetRemainingQuantity_Params Parms{};

	Parms.ShouldShowRemainingQuantity = ShouldShowRemainingQuantity;
	Parms.NewRemainingQuantity = NewRemainingQuantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComDetailHeader.ComDetailHeader_C.UpdateRemainingQuantity
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default                                            (None)

void UComDetailHeader_C::UpdateRemainingQuantity(bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "UpdateRemainingQuantity");

	Params::UComDetailHeader_C_UpdateRemainingQuantity_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComDetailHeader.ComDetailHeader_C.UpdateCard
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetQuantity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinition_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComDetailHeader_C::UpdateCard(int32 CallFunc_GetQuantity_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "UpdateCard");

	Params::UComDetailHeader_C_UpdateCard_Params Parms{};

	Parms.CallFunc_GetQuantity_ReturnValue = CallFunc_GetQuantity_ReturnValue;
	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComDetailHeader.ComDetailHeader_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldShowCard                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CardSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldShowDetails                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldShowDescription                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UComDetailHeader_C::Setup(bool ShouldShowCard, enum class EFortItemCardSize CardSize, bool ShouldShowDetails, bool ShouldShowDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "Setup");

	Params::UComDetailHeader_C_Setup_Params Parms{};

	Parms.ShouldShowCard = ShouldShowCard;
	Parms.CardSize = CardSize;
	Parms.ShouldShowDetails = ShouldShowDetails;
	Parms.ShouldShowDescription = ShouldShowDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComDetailHeader.ComDetailHeader_C.UpdateNameText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         ItemDefinition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (Edit, BlueprintVisible)
// class FText                        CallFunc_GetAlternateNameForItem_ReturnValue                     (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_2                               (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTokenType*              K2Node_DynamicCast_AsFort_Token_Type                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UComDetailHeader_C::UpdateNameText(class UFortItemDefinition* ItemDefinition, int32 Quantity, class FText DisplayName, class FText CallFunc_GetAlternateNameForItem_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class UFortTokenType* K2Node_DynamicCast_AsFort_Token_Type, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "UpdateNameText");

	Params::UComDetailHeader_C_UpdateNameText_Params Parms{};

	Parms.ItemDefinition = ItemDefinition;
	Parms.Quantity = Quantity;
	Parms.DisplayName = DisplayName;
	Parms.CallFunc_GetAlternateNameForItem_ReturnValue = CallFunc_GetAlternateNameForItem_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue_2 = CallFunc_TextToUpper_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Token_Type = K2Node_DynamicCast_AsFort_Token_Type;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComDetailHeader.ComDetailHeader_C.Update
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         ItemDefinition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetRichDescription_ReturnValue                          (None)
// class FText                        CallFunc_GetShortDescription_ReturnValue                         (None)
// struct FFortColorPalette           CallFunc_GetRarityOrSeriesColors_ReturnValue                     (NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComDetailHeader_C::Update(class UFortItemDefinition* ItemDefinition, int32 Quantity, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_GetRichDescription_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, const struct FFortColorPalette& CallFunc_GetRarityOrSeriesColors_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "Update");

	Params::UComDetailHeader_C_Update_Params Parms{};

	Parms.ItemDefinition = ItemDefinition;
	Parms.Quantity = Quantity;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetRichDescription_ReturnValue = CallFunc_GetRichDescription_ReturnValue;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.CallFunc_GetRarityOrSeriesColors_ReturnValue = CallFunc_GetRarityOrSeriesColors_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComDetailHeader.ComDetailHeader_C.OnItemDefinitionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UComDetailHeader_C::OnItemDefinitionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "OnItemDefinitionChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ComDetailHeader.ComDetailHeader_C.ExecuteUbergraph_ComDetailHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuantity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinition_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComDetailHeader_C::ExecuteUbergraph_ComDetailHeader(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, int32 CallFunc_GetQuantity_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComDetailHeader_C", "ExecuteUbergraph_ComDetailHeader");

	Params::UComDetailHeader_C_ExecuteUbergraph_ComDetailHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetQuantity_ReturnValue = CallFunc_GetQuantity_ReturnValue;
	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


