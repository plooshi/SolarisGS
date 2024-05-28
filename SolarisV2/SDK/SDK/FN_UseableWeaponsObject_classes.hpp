#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass UseableWeaponsObject.UseableWeaponsObject_C
class UUseableWeaponsObject_C : public UObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<TSoftClassPtr<class AStoreWeaponMaster_BP_C>> UseableWeaponsArray;                               // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUseableWeaponsObject_C* GetDefaultObj();

	void ExecuteUbergraph_UseableWeaponsObject(int32 EntryPoint);
};

}


