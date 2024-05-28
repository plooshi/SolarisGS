#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FacialAnim_HeadRemapAsset.FacialAnim_HeadRemapAsset_C
// (None)

class UClass* UFacialAnim_HeadRemapAsset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FacialAnim_HeadRemapAsset_C");

	return Clss;
}


// FacialAnim_HeadRemapAsset_C FacialAnim_HeadRemapAsset.Default__FacialAnim_HeadRemapAsset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFacialAnim_HeadRemapAsset_C* UFacialAnim_HeadRemapAsset_C::GetDefaultObj()
{
	static class UFacialAnim_HeadRemapAsset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFacialAnim_HeadRemapAsset_C*>(UFacialAnim_HeadRemapAsset_C::StaticClass()->DefaultObject);

	return Default;
}

}


