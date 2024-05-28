#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CornField_GC.GE_CornField_GC_C
// (None)

class UClass* UGE_CornField_GC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CornField_GC_C");

	return Clss;
}


// GE_CornField_GC_C GE_CornField_GC.Default__GE_CornField_GC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CornField_GC_C* UGE_CornField_GC_C::GetDefaultObj()
{
	static class UGE_CornField_GC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CornField_GC_C*>(UGE_CornField_GC_C::StaticClass()->DefaultObject);

	return Default;
}

}


