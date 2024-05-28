#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CommonUIRichTextData.CommonUIRichTextData_C
// (None)

class UClass* UCommonUIRichTextData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUIRichTextData_C");

	return Clss;
}


// CommonUIRichTextData_C CommonUIRichTextData.Default__CommonUIRichTextData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommonUIRichTextData_C* UCommonUIRichTextData_C::GetDefaultObj()
{
	static class UCommonUIRichTextData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUIRichTextData_C*>(UCommonUIRichTextData_C::StaticClass()->DefaultObject);

	return Default;
}

}


