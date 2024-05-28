#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_HitImpact_ShoppingCart.CameraShake_HitImpact_ShoppingCart_C
// (None)

class UClass* UCameraShake_HitImpact_ShoppingCart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_HitImpact_ShoppingCart_C");

	return Clss;
}


// CameraShake_HitImpact_ShoppingCart_C CameraShake_HitImpact_ShoppingCart.Default__CameraShake_HitImpact_ShoppingCart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_HitImpact_ShoppingCart_C* UCameraShake_HitImpact_ShoppingCart_C::GetDefaultObj()
{
	static class UCameraShake_HitImpact_ShoppingCart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_HitImpact_ShoppingCart_C*>(UCameraShake_HitImpact_ShoppingCart_C::StaticClass()->DefaultObject);

	return Default;
}

}


