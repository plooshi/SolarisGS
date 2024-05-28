#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x190 - 0x190)
// BlueprintGeneratedClass MinigameStat_PlayerLivesLeft.MinigameStat_PlayerLivesLeft_C
class UMinigameStat_PlayerLivesLeft_C : public UFortMinigameStatFilter
{
public:

	static class UClass* StaticClass();
	static class UMinigameStat_PlayerLivesLeft_C* GetDefaultObj();

	int32 Compare(int32 FirstScore, int32 SecondScore, int32 CallFunc_Subtract_IntInt_ReturnValue);
};

}


