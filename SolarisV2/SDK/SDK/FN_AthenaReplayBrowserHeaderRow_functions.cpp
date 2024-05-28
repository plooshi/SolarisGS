#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaReplayBrowserHeaderRow.AthenaReplayBrowserHeaderRow_C
// (None)

class UClass* UAthenaReplayBrowserHeaderRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaReplayBrowserHeaderRow_C");

	return Clss;
}


// AthenaReplayBrowserHeaderRow_C AthenaReplayBrowserHeaderRow.Default__AthenaReplayBrowserHeaderRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaReplayBrowserHeaderRow_C* UAthenaReplayBrowserHeaderRow_C::GetDefaultObj()
{
	static class UAthenaReplayBrowserHeaderRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaReplayBrowserHeaderRow_C*>(UAthenaReplayBrowserHeaderRow_C::StaticClass()->DefaultObject);

	return Default;
}

}


