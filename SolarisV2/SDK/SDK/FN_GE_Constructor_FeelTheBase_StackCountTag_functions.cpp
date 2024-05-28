#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Constructor_FeelTheBase_StackCountTag.GE_Constructor_FeelTheBase_StackCountTag_C
// (None)

class UClass* UGE_Constructor_FeelTheBase_StackCountTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Constructor_FeelTheBase_StackCountTag_C");

	return Clss;
}


// GE_Constructor_FeelTheBase_StackCountTag_C GE_Constructor_FeelTheBase_StackCountTag.Default__GE_Constructor_FeelTheBase_StackCountTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Constructor_FeelTheBase_StackCountTag_C* UGE_Constructor_FeelTheBase_StackCountTag_C::GetDefaultObj()
{
	static class UGE_Constructor_FeelTheBase_StackCountTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Constructor_FeelTheBase_StackCountTag_C*>(UGE_Constructor_FeelTheBase_StackCountTag_C::StaticClass()->DefaultObject);

	return Default;
}

}


