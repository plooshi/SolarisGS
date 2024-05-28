#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BoostJump_IsUsingJetpack.GE_BoostJump_IsUsingJetpack_C
// (None)

class UClass* UGE_BoostJump_IsUsingJetpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BoostJump_IsUsingJetpack_C");

	return Clss;
}


// GE_BoostJump_IsUsingJetpack_C GE_BoostJump_IsUsingJetpack.Default__GE_BoostJump_IsUsingJetpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BoostJump_IsUsingJetpack_C* UGE_BoostJump_IsUsingJetpack_C::GetDefaultObj()
{
	static class UGE_BoostJump_IsUsingJetpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BoostJump_IsUsingJetpack_C*>(UGE_BoostJump_IsUsingJetpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


