#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CMSLobbyDirector.CMSLobbyDirector_C
// (Actor)

class UClass* ACMSLobbyDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CMSLobbyDirector_C");

	return Clss;
}


// CMSLobbyDirector_C CMSLobbyDirector.Default__CMSLobbyDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACMSLobbyDirector_C* ACMSLobbyDirector_C::GetDefaultObj()
{
	static class ACMSLobbyDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACMSLobbyDirector_C*>(ACMSLobbyDirector_C::StaticClass()->DefaultObject);

	return Default;
}

}


