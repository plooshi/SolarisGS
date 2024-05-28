#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemShopScreen.ItemShopScreen_C
// (None)

class UClass* UItemShopScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemShopScreen_C");

	return Clss;
}


// ItemShopScreen_C ItemShopScreen.Default__ItemShopScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemShopScreen_C* UItemShopScreen_C::GetDefaultObj()
{
	static class UItemShopScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemShopScreen_C*>(UItemShopScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


