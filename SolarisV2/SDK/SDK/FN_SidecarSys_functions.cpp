#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SidecarSys.SidecarSys
// (None)

class UClass* USidecarSys::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidecarSys");

	return Clss;
}


// SidecarSys SidecarSys.Default__SidecarSys
// (Public, ClassDefaultObject, ArchetypeObject)

class USidecarSys* USidecarSys::GetDefaultObj()
{
	static class USidecarSys* Default = nullptr;

	if (!Default)
		Default = static_cast<USidecarSys*>(USidecarSys::StaticClass()->DefaultObject);

	return Default;
}

}


