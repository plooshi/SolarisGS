#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_TagContainer.GET_TagContainer_C
// (None)

class UClass* UGET_TagContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_TagContainer_C");

	return Clss;
}


// GET_TagContainer_C GET_TagContainer.Default__GET_TagContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_TagContainer_C* UGET_TagContainer_C::GetDefaultObj()
{
	static class UGET_TagContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_TagContainer_C*>(UGET_TagContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


