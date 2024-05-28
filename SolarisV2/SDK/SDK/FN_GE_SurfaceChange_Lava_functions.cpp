#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SurfaceChange_Lava.GE_SurfaceChange_Lava_C
// (None)

class UClass* UGE_SurfaceChange_Lava_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SurfaceChange_Lava_C");

	return Clss;
}


// GE_SurfaceChange_Lava_C GE_SurfaceChange_Lava.Default__GE_SurfaceChange_Lava_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SurfaceChange_Lava_C* UGE_SurfaceChange_Lava_C::GetDefaultObj()
{
	static class UGE_SurfaceChange_Lava_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SurfaceChange_Lava_C*>(UGE_SurfaceChange_Lava_C::StaticClass()->DefaultObject);

	return Default;
}

}


