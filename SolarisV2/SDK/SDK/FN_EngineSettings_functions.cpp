#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EngineSettings.ConsoleSettings
// (None)

class UClass* UConsoleSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConsoleSettings");

	return Clss;
}


// ConsoleSettings EngineSettings.Default__ConsoleSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UConsoleSettings* UConsoleSettings::GetDefaultObj()
{
	static class UConsoleSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UConsoleSettings*>(UConsoleSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class EngineSettings.GameMapsSettings
// (None)

class UClass* UGameMapsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameMapsSettings");

	return Clss;
}


// GameMapsSettings EngineSettings.Default__GameMapsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameMapsSettings* UGameMapsSettings::GetDefaultObj()
{
	static class UGameMapsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameMapsSettings*>(UGameMapsSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class EngineSettings.GameNetworkManagerSettings
// (None)

class UClass* UGameNetworkManagerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameNetworkManagerSettings");

	return Clss;
}


// GameNetworkManagerSettings EngineSettings.Default__GameNetworkManagerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameNetworkManagerSettings* UGameNetworkManagerSettings::GetDefaultObj()
{
	static class UGameNetworkManagerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameNetworkManagerSettings*>(UGameNetworkManagerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class EngineSettings.GameSessionSettings
// (None)

class UClass* UGameSessionSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSessionSettings");

	return Clss;
}


// GameSessionSettings EngineSettings.Default__GameSessionSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSessionSettings* UGameSessionSettings::GetDefaultObj()
{
	static class UGameSessionSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSessionSettings*>(UGameSessionSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class EngineSettings.GeneralEngineSettings
// (None)

class UClass* UGeneralEngineSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeneralEngineSettings");

	return Clss;
}


// GeneralEngineSettings EngineSettings.Default__GeneralEngineSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeneralEngineSettings* UGeneralEngineSettings::GetDefaultObj()
{
	static class UGeneralEngineSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeneralEngineSettings*>(UGeneralEngineSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class EngineSettings.GeneralProjectSettings
// (None)

class UClass* UGeneralProjectSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeneralProjectSettings");

	return Clss;
}


// GeneralProjectSettings EngineSettings.Default__GeneralProjectSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeneralProjectSettings* UGeneralProjectSettings::GetDefaultObj()
{
	static class UGeneralProjectSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeneralProjectSettings*>(UGeneralProjectSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class EngineSettings.HudSettings
// (None)

class UClass* UHudSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HudSettings");

	return Clss;
}


// HudSettings EngineSettings.Default__HudSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UHudSettings* UHudSettings::GetDefaultObj()
{
	static class UHudSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UHudSettings*>(UHudSettings::StaticClass()->DefaultObject);

	return Default;
}

}


