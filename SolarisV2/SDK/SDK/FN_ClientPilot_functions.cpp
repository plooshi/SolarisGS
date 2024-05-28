#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ClientPilot.ClientPilotComponent
// (None)

class UClass* UClientPilotComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClientPilotComponent");

	return Clss;
}


// ClientPilotComponent ClientPilot.Default__ClientPilotComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UClientPilotComponent* UClientPilotComponent::GetDefaultObj()
{
	static class UClientPilotComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UClientPilotComponent*>(UClientPilotComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ClientPilot.ClientPilotBlackboard
// (None)

class UClass* UClientPilotBlackboard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClientPilotBlackboard");

	return Clss;
}


// ClientPilotBlackboard ClientPilot.Default__ClientPilotBlackboard
// (Public, ClassDefaultObject, ArchetypeObject)

class UClientPilotBlackboard* UClientPilotBlackboard::GetDefaultObj()
{
	static class UClientPilotBlackboard* Default = nullptr;

	if (!Default)
		Default = static_cast<UClientPilotBlackboard*>(UClientPilotBlackboard::StaticClass()->DefaultObject);

	return Default;
}


// Class ClientPilot.ClientPilotBlackboardManager
// (None)

class UClass* UClientPilotBlackboardManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClientPilotBlackboardManager");

	return Clss;
}


// ClientPilotBlackboardManager ClientPilot.Default__ClientPilotBlackboardManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UClientPilotBlackboardManager* UClientPilotBlackboardManager::GetDefaultObj()
{
	static class UClientPilotBlackboardManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UClientPilotBlackboardManager*>(UClientPilotBlackboardManager::StaticClass()->DefaultObject);

	return Default;
}

}


