#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class DriftKairosJSBridge.DriftKairosCommonJSBridge
class UDriftKairosCommonJSBridge : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDriftKairosCommonJSBridge* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class DriftKairosJSBridge.DanceChallengesJSBridge
class UDanceChallengesJSBridge : public UDriftKairosCommonJSBridge
{
public:
	uint8                                        Pad_231[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDanceChallengesJSBridge* GetDefaultObj();

	void GetDanceChallenges(const struct FWebJSResponse& Response);
};

}


