#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Crashlytics.CrashlyticsBlueprintLibrary
class UCrashlyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCrashlyticsBlueprintLibrary* GetDefaultObj();

	void SetUserName(const class FString& Name);
	void SetUserIdentifier(const class FString& ID);
	void SetUserEmail(const class FString& Email);
	void SetStringKey(const class FString& Key, const class FString& Value);
	void SetIntegerKey(const class FString& Key, int32 Value);
	void SetFloatKey(const class FString& Key, float Value);
	void SetBooleanKey(const class FString& Key, bool Value);
	void LogMessage(const class FString& MESSAGE);
	void LogException(const class FString& MESSAGE);
};

}


