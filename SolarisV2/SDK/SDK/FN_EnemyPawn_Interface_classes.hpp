#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass EnemyPawn_Interface.EnemyPawn_Interface_C
class IEnemyPawn_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEnemyPawn_Interface_C* GetDefaultObj();

	void Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn);
};

}


