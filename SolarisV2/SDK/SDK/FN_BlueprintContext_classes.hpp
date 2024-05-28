#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// Class BlueprintContext.BlueprintContextBase
class UBlueprintContextBase : public USubsystem
{
public:

	static class UClass* StaticClass();
	static class UBlueprintContextBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class BlueprintContext.BlueprintContextLibrary
class UBlueprintContextLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBlueprintContextLibrary* GetDefaultObj();

	class USubsystem* GetContext(class UObject* ContextObject, TSubclassOf<class USubsystem> Class);
};

}


