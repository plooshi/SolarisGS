#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FacialAnim_BodyRemapAsset.FacialAnim_BodyRemapAsset_C
// (None)

class UClass* UFacialAnim_BodyRemapAsset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FacialAnim_BodyRemapAsset_C");

	return Clss;
}


// FacialAnim_BodyRemapAsset_C FacialAnim_BodyRemapAsset.Default__FacialAnim_BodyRemapAsset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFacialAnim_BodyRemapAsset_C* UFacialAnim_BodyRemapAsset_C::GetDefaultObj()
{
	static class UFacialAnim_BodyRemapAsset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFacialAnim_BodyRemapAsset_C*>(UFacialAnim_BodyRemapAsset_C::StaticClass()->DefaultObject);

	return Default;
}

}


