#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DecoTool.DecoTool_C
// (Actor)

class UClass* ADecoTool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DecoTool_C");

	return Clss;
}


// DecoTool_C DecoTool.Default__DecoTool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADecoTool_C* ADecoTool_C::GetDefaultObj()
{
	static class ADecoTool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADecoTool_C*>(ADecoTool_C::StaticClass()->DefaultObject);

	return Default;
}

}


