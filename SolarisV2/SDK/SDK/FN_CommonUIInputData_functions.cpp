#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CommonUIInputData.CommonUIInputData_C
// (None)

class UClass* UCommonUIInputData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUIInputData_C");

	return Clss;
}


// CommonUIInputData_C CommonUIInputData.Default__CommonUIInputData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommonUIInputData_C* UCommonUIInputData_C::GetDefaultObj()
{
	static class UCommonUIInputData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUIInputData_C*>(UCommonUIInputData_C::StaticClass()->DefaultObject);

	return Default;
}

}


