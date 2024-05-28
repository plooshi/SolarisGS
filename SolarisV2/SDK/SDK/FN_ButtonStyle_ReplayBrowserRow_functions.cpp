#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_ReplayBrowserRow.ButtonStyle_ReplayBrowserRow_C
// (None)

class UClass* UButtonStyle_ReplayBrowserRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_ReplayBrowserRow_C");

	return Clss;
}


// ButtonStyle_ReplayBrowserRow_C ButtonStyle_ReplayBrowserRow.Default__ButtonStyle_ReplayBrowserRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_ReplayBrowserRow_C* UButtonStyle_ReplayBrowserRow_C::GetDefaultObj()
{
	static class UButtonStyle_ReplayBrowserRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_ReplayBrowserRow_C*>(UButtonStyle_ReplayBrowserRow_C::StaticClass()->DefaultObject);

	return Default;
}

}


