#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-20pc.TextStyle-Header-L-20pc_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinus20pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-20pc_C");

	return Clss;
}


// TextStyle-Header-L-20pc_C TextStyle-Header-L-20pc.Default__TextStyle-Header-L-20pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinus20pc_C* UTextStyleMinusHeaderMinusLMinus20pc_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinus20pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinus20pc_C*>(UTextStyleMinusHeaderMinusLMinus20pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


