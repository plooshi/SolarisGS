#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DBNOResurrectStun.GE_DBNOResurrectStun_C
// (None)

class UClass* UGE_DBNOResurrectStun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DBNOResurrectStun_C");

	return Clss;
}


// GE_DBNOResurrectStun_C GE_DBNOResurrectStun.Default__GE_DBNOResurrectStun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DBNOResurrectStun_C* UGE_DBNOResurrectStun_C::GetDefaultObj()
{
	static class UGE_DBNOResurrectStun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DBNOResurrectStun_C*>(UGE_DBNOResurrectStun_C::StaticClass()->DefaultObject);

	return Default;
}

}


