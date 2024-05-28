#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ImagePlate.ImagePlate
// (Actor)

class UClass* AImagePlate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImagePlate");

	return Clss;
}


// ImagePlate ImagePlate.Default__ImagePlate
// (Public, ClassDefaultObject, ArchetypeObject)

class AImagePlate* AImagePlate::GetDefaultObj()
{
	static class AImagePlate* Default = nullptr;

	if (!Default)
		Default = static_cast<AImagePlate*>(AImagePlate::StaticClass()->DefaultObject);

	return Default;
}


// Class ImagePlate.ImagePlateComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UImagePlateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImagePlateComponent");

	return Clss;
}


// ImagePlateComponent ImagePlate.Default__ImagePlateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UImagePlateComponent* UImagePlateComponent::GetDefaultObj()
{
	static class UImagePlateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UImagePlateComponent*>(UImagePlateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ImagePlate.ImagePlateComponent.SetImagePlate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FImagePlateParameters       Plate                                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UImagePlateComponent::SetImagePlate(const struct FImagePlateParameters& Plate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImagePlateComponent", "SetImagePlate");

	Params::UImagePlateComponent_SetImagePlate_Params Parms{};

	Parms.Plate = Plate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ImagePlate.ImagePlateComponent.OnRenderTextureChanged
// (Final, Native, Public)
// Parameters:

void UImagePlateComponent::OnRenderTextureChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImagePlateComponent", "OnRenderTextureChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ImagePlate.ImagePlateComponent.GetPlate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FImagePlateParameters       ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FImagePlateParameters UImagePlateComponent::GetPlate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImagePlateComponent", "GetPlate");

	Params::UImagePlateComponent_GetPlate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ImagePlate.ImagePlateSettings
// (None)

class UClass* UImagePlateSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImagePlateSettings");

	return Clss;
}


// ImagePlateSettings ImagePlate.Default__ImagePlateSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UImagePlateSettings* UImagePlateSettings::GetDefaultObj()
{
	static class UImagePlateSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UImagePlateSettings*>(UImagePlateSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ImagePlate.ImagePlateFileSequence
// (None)

class UClass* UImagePlateFileSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImagePlateFileSequence");

	return Clss;
}


// ImagePlateFileSequence ImagePlate.Default__ImagePlateFileSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UImagePlateFileSequence* UImagePlateFileSequence::GetDefaultObj()
{
	static class UImagePlateFileSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UImagePlateFileSequence*>(UImagePlateFileSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class ImagePlate.ImagePlateFrustumComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UImagePlateFrustumComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImagePlateFrustumComponent");

	return Clss;
}


// ImagePlateFrustumComponent ImagePlate.Default__ImagePlateFrustumComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UImagePlateFrustumComponent* UImagePlateFrustumComponent::GetDefaultObj()
{
	static class UImagePlateFrustumComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UImagePlateFrustumComponent*>(UImagePlateFrustumComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ImagePlate.MovieSceneImagePlateSection
// (None)

class UClass* UMovieSceneImagePlateSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneImagePlateSection");

	return Clss;
}


// MovieSceneImagePlateSection ImagePlate.Default__MovieSceneImagePlateSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneImagePlateSection* UMovieSceneImagePlateSection::GetDefaultObj()
{
	static class UMovieSceneImagePlateSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneImagePlateSection*>(UMovieSceneImagePlateSection::StaticClass()->DefaultObject);

	return Default;
}


// Class ImagePlate.MovieSceneImagePlateTrack
// (None)

class UClass* UMovieSceneImagePlateTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneImagePlateTrack");

	return Clss;
}


// MovieSceneImagePlateTrack ImagePlate.Default__MovieSceneImagePlateTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneImagePlateTrack* UMovieSceneImagePlateTrack::GetDefaultObj()
{
	static class UMovieSceneImagePlateTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneImagePlateTrack*>(UMovieSceneImagePlateTrack::StaticClass()->DefaultObject);

	return Default;
}

}


