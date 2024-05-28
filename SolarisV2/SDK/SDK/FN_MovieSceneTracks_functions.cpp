#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MovieSceneTracks.MovieScenePropertyTrack
// (None)

class UClass* UMovieScenePropertyTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePropertyTrack");

	return Clss;
}


// MovieScenePropertyTrack MovieSceneTracks.Default__MovieScenePropertyTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePropertyTrack* UMovieScenePropertyTrack::GetDefaultObj()
{
	static class UMovieScenePropertyTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePropertyTrack*>(UMovieScenePropertyTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneSpawnTrack
// (None)

class UClass* UMovieSceneSpawnTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSpawnTrack");

	return Clss;
}


// MovieSceneSpawnTrack MovieSceneTracks.Default__MovieSceneSpawnTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSpawnTrack* UMovieSceneSpawnTrack::GetDefaultObj()
{
	static class UMovieSceneSpawnTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSpawnTrack*>(UMovieSceneSpawnTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneTransformOrigin
// (None)

class UClass* IMovieSceneTransformOrigin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTransformOrigin");

	return Clss;
}


// MovieSceneTransformOrigin MovieSceneTracks.Default__MovieSceneTransformOrigin
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneTransformOrigin* IMovieSceneTransformOrigin::GetDefaultObj()
{
	static class IMovieSceneTransformOrigin* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneTransformOrigin*>(IMovieSceneTransformOrigin::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform IMovieSceneTransformOrigin::BP_GetTransformOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTransformOrigin", "BP_GetTransformOrigin");

	Params::IMovieSceneTransformOrigin_BP_GetTransformOrigin_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class MovieSceneTracks.MovieScene3DConstraintSection
// (None)

class UClass* UMovieScene3DConstraintSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DConstraintSection");

	return Clss;
}


// MovieScene3DConstraintSection MovieSceneTracks.Default__MovieScene3DConstraintSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DConstraintSection* UMovieScene3DConstraintSection::GetDefaultObj()
{
	static class UMovieScene3DConstraintSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DConstraintSection*>(UMovieScene3DConstraintSection::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMovieSceneObjectBindingID  InConstraintBindingID                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieScene3DConstraintSection::SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScene3DConstraintSection", "SetConstraintBindingID");

	Params::UMovieScene3DConstraintSection_SetConstraintBindingID_Params Parms{};

	Parms.InConstraintBindingID = InConstraintBindingID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScene3DConstraintSection", "GetConstraintBindingID");

	Params::UMovieScene3DConstraintSection_GetConstraintBindingID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneTracks.MovieScene3DAttachSection
// (None)

class UClass* UMovieScene3DAttachSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DAttachSection");

	return Clss;
}


// MovieScene3DAttachSection MovieSceneTracks.Default__MovieScene3DAttachSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DAttachSection* UMovieScene3DAttachSection::GetDefaultObj()
{
	static class UMovieScene3DAttachSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DAttachSection*>(UMovieScene3DAttachSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScene3DConstraintTrack
// (None)

class UClass* UMovieScene3DConstraintTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DConstraintTrack");

	return Clss;
}


// MovieScene3DConstraintTrack MovieSceneTracks.Default__MovieScene3DConstraintTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DConstraintTrack* UMovieScene3DConstraintTrack::GetDefaultObj()
{
	static class UMovieScene3DConstraintTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DConstraintTrack*>(UMovieScene3DConstraintTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScene3DAttachTrack
// (None)

class UClass* UMovieScene3DAttachTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DAttachTrack");

	return Clss;
}


// MovieScene3DAttachTrack MovieSceneTracks.Default__MovieScene3DAttachTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DAttachTrack* UMovieScene3DAttachTrack::GetDefaultObj()
{
	static class UMovieScene3DAttachTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DAttachTrack*>(UMovieScene3DAttachTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScene3DPathSection
// (None)

class UClass* UMovieScene3DPathSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DPathSection");

	return Clss;
}


// MovieScene3DPathSection MovieSceneTracks.Default__MovieScene3DPathSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DPathSection* UMovieScene3DPathSection::GetDefaultObj()
{
	static class UMovieScene3DPathSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DPathSection*>(UMovieScene3DPathSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScene3DPathTrack
// (None)

class UClass* UMovieScene3DPathTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DPathTrack");

	return Clss;
}


// MovieScene3DPathTrack MovieSceneTracks.Default__MovieScene3DPathTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DPathTrack* UMovieScene3DPathTrack::GetDefaultObj()
{
	static class UMovieScene3DPathTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DPathTrack*>(UMovieScene3DPathTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScene3DTransformSection
// (None)

class UClass* UMovieScene3DTransformSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DTransformSection");

	return Clss;
}


// MovieScene3DTransformSection MovieSceneTracks.Default__MovieScene3DTransformSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DTransformSection* UMovieScene3DTransformSection::GetDefaultObj()
{
	static class UMovieScene3DTransformSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DTransformSection*>(UMovieScene3DTransformSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScene3DTransformTrack
// (None)

class UClass* UMovieScene3DTransformTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DTransformTrack");

	return Clss;
}


// MovieScene3DTransformTrack MovieSceneTracks.Default__MovieScene3DTransformTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DTransformTrack* UMovieScene3DTransformTrack::GetDefaultObj()
{
	static class UMovieScene3DTransformTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DTransformTrack*>(UMovieScene3DTransformTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneActorReferenceSection
// (None)

class UClass* UMovieSceneActorReferenceSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneActorReferenceSection");

	return Clss;
}


// MovieSceneActorReferenceSection MovieSceneTracks.Default__MovieSceneActorReferenceSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneActorReferenceSection* UMovieSceneActorReferenceSection::GetDefaultObj()
{
	static class UMovieSceneActorReferenceSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneActorReferenceSection*>(UMovieSceneActorReferenceSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// (None)

class UClass* UMovieSceneActorReferenceTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneActorReferenceTrack");

	return Clss;
}


// MovieSceneActorReferenceTrack MovieSceneTracks.Default__MovieSceneActorReferenceTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneActorReferenceTrack* UMovieSceneActorReferenceTrack::GetDefaultObj()
{
	static class UMovieSceneActorReferenceTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneActorReferenceTrack*>(UMovieSceneActorReferenceTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneAudioSection
// (None)

class UClass* UMovieSceneAudioSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneAudioSection");

	return Clss;
}


// MovieSceneAudioSection MovieSceneTracks.Default__MovieSceneAudioSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneAudioSection* UMovieSceneAudioSection::GetDefaultObj()
{
	static class UMovieSceneAudioSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneAudioSection*>(UMovieSceneAudioSection::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InStartOffset                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneAudioSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneAudioSection", "SetStartOffset");

	Params::UMovieSceneAudioSection_SetStartOffset_Params Parms{};

	Parms.InStartOffset = InStartOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  InSound                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneAudioSection::SetSound(class USoundBase* InSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneAudioSection", "SetSound");

	Params::UMovieSceneAudioSection_SetSound_Params Parms{};

	Parms.InSound = InSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameNumber                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UMovieSceneAudioSection::GetStartOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneAudioSection", "GetStartOffset");

	Params::UMovieSceneAudioSection_GetStartOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USoundBase*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundBase* UMovieSceneAudioSection::GetSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneAudioSection", "GetSound");

	Params::UMovieSceneAudioSection_GetSound_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneTracks.MovieSceneAudioTrack
// (None)

class UClass* UMovieSceneAudioTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneAudioTrack");

	return Clss;
}


// MovieSceneAudioTrack MovieSceneTracks.Default__MovieSceneAudioTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneAudioTrack* UMovieSceneAudioTrack::GetDefaultObj()
{
	static class UMovieSceneAudioTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneAudioTrack*>(UMovieSceneAudioTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneBoolSection
// (None)

class UClass* UMovieSceneBoolSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBoolSection");

	return Clss;
}


// MovieSceneBoolSection MovieSceneTracks.Default__MovieSceneBoolSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneBoolSection* UMovieSceneBoolSection::GetDefaultObj()
{
	static class UMovieSceneBoolSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneBoolSection*>(UMovieSceneBoolSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneBoolTrack
// (None)

class UClass* UMovieSceneBoolTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBoolTrack");

	return Clss;
}


// MovieSceneBoolTrack MovieSceneTracks.Default__MovieSceneBoolTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneBoolTrack* UMovieSceneBoolTrack::GetDefaultObj()
{
	static class UMovieSceneBoolTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneBoolTrack*>(UMovieSceneBoolTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneByteSection
// (None)

class UClass* UMovieSceneByteSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneByteSection");

	return Clss;
}


// MovieSceneByteSection MovieSceneTracks.Default__MovieSceneByteSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneByteSection* UMovieSceneByteSection::GetDefaultObj()
{
	static class UMovieSceneByteSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneByteSection*>(UMovieSceneByteSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneByteTrack
// (None)

class UClass* UMovieSceneByteTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneByteTrack");

	return Clss;
}


// MovieSceneByteTrack MovieSceneTracks.Default__MovieSceneByteTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneByteTrack* UMovieSceneByteTrack::GetDefaultObj()
{
	static class UMovieSceneByteTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneByteTrack*>(UMovieSceneByteTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraAnimSection
// (None)

class UClass* UMovieSceneCameraAnimSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraAnimSection");

	return Clss;
}


// MovieSceneCameraAnimSection MovieSceneTracks.Default__MovieSceneCameraAnimSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraAnimSection* UMovieSceneCameraAnimSection::GetDefaultObj()
{
	static class UMovieSceneCameraAnimSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraAnimSection*>(UMovieSceneCameraAnimSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// (None)

class UClass* UMovieSceneCameraAnimTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraAnimTrack");

	return Clss;
}


// MovieSceneCameraAnimTrack MovieSceneTracks.Default__MovieSceneCameraAnimTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraAnimTrack* UMovieSceneCameraAnimTrack::GetDefaultObj()
{
	static class UMovieSceneCameraAnimTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraAnimTrack*>(UMovieSceneCameraAnimTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraCutSection
// (None)

class UClass* UMovieSceneCameraCutSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraCutSection");

	return Clss;
}


// MovieSceneCameraCutSection MovieSceneTracks.Default__MovieSceneCameraCutSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraCutSection* UMovieSceneCameraCutSection::GetDefaultObj()
{
	static class UMovieSceneCameraCutSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraCutSection*>(UMovieSceneCameraCutSection::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMovieSceneObjectBindingID  InCameraBindingID                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCameraCutSection::SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCameraCutSection", "SetCameraBindingID");

	Params::UMovieSceneCameraCutSection_SetCameraBindingID_Params Parms{};

	Parms.InCameraBindingID = InCameraBindingID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCameraCutSection", "GetCameraBindingID");

	Params::UMovieSceneCameraCutSection_GetCameraBindingID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneTracks.MovieSceneCameraCutTrack
// (None)

class UClass* UMovieSceneCameraCutTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraCutTrack");

	return Clss;
}


// MovieSceneCameraCutTrack MovieSceneTracks.Default__MovieSceneCameraCutTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraCutTrack* UMovieSceneCameraCutTrack::GetDefaultObj()
{
	static class UMovieSceneCameraCutTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraCutTrack*>(UMovieSceneCameraCutTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraShakeSection
// (None)

class UClass* UMovieSceneCameraShakeSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraShakeSection");

	return Clss;
}


// MovieSceneCameraShakeSection MovieSceneTracks.Default__MovieSceneCameraShakeSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraShakeSection* UMovieSceneCameraShakeSection::GetDefaultObj()
{
	static class UMovieSceneCameraShakeSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraShakeSection*>(UMovieSceneCameraShakeSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// (None)

class UClass* UMovieSceneCameraShakeTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraShakeTrack");

	return Clss;
}


// MovieSceneCameraShakeTrack MovieSceneTracks.Default__MovieSceneCameraShakeTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraShakeTrack* UMovieSceneCameraShakeTrack::GetDefaultObj()
{
	static class UMovieSceneCameraShakeTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraShakeTrack*>(UMovieSceneCameraShakeTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCinematicShotSection
// (None)

class UClass* UMovieSceneCinematicShotSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCinematicShotSection");

	return Clss;
}


// MovieSceneCinematicShotSection MovieSceneTracks.Default__MovieSceneCinematicShotSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCinematicShotSection* UMovieSceneCinematicShotSection::GetDefaultObj()
{
	static class UMovieSceneCinematicShotSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCinematicShotSection*>(UMovieSceneCinematicShotSection::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InShotDisplayName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCinematicShotSection::SetShotDisplayName(const class FString& InShotDisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCinematicShotSection", "SetShotDisplayName");

	Params::UMovieSceneCinematicShotSection_SetShotDisplayName_Params Parms{};

	Parms.InShotDisplayName = InShotDisplayName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMovieSceneCinematicShotSection::GetShotDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCinematicShotSection", "GetShotDisplayName");

	Params::UMovieSceneCinematicShotSection_GetShotDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// (None)

class UClass* UMovieSceneCinematicShotTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCinematicShotTrack");

	return Clss;
}


// MovieSceneCinematicShotTrack MovieSceneTracks.Default__MovieSceneCinematicShotTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCinematicShotTrack* UMovieSceneCinematicShotTrack::GetDefaultObj()
{
	static class UMovieSceneCinematicShotTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCinematicShotTrack*>(UMovieSceneCinematicShotTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneColorSection
// (None)

class UClass* UMovieSceneColorSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneColorSection");

	return Clss;
}


// MovieSceneColorSection MovieSceneTracks.Default__MovieSceneColorSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneColorSection* UMovieSceneColorSection::GetDefaultObj()
{
	static class UMovieSceneColorSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneColorSection*>(UMovieSceneColorSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneColorTrack
// (None)

class UClass* UMovieSceneColorTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneColorTrack");

	return Clss;
}


// MovieSceneColorTrack MovieSceneTracks.Default__MovieSceneColorTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneColorTrack* UMovieSceneColorTrack::GetDefaultObj()
{
	static class UMovieSceneColorTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneColorTrack*>(UMovieSceneColorTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEnumSection
// (None)

class UClass* UMovieSceneEnumSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEnumSection");

	return Clss;
}


// MovieSceneEnumSection MovieSceneTracks.Default__MovieSceneEnumSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEnumSection* UMovieSceneEnumSection::GetDefaultObj()
{
	static class UMovieSceneEnumSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEnumSection*>(UMovieSceneEnumSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEnumTrack
// (None)

class UClass* UMovieSceneEnumTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEnumTrack");

	return Clss;
}


// MovieSceneEnumTrack MovieSceneTracks.Default__MovieSceneEnumTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEnumTrack* UMovieSceneEnumTrack::GetDefaultObj()
{
	static class UMovieSceneEnumTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEnumTrack*>(UMovieSceneEnumTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// (None)

class UClass* UMovieSceneEulerTransformTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEulerTransformTrack");

	return Clss;
}


// MovieSceneEulerTransformTrack MovieSceneTracks.Default__MovieSceneEulerTransformTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEulerTransformTrack* UMovieSceneEulerTransformTrack::GetDefaultObj()
{
	static class UMovieSceneEulerTransformTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEulerTransformTrack*>(UMovieSceneEulerTransformTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEventSectionBase
// (None)

class UClass* UMovieSceneEventSectionBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEventSectionBase");

	return Clss;
}


// MovieSceneEventSectionBase MovieSceneTracks.Default__MovieSceneEventSectionBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEventSectionBase* UMovieSceneEventSectionBase::GetDefaultObj()
{
	static class UMovieSceneEventSectionBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEventSectionBase*>(UMovieSceneEventSectionBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// (None)

class UClass* UMovieSceneEventRepeaterSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEventRepeaterSection");

	return Clss;
}


// MovieSceneEventRepeaterSection MovieSceneTracks.Default__MovieSceneEventRepeaterSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEventRepeaterSection* UMovieSceneEventRepeaterSection::GetDefaultObj()
{
	static class UMovieSceneEventRepeaterSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEventRepeaterSection*>(UMovieSceneEventRepeaterSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEventSection
// (None)

class UClass* UMovieSceneEventSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEventSection");

	return Clss;
}


// MovieSceneEventSection MovieSceneTracks.Default__MovieSceneEventSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEventSection* UMovieSceneEventSection::GetDefaultObj()
{
	static class UMovieSceneEventSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEventSection*>(UMovieSceneEventSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEventTrack
// (None)

class UClass* UMovieSceneEventTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEventTrack");

	return Clss;
}


// MovieSceneEventTrack MovieSceneTracks.Default__MovieSceneEventTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEventTrack* UMovieSceneEventTrack::GetDefaultObj()
{
	static class UMovieSceneEventTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEventTrack*>(UMovieSceneEventTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEventTriggerSection
// (None)

class UClass* UMovieSceneEventTriggerSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEventTriggerSection");

	return Clss;
}


// MovieSceneEventTriggerSection MovieSceneTracks.Default__MovieSceneEventTriggerSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEventTriggerSection* UMovieSceneEventTriggerSection::GetDefaultObj()
{
	static class UMovieSceneEventTriggerSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEventTriggerSection*>(UMovieSceneEventTriggerSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneFloatSection
// (None)

class UClass* UMovieSceneFloatSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFloatSection");

	return Clss;
}


// MovieSceneFloatSection MovieSceneTracks.Default__MovieSceneFloatSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFloatSection* UMovieSceneFloatSection::GetDefaultObj()
{
	static class UMovieSceneFloatSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFloatSection*>(UMovieSceneFloatSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneFadeSection
// (None)

class UClass* UMovieSceneFadeSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFadeSection");

	return Clss;
}


// MovieSceneFadeSection MovieSceneTracks.Default__MovieSceneFadeSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFadeSection* UMovieSceneFadeSection::GetDefaultObj()
{
	static class UMovieSceneFadeSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFadeSection*>(UMovieSceneFadeSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneFloatTrack
// (None)

class UClass* UMovieSceneFloatTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFloatTrack");

	return Clss;
}


// MovieSceneFloatTrack MovieSceneTracks.Default__MovieSceneFloatTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFloatTrack* UMovieSceneFloatTrack::GetDefaultObj()
{
	static class UMovieSceneFloatTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFloatTrack*>(UMovieSceneFloatTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneFadeTrack
// (None)

class UClass* UMovieSceneFadeTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFadeTrack");

	return Clss;
}


// MovieSceneFadeTrack MovieSceneTracks.Default__MovieSceneFadeTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFadeTrack* UMovieSceneFadeTrack::GetDefaultObj()
{
	static class UMovieSceneFadeTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFadeTrack*>(UMovieSceneFadeTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneIntegerSection
// (None)

class UClass* UMovieSceneIntegerSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneIntegerSection");

	return Clss;
}


// MovieSceneIntegerSection MovieSceneTracks.Default__MovieSceneIntegerSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneIntegerSection* UMovieSceneIntegerSection::GetDefaultObj()
{
	static class UMovieSceneIntegerSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneIntegerSection*>(UMovieSceneIntegerSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneIntegerTrack
// (None)

class UClass* UMovieSceneIntegerTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneIntegerTrack");

	return Clss;
}


// MovieSceneIntegerTrack MovieSceneTracks.Default__MovieSceneIntegerTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneIntegerTrack* UMovieSceneIntegerTrack::GetDefaultObj()
{
	static class UMovieSceneIntegerTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneIntegerTrack*>(UMovieSceneIntegerTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// (None)

class UClass* UMovieSceneLevelVisibilitySection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneLevelVisibilitySection");

	return Clss;
}


// MovieSceneLevelVisibilitySection MovieSceneTracks.Default__MovieSceneLevelVisibilitySection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneLevelVisibilitySection* UMovieSceneLevelVisibilitySection::GetDefaultObj()
{
	static class UMovieSceneLevelVisibilitySection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneLevelVisibilitySection*>(UMovieSceneLevelVisibilitySection::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELevelVisibility        InVisibility                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneLevelVisibilitySection::SetVisibility(enum class ELevelVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "SetVisibility");

	Params::UMovieSceneLevelVisibilitySection_SetVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FName>                InLevelNames                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMovieSceneLevelVisibilitySection::SetLevelNames(TArray<class FName>& InLevelNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "SetLevelNames");

	Params::UMovieSceneLevelVisibilitySection_SetLevelNames_Params Parms{};

	Parms.InLevelNames = InLevelNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ELevelVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "GetVisibility");

	Params::UMovieSceneLevelVisibilitySection_GetVisibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FName> UMovieSceneLevelVisibilitySection::GetLevelNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "GetLevelNames");

	Params::UMovieSceneLevelVisibilitySection_GetLevelNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// (None)

class UClass* UMovieSceneLevelVisibilityTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneLevelVisibilityTrack");

	return Clss;
}


// MovieSceneLevelVisibilityTrack MovieSceneTracks.Default__MovieSceneLevelVisibilityTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneLevelVisibilityTrack* UMovieSceneLevelVisibilityTrack::GetDefaultObj()
{
	static class UMovieSceneLevelVisibilityTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneLevelVisibilityTrack*>(UMovieSceneLevelVisibilityTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneMaterialTrack
// (None)

class UClass* UMovieSceneMaterialTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMaterialTrack");

	return Clss;
}


// MovieSceneMaterialTrack MovieSceneTracks.Default__MovieSceneMaterialTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMaterialTrack* UMovieSceneMaterialTrack::GetDefaultObj()
{
	static class UMovieSceneMaterialTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMaterialTrack*>(UMovieSceneMaterialTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// (None)

class UClass* UMovieSceneMaterialParameterCollectionTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMaterialParameterCollectionTrack");

	return Clss;
}


// MovieSceneMaterialParameterCollectionTrack MovieSceneTracks.Default__MovieSceneMaterialParameterCollectionTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMaterialParameterCollectionTrack* UMovieSceneMaterialParameterCollectionTrack::GetDefaultObj()
{
	static class UMovieSceneMaterialParameterCollectionTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMaterialParameterCollectionTrack*>(UMovieSceneMaterialParameterCollectionTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// (None)

class UClass* UMovieSceneComponentMaterialTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneComponentMaterialTrack");

	return Clss;
}


// MovieSceneComponentMaterialTrack MovieSceneTracks.Default__MovieSceneComponentMaterialTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneComponentMaterialTrack* UMovieSceneComponentMaterialTrack::GetDefaultObj()
{
	static class UMovieSceneComponentMaterialTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneComponentMaterialTrack*>(UMovieSceneComponentMaterialTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneObjectPropertySection
// (None)

class UClass* UMovieSceneObjectPropertySection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneObjectPropertySection");

	return Clss;
}


// MovieSceneObjectPropertySection MovieSceneTracks.Default__MovieSceneObjectPropertySection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneObjectPropertySection* UMovieSceneObjectPropertySection::GetDefaultObj()
{
	static class UMovieSceneObjectPropertySection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneObjectPropertySection*>(UMovieSceneObjectPropertySection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// (None)

class UClass* UMovieSceneObjectPropertyTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneObjectPropertyTrack");

	return Clss;
}


// MovieSceneObjectPropertyTrack MovieSceneTracks.Default__MovieSceneObjectPropertyTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneObjectPropertyTrack* UMovieSceneObjectPropertyTrack::GetDefaultObj()
{
	static class UMovieSceneObjectPropertyTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneObjectPropertyTrack*>(UMovieSceneObjectPropertyTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneParameterSection
// (None)

class UClass* UMovieSceneParameterSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneParameterSection");

	return Clss;
}


// MovieSceneParameterSection MovieSceneTracks.Default__MovieSceneParameterSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneParameterSection* UMovieSceneParameterSection::GetDefaultObj()
{
	static class UMovieSceneParameterSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneParameterSection*>(UMovieSceneParameterSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// (None)

class UClass* UMovieSceneParticleParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneParticleParameterTrack");

	return Clss;
}


// MovieSceneParticleParameterTrack MovieSceneTracks.Default__MovieSceneParticleParameterTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneParticleParameterTrack* UMovieSceneParticleParameterTrack::GetDefaultObj()
{
	static class UMovieSceneParticleParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneParticleParameterTrack*>(UMovieSceneParticleParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneParticleSection
// (None)

class UClass* UMovieSceneParticleSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneParticleSection");

	return Clss;
}


// MovieSceneParticleSection MovieSceneTracks.Default__MovieSceneParticleSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneParticleSection* UMovieSceneParticleSection::GetDefaultObj()
{
	static class UMovieSceneParticleSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneParticleSection*>(UMovieSceneParticleSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneParticleTrack
// (None)

class UClass* UMovieSceneParticleTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneParticleTrack");

	return Clss;
}


// MovieSceneParticleTrack MovieSceneTracks.Default__MovieSceneParticleTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneParticleTrack* UMovieSceneParticleTrack::GetDefaultObj()
{
	static class UMovieSceneParticleTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneParticleTrack*>(UMovieSceneParticleTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// (None)

class UClass* UMovieScenePrimitiveMaterialSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePrimitiveMaterialSection");

	return Clss;
}


// MovieScenePrimitiveMaterialSection MovieSceneTracks.Default__MovieScenePrimitiveMaterialSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePrimitiveMaterialSection* UMovieScenePrimitiveMaterialSection::GetDefaultObj()
{
	static class UMovieScenePrimitiveMaterialSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePrimitiveMaterialSection*>(UMovieScenePrimitiveMaterialSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// (None)

class UClass* UMovieScenePrimitiveMaterialTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePrimitiveMaterialTrack");

	return Clss;
}


// MovieScenePrimitiveMaterialTrack MovieSceneTracks.Default__MovieScenePrimitiveMaterialTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePrimitiveMaterialTrack* UMovieScenePrimitiveMaterialTrack::GetDefaultObj()
{
	static class UMovieScenePrimitiveMaterialTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePrimitiveMaterialTrack*>(UMovieScenePrimitiveMaterialTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// (None)

class UClass* UMovieSceneSkeletalAnimationSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSkeletalAnimationSection");

	return Clss;
}


// MovieSceneSkeletalAnimationSection MovieSceneTracks.Default__MovieSceneSkeletalAnimationSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSkeletalAnimationSection* UMovieSceneSkeletalAnimationSection::GetDefaultObj()
{
	static class UMovieSceneSkeletalAnimationSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSkeletalAnimationSection*>(UMovieSceneSkeletalAnimationSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// (None)

class UClass* UMovieSceneSkeletalAnimationTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSkeletalAnimationTrack");

	return Clss;
}


// MovieSceneSkeletalAnimationTrack MovieSceneTracks.Default__MovieSceneSkeletalAnimationTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSkeletalAnimationTrack* UMovieSceneSkeletalAnimationTrack::GetDefaultObj()
{
	static class UMovieSceneSkeletalAnimationTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSkeletalAnimationTrack*>(UMovieSceneSkeletalAnimationTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneSlomoSection
// (None)

class UClass* UMovieSceneSlomoSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSlomoSection");

	return Clss;
}


// MovieSceneSlomoSection MovieSceneTracks.Default__MovieSceneSlomoSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSlomoSection* UMovieSceneSlomoSection::GetDefaultObj()
{
	static class UMovieSceneSlomoSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSlomoSection*>(UMovieSceneSlomoSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneSlomoTrack
// (None)

class UClass* UMovieSceneSlomoTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSlomoTrack");

	return Clss;
}


// MovieSceneSlomoTrack MovieSceneTracks.Default__MovieSceneSlomoTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSlomoTrack* UMovieSceneSlomoTrack::GetDefaultObj()
{
	static class UMovieSceneSlomoTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSlomoTrack*>(UMovieSceneSlomoTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneSpawnSection
// (None)

class UClass* UMovieSceneSpawnSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSpawnSection");

	return Clss;
}


// MovieSceneSpawnSection MovieSceneTracks.Default__MovieSceneSpawnSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSpawnSection* UMovieSceneSpawnSection::GetDefaultObj()
{
	static class UMovieSceneSpawnSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSpawnSection*>(UMovieSceneSpawnSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneStringSection
// (None)

class UClass* UMovieSceneStringSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneStringSection");

	return Clss;
}


// MovieSceneStringSection MovieSceneTracks.Default__MovieSceneStringSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneStringSection* UMovieSceneStringSection::GetDefaultObj()
{
	static class UMovieSceneStringSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneStringSection*>(UMovieSceneStringSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneStringTrack
// (None)

class UClass* UMovieSceneStringTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneStringTrack");

	return Clss;
}


// MovieSceneStringTrack MovieSceneTracks.Default__MovieSceneStringTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneStringTrack* UMovieSceneStringTrack::GetDefaultObj()
{
	static class UMovieSceneStringTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneStringTrack*>(UMovieSceneStringTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneTransformTrack
// (None)

class UClass* UMovieSceneTransformTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTransformTrack");

	return Clss;
}


// MovieSceneTransformTrack MovieSceneTracks.Default__MovieSceneTransformTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneTransformTrack* UMovieSceneTransformTrack::GetDefaultObj()
{
	static class UMovieSceneTransformTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneTransformTrack*>(UMovieSceneTransformTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneVectorSection
// (None)

class UClass* UMovieSceneVectorSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneVectorSection");

	return Clss;
}


// MovieSceneVectorSection MovieSceneTracks.Default__MovieSceneVectorSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneVectorSection* UMovieSceneVectorSection::GetDefaultObj()
{
	static class UMovieSceneVectorSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneVectorSection*>(UMovieSceneVectorSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneVectorTrack
// (None)

class UClass* UMovieSceneVectorTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneVectorTrack");

	return Clss;
}


// MovieSceneVectorTrack MovieSceneTracks.Default__MovieSceneVectorTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneVectorTrack* UMovieSceneVectorTrack::GetDefaultObj()
{
	static class UMovieSceneVectorTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneVectorTrack*>(UMovieSceneVectorTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneVisibilityTrack
// (None)

class UClass* UMovieSceneVisibilityTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneVisibilityTrack");

	return Clss;
}


// MovieSceneVisibilityTrack MovieSceneTracks.Default__MovieSceneVisibilityTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneVisibilityTrack* UMovieSceneVisibilityTrack::GetDefaultObj()
{
	static class UMovieSceneVisibilityTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneVisibilityTrack*>(UMovieSceneVisibilityTrack::StaticClass()->DefaultObject);

	return Default;
}

}


