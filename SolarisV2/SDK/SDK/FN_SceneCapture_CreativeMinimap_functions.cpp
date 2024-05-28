#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SceneCapture_CreativeMinimap.SceneCapture_CreativeMinimap_C
// (Actor)

class UClass* ASceneCapture_CreativeMinimap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SceneCapture_CreativeMinimap_C");

	return Clss;
}


// SceneCapture_CreativeMinimap_C SceneCapture_CreativeMinimap.Default__SceneCapture_CreativeMinimap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASceneCapture_CreativeMinimap_C* ASceneCapture_CreativeMinimap_C::GetDefaultObj()
{
	static class ASceneCapture_CreativeMinimap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASceneCapture_CreativeMinimap_C*>(ASceneCapture_CreativeMinimap_C::StaticClass()->DefaultObject);

	return Default;
}

}


