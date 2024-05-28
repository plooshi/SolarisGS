#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class KairosSceneCapture.KairosCaptureStatics
// (None)

class UClass* UKairosCaptureStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KairosCaptureStatics");

	return Clss;
}


// KairosCaptureStatics KairosSceneCapture.Default__KairosCaptureStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UKairosCaptureStatics* UKairosCaptureStatics::GetDefaultObj()
{
	static class UKairosCaptureStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UKairosCaptureStatics*>(UKairosCaptureStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function KairosSceneCapture.KairosCaptureStatics.ToggleAutoRotate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bIsAutoRotateAllowed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKairosCaptureStatics::ToggleAutoRotate(bool bIsAutoRotateAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KairosCaptureStatics", "ToggleAutoRotate");

	Params::UKairosCaptureStatics_ToggleAutoRotate_Params Parms{};

	Parms.bIsAutoRotateAllowed = bIsAutoRotateAllowed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KairosSceneCapture.KairosCaptureStatics.PauseOrResumeSnippet
// (Net, NetReliable, Native, Event, NetResponse, Public)
// Parameters:
// struct FKairosSnippetParams        Params                                                           (Parm, NativeAccessSpecifierPublic)
// struct FWebJSResponse              Response                                                         (Parm, NativeAccessSpecifierPublic)

void UKairosCaptureStatics::PauseOrResumeSnippet(const struct FKairosSnippetParams& Params, const struct FWebJSResponse& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KairosCaptureStatics", "PauseOrResumeSnippet");

	Params::UKairosCaptureStatics_PauseOrResumeSnippet_Params Parms{};

	Parms.Params = Params;
	Parms.Response = Response;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KairosSceneCapture.KairosCaptureStatics.GetSceneManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AKairosSceneManagerActor*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AKairosSceneManagerActor* UKairosCaptureStatics::GetSceneManager(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KairosCaptureStatics", "GetSceneManager");

	Params::UKairosCaptureStatics_GetSceneManager_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class KairosSceneCapture.KairosConfig
// (None)

class UClass* UKairosConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KairosConfig");

	return Clss;
}


// KairosConfig KairosSceneCapture.Default__KairosConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UKairosConfig* UKairosConfig::GetDefaultObj()
{
	static class UKairosConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UKairosConfig*>(UKairosConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class KairosSceneCapture.KairosGameModeBase
// (Actor)

class UClass* AKairosGameModeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KairosGameModeBase");

	return Clss;
}


// KairosGameModeBase KairosSceneCapture.Default__KairosGameModeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AKairosGameModeBase* AKairosGameModeBase::GetDefaultObj()
{
	static class AKairosGameModeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AKairosGameModeBase*>(AKairosGameModeBase::StaticClass()->DefaultObject);

	return Default;
}


// Function KairosSceneCapture.KairosGameModeBase.GetDefaultConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UKairosConfig*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UKairosConfig* AKairosGameModeBase::GetDefaultConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KairosGameModeBase", "GetDefaultConfig");

	Params::AKairosGameModeBase_GetDefaultConfig_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class KairosSceneCapture.KairosHeroBase
// (Actor)

class UClass* AKairosHeroBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KairosHeroBase");

	return Clss;
}


// KairosHeroBase KairosSceneCapture.Default__KairosHeroBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AKairosHeroBase* AKairosHeroBase::GetDefaultObj()
{
	static class AKairosHeroBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AKairosHeroBase*>(AKairosHeroBase::StaticClass()->DefaultObject);

	return Default;
}


// Function KairosSceneCapture.KairosHeroBase.EndCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AKairosHeroBase::EndCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KairosHeroBase", "EndCapture");

	Params::AKairosHeroBase_EndCapture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function KairosSceneCapture.KairosHeroBase.BeginCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKairosAnimationFramingInfo FramingInfo                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FKairosCaptureParams        CaptureParams                                                    (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AKairosHeroBase::BeginCapture(const struct FKairosAnimationFramingInfo& FramingInfo, const struct FKairosCaptureParams& CaptureParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KairosHeroBase", "BeginCapture");

	Params::AKairosHeroBase_BeginCapture_Params Parms{};

	Parms.FramingInfo = FramingInfo;
	Parms.CaptureParams = CaptureParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class KairosSceneCapture.KairosPawn
// (Actor, Pawn)

class UClass* AKairosPawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KairosPawn");

	return Clss;
}


// KairosPawn KairosSceneCapture.Default__KairosPawn
// (Public, ClassDefaultObject, ArchetypeObject)

class AKairosPawn* AKairosPawn::GetDefaultObj()
{
	static class AKairosPawn* Default = nullptr;

	if (!Default)
		Default = static_cast<AKairosPawn*>(AKairosPawn::StaticClass()->DefaultObject);

	return Default;
}


// Class KairosSceneCapture.KairosPlayerController
// (Actor, PlayerController)

class UClass* AKairosPlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KairosPlayerController");

	return Clss;
}


// KairosPlayerController KairosSceneCapture.Default__KairosPlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class AKairosPlayerController* AKairosPlayerController::GetDefaultObj()
{
	static class AKairosPlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<AKairosPlayerController*>(AKairosPlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Class KairosSceneCapture.KairosSceneManagerActor
// (Actor)

class UClass* AKairosSceneManagerActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KairosSceneManagerActor");

	return Clss;
}


// KairosSceneManagerActor KairosSceneCapture.Default__KairosSceneManagerActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AKairosSceneManagerActor* AKairosSceneManagerActor::GetDefaultObj()
{
	static class AKairosSceneManagerActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AKairosSceneManagerActor*>(AKairosSceneManagerActor::StaticClass()->DefaultObject);

	return Default;
}


// Function KairosSceneCapture.KairosSceneManagerActor.StopAR
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AKairosSceneManagerActor::StopAR()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KairosSceneManagerActor", "StopAR");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function KairosSceneCapture.KairosSceneManagerActor.PauseOrResumeSnippet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldPase                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AKairosSceneManagerActor::PauseOrResumeSnippet(const class FString& PlayerID, bool bShouldPase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KairosSceneManagerActor", "PauseOrResumeSnippet");

	Params::AKairosSceneManagerActor_PauseOrResumeSnippet_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.bShouldPase = bShouldPase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KairosSceneCapture.KairosSceneManagerActor.OLD_OnSceneSetupComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKairosSceneInfo            CompleteSceneInfoCopy                                            (Parm, NativeAccessSpecifierPublic)

void AKairosSceneManagerActor::OLD_OnSceneSetupComplete(const struct FKairosSceneInfo& CompleteSceneInfoCopy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KairosSceneManagerActor", "OLD_OnSceneSetupComplete");

	Params::AKairosSceneManagerActor_OLD_OnSceneSetupComplete_Params Parms{};

	Parms.CompleteSceneInfoCopy = CompleteSceneInfoCopy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KairosSceneCapture.KairosSceneManagerActor.LoadWorldARMode
// (Event, Public, BlueprintEvent)
// Parameters:

void AKairosSceneManagerActor::LoadWorldARMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KairosSceneManagerActor", "LoadWorldARMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KairosSceneCapture.KairosSceneManagerActor.GetSceneInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKairosSceneInfo            ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FKairosSceneInfo AKairosSceneManagerActor::GetSceneInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KairosSceneManagerActor", "GetSceneInfo");

	Params::AKairosSceneManagerActor_GetSceneInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function KairosSceneCapture.KairosSceneManagerActor.BeginEmotePlaybackForPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EmoteID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AKairosSceneManagerActor::BeginEmotePlaybackForPlayer(const class FString& PlayerID, const class FString& EmoteID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KairosSceneManagerActor", "BeginEmotePlaybackForPlayer");

	Params::AKairosSceneManagerActor_BeginEmotePlaybackForPlayer_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.EmoteID = EmoteID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


