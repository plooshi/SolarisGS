#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_Manage_Camera.Frontend_Manage_Camera_C
// (Actor)

class UClass* AFrontend_Manage_Camera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_Manage_Camera_C");

	return Clss;
}


// Frontend_Manage_Camera_C Frontend_Manage_Camera.Default__Frontend_Manage_Camera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_Manage_Camera_C* AFrontend_Manage_Camera_C::GetDefaultObj()
{
	static class AFrontend_Manage_Camera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_Manage_Camera_C*>(AFrontend_Manage_Camera_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFrontend_Manage_Camera_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Manage_Camera_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFrontend_Manage_Camera_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Manage_Camera_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSensei                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrontend_Manage_Camera_C::CameraSelected(bool IsSensei)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Manage_Camera_C", "CameraSelected");

	Params::AFrontend_Manage_Camera_C_CameraSelected_Params Parms{};

	Parms.IsSensei = IsSensei;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraDeselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_Manage_Camera_C::CameraDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Manage_Camera_C", "CameraDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.ExecuteUbergraph_Frontend_Manage_Camera
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_FortniteManage_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ZeroConstructor, ReferenceParm)
// class ABP_FortniteManage_C*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_FortniteManage_C*>CallFunc_GetAllActorsOfClass_OutActors_2                         (ZeroConstructor, ReferenceParm)
// class ABP_FortniteManage_C*        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsSensei                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrontend_Manage_Camera_C::ExecuteUbergraph_Frontend_Manage_Camera(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, TArray<class ABP_FortniteManage_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_FortniteManage_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class ABP_FortniteManage_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class ABP_FortniteManage_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool K2Node_CustomEvent_IsSensei)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Manage_Camera_C", "ExecuteUbergraph_Frontend_Manage_Camera");

	Params::AFrontend_Manage_Camera_C_ExecuteUbergraph_Frontend_Manage_Camera_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_IsSensei = K2Node_CustomEvent_IsSensei;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraHasBeenDeselected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_Manage_Camera_C::CameraHasBeenDeselected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Manage_Camera_C", "CameraHasBeenDeselected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraHasBeenSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSensei                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrontend_Manage_Camera_C::CameraHasBeenSelected__DelegateSignature(bool IsSensei)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Manage_Camera_C", "CameraHasBeenSelected__DelegateSignature");

	Params::AFrontend_Manage_Camera_C_CameraHasBeenSelected__DelegateSignature_Params Parms{};

	Parms.IsSensei = IsSensei;

	UObject::ProcessEvent(Func, &Parms);

}

}


