#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass STW_PlayerCameraModeBase.STW_PlayerCameraModeBase_C
// (None)

class UClass* USTW_PlayerCameraModeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("STW_PlayerCameraModeBase_C");

	return Clss;
}


// STW_PlayerCameraModeBase_C STW_PlayerCameraModeBase.Default__STW_PlayerCameraModeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USTW_PlayerCameraModeBase_C* USTW_PlayerCameraModeBase_C::GetDefaultObj()
{
	static class USTW_PlayerCameraModeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USTW_PlayerCameraModeBase_C*>(USTW_PlayerCameraModeBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


