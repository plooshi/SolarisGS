#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C
class IPlayerSurveyMultipleChoiceListItemWidgetInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPlayerSurveyMultipleChoiceListItemWidgetInterface_C* GetDefaultObj();

	void SetIndex(int32 Value);
	void SetChoiceData(const struct FFortPlayerSurveyQuestionChoice& Value);
};

}


