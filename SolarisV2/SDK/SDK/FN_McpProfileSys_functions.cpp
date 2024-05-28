#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class McpProfileSys.McpItemAware
// (None)

class UClass* IMcpItemAware::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("McpItemAware");

	return Clss;
}


// McpItemAware McpProfileSys.Default__McpItemAware
// (Public, ClassDefaultObject, ArchetypeObject)

class IMcpItemAware* IMcpItemAware::GetDefaultObj()
{
	static class IMcpItemAware* Default = nullptr;

	if (!Default)
		Default = static_cast<IMcpItemAware*>(IMcpItemAware::StaticClass()->DefaultObject);

	return Default;
}


// Class McpProfileSys.McpItemDefinitionBase
// (None)

class UClass* UMcpItemDefinitionBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("McpItemDefinitionBase");

	return Clss;
}


// McpItemDefinitionBase McpProfileSys.Default__McpItemDefinitionBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMcpItemDefinitionBase* UMcpItemDefinitionBase::GetDefaultObj()
{
	static class UMcpItemDefinitionBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMcpItemDefinitionBase*>(UMcpItemDefinitionBase::StaticClass()->DefaultObject);

	return Default;
}


// Class McpProfileSys.McpProfile
// (None)

class UClass* UMcpProfile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("McpProfile");

	return Clss;
}


// McpProfile McpProfileSys.Default__McpProfile
// (Public, ClassDefaultObject, ArchetypeObject)

class UMcpProfile* UMcpProfile::GetDefaultObj()
{
	static class UMcpProfile* Default = nullptr;

	if (!Default)
		Default = static_cast<UMcpProfile*>(UMcpProfile::StaticClass()->DefaultObject);

	return Default;
}


// Function McpProfileSys.McpProfile.UnlockProfileForWrite
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParams)
// Parameters:
// class FString                      Code                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDedicatedServerUrlContext  Context                                                          (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::UnlockProfileForWrite(const class FString& Code, struct FDedicatedServerUrlContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("McpProfile", "UnlockProfileForWrite");

	Params::UMcpProfile_UnlockProfileForWrite_Params Parms{};

	Parms.Code = Code;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

}


// Function McpProfileSys.McpProfile.QueryPublicProfile
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParams)
// Parameters:
// struct FBaseUrlContext             Context                                                          (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::QueryPublicProfile(struct FBaseUrlContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("McpProfile", "QueryPublicProfile");

	Params::UMcpProfile_QueryPublicProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

}


// Function McpProfileSys.McpProfile.QueryProfile
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParams)
// Parameters:
// struct FBaseUrlContext             Context                                                          (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::QueryProfile(struct FBaseUrlContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("McpProfile", "QueryProfile");

	Params::UMcpProfile_QueryProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

}


// Function McpProfileSys.McpProfile.LockProfileForWrite
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParams)
// Parameters:
// class FString                      Code                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDedicatedServerUrlContext  Context                                                          (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::LockProfileForWrite(const class FString& Code, int32 Timeout, struct FDedicatedServerUrlContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("McpProfile", "LockProfileForWrite");

	Params::UMcpProfile_LockProfileForWrite_Params Parms{};

	Parms.Code = Code;
	Parms.Timeout = Timeout;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

}


// Function McpProfileSys.McpProfile.DeleteProfile
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParams)
// Parameters:
// struct FClientUrlContext           Context                                                          (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::DeleteProfile(struct FClientUrlContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("McpProfile", "DeleteProfile");

	Params::UMcpProfile_DeleteProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

}


// Function McpProfileSys.McpProfile.DeleteAllProfiles
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParams)
// Parameters:
// struct FClientUrlContext           Context                                                          (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::DeleteAllProfiles(struct FClientUrlContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("McpProfile", "DeleteAllProfiles");

	Params::UMcpProfile_DeleteAllProfiles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

}


// Class McpProfileSys.McpProfileGroup
// (None)

class UClass* UMcpProfileGroup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("McpProfileGroup");

	return Clss;
}


// McpProfileGroup McpProfileSys.Default__McpProfileGroup
// (Public, ClassDefaultObject, ArchetypeObject)

class UMcpProfileGroup* UMcpProfileGroup::GetDefaultObj()
{
	static class UMcpProfileGroup* Default = nullptr;

	if (!Default)
		Default = static_cast<UMcpProfileGroup*>(UMcpProfileGroup::StaticClass()->DefaultObject);

	return Default;
}


// Class McpProfileSys.McpProfileManager
// (None)

class UClass* UMcpProfileManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("McpProfileManager");

	return Clss;
}


// McpProfileManager McpProfileSys.Default__McpProfileManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UMcpProfileManager* UMcpProfileManager::GetDefaultObj()
{
	static class UMcpProfileManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UMcpProfileManager*>(UMcpProfileManager::StaticClass()->DefaultObject);

	return Default;
}

}


