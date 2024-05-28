#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FacialAnimSystem.FacialLiveLinkRemapAsset
// (None)

class UClass* UFacialLiveLinkRemapAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FacialLiveLinkRemapAsset");

	return Clss;
}


// FacialLiveLinkRemapAsset FacialAnimSystem.Default__FacialLiveLinkRemapAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UFacialLiveLinkRemapAsset* UFacialLiveLinkRemapAsset::GetDefaultObj()
{
	static class UFacialLiveLinkRemapAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UFacialLiveLinkRemapAsset*>(UFacialLiveLinkRemapAsset::StaticClass()->DefaultObject);

	return Default;
}

}


