#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShockwaveDrag.BP_ShockwaveDrag_C
// (None)

class UClass* UBP_ShockwaveDrag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShockwaveDrag_C");

	return Clss;
}


// BP_ShockwaveDrag_C BP_ShockwaveDrag.Default__BP_ShockwaveDrag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ShockwaveDrag_C* UBP_ShockwaveDrag_C::GetDefaultObj()
{
	static class UBP_ShockwaveDrag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ShockwaveDrag_C*>(UBP_ShockwaveDrag_C::StaticClass()->DefaultObject);

	return Default;
}

}


