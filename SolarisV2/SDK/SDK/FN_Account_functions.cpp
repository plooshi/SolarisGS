#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Account.ExternalAccountProvider
// (None)

class UClass* UExternalAccountProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExternalAccountProvider");

	return Clss;
}


// ExternalAccountProvider Account.Default__ExternalAccountProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UExternalAccountProvider* UExternalAccountProvider::GetDefaultObj()
{
	static class UExternalAccountProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UExternalAccountProvider*>(UExternalAccountProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class Account.OnlineAccountCommon
// (None)

class UClass* UOnlineAccountCommon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineAccountCommon");

	return Clss;
}


// OnlineAccountCommon Account.Default__OnlineAccountCommon
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineAccountCommon* UOnlineAccountCommon::GetDefaultObj()
{
	static class UOnlineAccountCommon* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineAccountCommon*>(UOnlineAccountCommon::StaticClass()->DefaultObject);

	return Default;
}


// Class Account.WaitingRoomState
// (None)

class UClass* UWaitingRoomState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaitingRoomState");

	return Clss;
}


// WaitingRoomState Account.Default__WaitingRoomState
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaitingRoomState* UWaitingRoomState::GetDefaultObj()
{
	static class UWaitingRoomState* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaitingRoomState*>(UWaitingRoomState::StaticClass()->DefaultObject);

	return Default;
}

}


