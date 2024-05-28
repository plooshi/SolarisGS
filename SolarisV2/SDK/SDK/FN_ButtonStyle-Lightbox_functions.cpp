#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Lightbox.ButtonStyle-Lightbox_C
// (None)

class UClass* UButtonStyleMinusLightbox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Lightbox_C");

	return Clss;
}


// ButtonStyle-Lightbox_C ButtonStyle-Lightbox.Default__ButtonStyle-Lightbox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusLightbox_C* UButtonStyleMinusLightbox_C::GetDefaultObj()
{
	static class UButtonStyleMinusLightbox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusLightbox_C*>(UButtonStyleMinusLightbox_C::StaticClass()->DefaultObject);

	return Default;
}

}


