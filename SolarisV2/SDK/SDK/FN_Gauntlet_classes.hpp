#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class Gauntlet.GauntletTestController
class UGauntletTestController : public UObject
{
public:
	uint8                                        Pad_85C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGauntletTestController* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class Gauntlet.GauntletTestControllerBootTest
class UGauntletTestControllerBootTest : public UGauntletTestController
{
public:

	static class UClass* StaticClass();
	static class UGauntletTestControllerBootTest* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class Gauntlet.GauntletTestControllerErrorTest
class UGauntletTestControllerErrorTest : public UGauntletTestController
{
public:
	uint8                                        Pad_866[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGauntletTestControllerErrorTest* GetDefaultObj();

};

}


