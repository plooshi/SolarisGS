#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SurfaceChange_Ice.GE_SurfaceChange_Ice_C
// (None)

class UClass* UGE_SurfaceChange_Ice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SurfaceChange_Ice_C");

	return Clss;
}


// GE_SurfaceChange_Ice_C GE_SurfaceChange_Ice.Default__GE_SurfaceChange_Ice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SurfaceChange_Ice_C* UGE_SurfaceChange_Ice_C::GetDefaultObj()
{
	static class UGE_SurfaceChange_Ice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SurfaceChange_Ice_C*>(UGE_SurfaceChange_Ice_C::StaticClass()->DefaultObject);

	return Default;
}

}


