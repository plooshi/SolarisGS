#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MeshNetwork.MeshBeaconClient
// (Actor)

class UClass* AMeshBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshBeaconClient");

	return Clss;
}


// MeshBeaconClient MeshNetwork.Default__MeshBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class AMeshBeaconClient* AMeshBeaconClient::GetDefaultObj()
{
	static class AMeshBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<AMeshBeaconClient*>(AMeshBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility
// (Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<struct FUpdateLevelVisibilityLevelInfo>LevelVisibilities                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AMeshBeaconClient::ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshBeaconClient", "ServerUpdateMultipleLevelsVisibility");

	Params::AMeshBeaconClient_ServerUpdateMultipleLevelsVisibility_Params Parms{};

	Parms.LevelVisibilities = LevelVisibilities;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility
// (Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class FName                        PackageName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsVisible                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMeshBeaconClient::ServerUpdateLevelVisibility(class FName PackageName, bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshBeaconClient", "ServerUpdateLevelVisibility");

	Params::AMeshBeaconClient_ServerUpdateLevelVisibility_Params Parms{};

	Parms.PackageName = PackageName;
	Parms.bIsVisible = bIsVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot
// (Final, Native, Public)
// Parameters:

void AMeshBeaconClient::OnRep_ConnectedToRoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshBeaconClient", "OnRep_ConnectedToRoot");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshNetwork.MeshBeaconHost
// (Actor)

class UClass* AMeshBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshBeaconHost");

	return Clss;
}


// MeshBeaconHost MeshNetwork.Default__MeshBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class AMeshBeaconHost* AMeshBeaconHost::GetDefaultObj()
{
	static class AMeshBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<AMeshBeaconHost*>(AMeshBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshNetwork.MeshBeaconHostObject
// (Actor)

class UClass* AMeshBeaconHostObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshBeaconHostObject");

	return Clss;
}


// MeshBeaconHostObject MeshNetwork.Default__MeshBeaconHostObject
// (Public, ClassDefaultObject, ArchetypeObject)

class AMeshBeaconHostObject* AMeshBeaconHostObject::GetDefaultObj()
{
	static class AMeshBeaconHostObject* Default = nullptr;

	if (!Default)
		Default = static_cast<AMeshBeaconHostObject*>(AMeshBeaconHostObject::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshNetwork.MeshConnection
// (None)

class UClass* UMeshConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshConnection");

	return Clss;
}


// MeshConnection MeshNetwork.Default__MeshConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshConnection* UMeshConnection::GetDefaultObj()
{
	static class UMeshConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshConnection*>(UMeshConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshNetwork.MeshNetDriver
// (None)

class UClass* UMeshNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshNetDriver");

	return Clss;
}


// MeshNetDriver MeshNetwork.Default__MeshNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshNetDriver* UMeshNetDriver::GetDefaultObj()
{
	static class UMeshNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshNetDriver*>(UMeshNetDriver::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshNetwork.MeshNetworkComponent
// (None)

class UClass* UMeshNetworkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshNetworkComponent");

	return Clss;
}


// MeshNetworkComponent MeshNetwork.Default__MeshNetworkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshNetworkComponent* UMeshNetworkComponent::GetDefaultObj()
{
	static class UMeshNetworkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshNetworkComponent*>(UMeshNetworkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMeshNetworkNodeType    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMeshNetworkNodeType UMeshNetworkComponent::GetMeshNetworkNodeType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshNetworkComponent", "GetMeshNetworkNodeType");

	Params::UMeshNetworkComponent_GetMeshNetworkNodeType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshNetwork.MeshNetworkSubsystem
// (None)

class UClass* UMeshNetworkSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshNetworkSubsystem");

	return Clss;
}


// MeshNetworkSubsystem MeshNetwork.Default__MeshNetworkSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshNetworkSubsystem* UMeshNetworkSubsystem::GetDefaultObj()
{
	static class UMeshNetworkSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshNetworkSubsystem*>(UMeshNetworkSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshNetwork.MeshNetworkSubsystem.SetMetaDataWithKey
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMeshMetaDataStruct         MetaData                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMeshNetworkSubsystem::SetMetaDataWithKey(class FName Key, struct FMeshMetaDataStruct& MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshNetworkSubsystem", "SetMetaDataWithKey");

	Params::UMeshNetworkSubsystem_SetMetaDataWithKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshNetwork.MeshNetworkSubsystem.SetMetaData
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMeshMetaDataStruct         MetaData                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMeshNetworkSubsystem::SetMetaData(struct FMeshMetaDataStruct& MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshNetworkSubsystem", "SetMetaData");

	Params::UMeshNetworkSubsystem_SetMetaData_Params Parms{};

	Parms.MetaData = MetaData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshNetwork.MeshNetworkSubsystem.GetMetaDataWithKey
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMeshMetaDataStruct         MetaData                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshNetworkSubsystem::GetMetaDataWithKey(class FName Key, struct FMeshMetaDataStruct& MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshNetworkSubsystem", "GetMetaDataWithKey");

	Params::UMeshNetworkSubsystem_GetMetaDataWithKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshNetwork.MeshNetworkSubsystem.GetMetadata
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMeshMetaDataStruct         MetaData                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMeshNetworkSubsystem::GetMetadata(struct FMeshMetaDataStruct& MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshNetworkSubsystem", "GetMetadata");

	Params::UMeshNetworkSubsystem_GetMetadata_Params Parms{};

	Parms.MetaData = MetaData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMeshNetworkNodeType    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMeshNetworkNodeType UMeshNetworkSubsystem::GetMeshNetworkNodeType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshNetworkSubsystem", "GetMeshNetworkNodeType");

	Params::UMeshNetworkSubsystem_GetMeshNetworkNodeType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMeshNetworkNodeType    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMeshNetworkNodeType UMeshNetworkSubsystem::GetGameServerNodeType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshNetworkSubsystem", "GetGameServerNodeType");

	Params::UMeshNetworkSubsystem_GetGameServerNodeType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshNetworkSubsystem::GetConnectedToRoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshNetworkSubsystem", "GetConnectedToRoot");

	Params::UMeshNetworkSubsystem_GetConnectedToRoot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshNetwork.MeshReplicationGraphNode_AlwaysRelevant_ForConnection
// (None)

class UClass* UMeshReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshReplicationGraphNode_AlwaysRelevant_ForConnection");

	return Clss;
}


// MeshReplicationGraphNode_AlwaysRelevant_ForConnection MeshNetwork.Default__MeshReplicationGraphNode_AlwaysRelevant_ForConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshReplicationGraphNode_AlwaysRelevant_ForConnection* UMeshReplicationGraphNode_AlwaysRelevant_ForConnection::GetDefaultObj()
{
	static class UMeshReplicationGraphNode_AlwaysRelevant_ForConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshReplicationGraphNode_AlwaysRelevant_ForConnection*>(UMeshReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshNetwork.MeshReplicationGraph
// (None)

class UClass* UMeshReplicationGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshReplicationGraph");

	return Clss;
}


// MeshReplicationGraph MeshNetwork.Default__MeshReplicationGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshReplicationGraph* UMeshReplicationGraph::GetDefaultObj()
{
	static class UMeshReplicationGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshReplicationGraph*>(UMeshReplicationGraph::StaticClass()->DefaultObject);

	return Default;
}

}


