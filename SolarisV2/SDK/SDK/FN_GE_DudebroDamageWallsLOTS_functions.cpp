#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DudebroDamageWallsLOTS.GE_DudebroDamageWallsLOTS_C
// (None)

class UClass* UGE_DudebroDamageWallsLOTS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DudebroDamageWallsLOTS_C");

	return Clss;
}


// GE_DudebroDamageWallsLOTS_C GE_DudebroDamageWallsLOTS.Default__GE_DudebroDamageWallsLOTS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DudebroDamageWallsLOTS_C* UGE_DudebroDamageWallsLOTS_C::GetDefaultObj()
{
	static class UGE_DudebroDamageWallsLOTS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DudebroDamageWallsLOTS_C*>(UGE_DudebroDamageWallsLOTS_C::StaticClass()->DefaultObject);

	return Default;
}

}


