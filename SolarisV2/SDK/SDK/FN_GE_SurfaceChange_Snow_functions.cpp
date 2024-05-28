#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SurfaceChange_Snow.GE_SurfaceChange_Snow_C
// (None)

class UClass* UGE_SurfaceChange_Snow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SurfaceChange_Snow_C");

	return Clss;
}


// GE_SurfaceChange_Snow_C GE_SurfaceChange_Snow.Default__GE_SurfaceChange_Snow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SurfaceChange_Snow_C* UGE_SurfaceChange_Snow_C::GetDefaultObj()
{
	static class UGE_SurfaceChange_Snow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SurfaceChange_Snow_C*>(UGE_SurfaceChange_Snow_C::StaticClass()->DefaultObject);

	return Default;
}

}


