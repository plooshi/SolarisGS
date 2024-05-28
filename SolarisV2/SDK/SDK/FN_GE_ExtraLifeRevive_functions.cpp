#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ExtraLifeRevive.GE_ExtraLifeRevive_C
// (None)

class UClass* UGE_ExtraLifeRevive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ExtraLifeRevive_C");

	return Clss;
}


// GE_ExtraLifeRevive_C GE_ExtraLifeRevive.Default__GE_ExtraLifeRevive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ExtraLifeRevive_C* UGE_ExtraLifeRevive_C::GetDefaultObj()
{
	static class UGE_ExtraLifeRevive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ExtraLifeRevive_C*>(UGE_ExtraLifeRevive_C::StaticClass()->DefaultObject);

	return Default;
}

}


