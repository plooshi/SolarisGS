#pragma once

void (*PostInitializeComponentsOG)(AFortPoiVolume* vol);
void PostInitializeComponents(AFortPoiVolume* vol) {
	((void (*)(AFortPoiVolume*)) (BaseAddress + 0x2db5620))(vol); // Super::PostInitializeComponents
}
namespace Hooks
{
	bool ReturnTrue() { return true; }

	void HookAll()
	{
		CREATEHOOK(BaseAddress + 0x3441ce0, GetNetModeWorld, nullptr);
		CREATEHOOK(BaseAddress + 0x18370a0, ReturnTrue, nullptr); // Validation
		CREATEHOOK(BaseAddress + 0x8fb530, ReturnTrue, nullptr); // CanActivateAbility
		CREATEHOOK(BaseAddress + 0x33f2e60, GetMaxTickrateHook, &GetMaxTickrateOG);
		CREATEHOOK(BaseAddress + 0x315fc80, TickFlushHook, &TickFlush);
		CREATEHOOK(BaseAddress + 0x128d4b0, PostInitializeComponents, &PostInitializeComponentsOG);

		GM::HookAll();
		Player::HookAll();
		Abilites::HookAll();
		Inventory::HookAll();
		Vehicles::HookAll();
		Building::HookAll();
		Looting::HookAll();

		MemoryUtils::NullFunction(BaseAddress + 0x2c0cae0); // Widget Class
		MemoryUtils::NullFunction(BaseAddress + 0x159bf30); // changegamesession
		MemoryUtils::NullFunction(BaseAddress + 0x21f6900); // collect garbage
		MemoryUtils::BytePatch(BaseAddress + 0x344472a, 0x74); // fix InvalidParams, jg -> je

		MH_EnableHook(MH_ALL_HOOKS);
	}

	void LoadTerrain() {
		*(bool*)(BaseAddress + 0x61bbd9b) = false; // GIsClient
		World->OwningGameInstance->LocalPlayers.Remove(0);
		UKismetSystemLibrary::GetDefaultObj()->ExecuteConsoleCommand(World, L"open Athena_Terrain", nullptr);
	}
}