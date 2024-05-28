#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortMetaNavAreaDef.FortMetaNavAreaDef_C
// (None)

class UClass* UFortMetaNavAreaDef_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMetaNavAreaDef_C");

	return Clss;
}


// FortMetaNavAreaDef_C FortMetaNavAreaDef.Default__FortMetaNavAreaDef_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortMetaNavAreaDef_C* UFortMetaNavAreaDef_C::GetDefaultObj()
{
	static class UFortMetaNavAreaDef_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMetaNavAreaDef_C*>(UFortMetaNavAreaDef_C::StaticClass()->DefaultObject);

	return Default;
}

}


