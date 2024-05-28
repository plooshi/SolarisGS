#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemShopCategoryTab.ItemShopCategoryTab_C
// (None)

class UClass* UItemShopCategoryTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemShopCategoryTab_C");

	return Clss;
}


// ItemShopCategoryTab_C ItemShopCategoryTab.Default__ItemShopCategoryTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemShopCategoryTab_C* UItemShopCategoryTab_C::GetDefaultObj()
{
	static class UItemShopCategoryTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemShopCategoryTab_C*>(UItemShopCategoryTab_C::StaticClass()->DefaultObject);

	return Default;
}

}


