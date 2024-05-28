#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortMetaNavWallAreaDef.FortMetaNavWallAreaDef_C
// (None)

class UClass* UFortMetaNavWallAreaDef_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMetaNavWallAreaDef_C");

	return Clss;
}


// FortMetaNavWallAreaDef_C FortMetaNavWallAreaDef.Default__FortMetaNavWallAreaDef_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortMetaNavWallAreaDef_C* UFortMetaNavWallAreaDef_C::GetDefaultObj()
{
	static class UFortMetaNavWallAreaDef_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMetaNavWallAreaDef_C*>(UFortMetaNavWallAreaDef_C::StaticClass()->DefaultObject);

	return Default;
}

}


