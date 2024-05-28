#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// (None)

class UClass* UEasyAntiCheatNetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EasyAntiCheatNetComponent");

	return Clss;
}


// EasyAntiCheatNetComponent EasyAntiCheatCommon.Default__EasyAntiCheatNetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEasyAntiCheatNetComponent* UEasyAntiCheatNetComponent::GetDefaultObj()
{
	static class UEasyAntiCheatNetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEasyAntiCheatNetComponent*>(UEasyAntiCheatNetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<uint8>                      MESSAGE                                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEasyAntiCheatNetComponent::ServerMessage(TArray<uint8>& MESSAGE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EasyAntiCheatNetComponent", "ServerMessage");

	Params::UEasyAntiCheatNetComponent_ServerMessage_Params Parms{};

	Parms.MESSAGE = MESSAGE;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<uint8>                      MESSAGE                                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEasyAntiCheatNetComponent::ClientMessage(TArray<uint8>& MESSAGE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EasyAntiCheatNetComponent", "ClientMessage");

	Params::UEasyAntiCheatNetComponent_ClientMessage_Params Parms{};

	Parms.MESSAGE = MESSAGE;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


