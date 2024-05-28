#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C
class IMissionObjectiveWidgetProviderInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMissionObjectiveWidgetProviderInterface_C* GetDefaultObj();

	void GetObjectiveBulletIcon(struct FSlateBrush* BulletIcon);
};

}


