#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrapTool.TrapTool_C
// (Actor)

class UClass* ATrapTool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrapTool_C");

	return Clss;
}


// TrapTool_C TrapTool.Default__TrapTool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrapTool_C* ATrapTool_C::GetDefaultObj()
{
	static class ATrapTool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrapTool_C*>(ATrapTool_C::StaticClass()->DefaultObject);

	return Default;
}

}


