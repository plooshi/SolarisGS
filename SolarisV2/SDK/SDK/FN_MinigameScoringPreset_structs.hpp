#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// UserDefinedStruct MinigameScoringPreset.MinigameScoringPreset
struct FMinigameScoringPreset
{
public:
	bool                                         SortScoreboard_6_AFC328DB4172CCE4E5742A9504D0C087; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        ScoreboardStats_7_279A843F4D5A831E0CAFE5AB87E85FB6; // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	struct FGameplayTagContainer                 UIExtensions_17_755F8B1C4DB6C595F20783A14B316AEC;  // 0x18(0x20)(Edit, BlueprintVisible)
};

}


