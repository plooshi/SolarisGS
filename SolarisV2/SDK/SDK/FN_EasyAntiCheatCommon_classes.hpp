#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xE0 - 0xD8)
// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
class UEasyAntiCheatNetComponent : public UActorComponent
{
public:
	uint8                                        Pad_5AB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEasyAntiCheatNetComponent* GetDefaultObj();

	void ServerMessage(TArray<uint8>& MESSAGE);
	void ClientMessage(TArray<uint8>& MESSAGE);
};

}


