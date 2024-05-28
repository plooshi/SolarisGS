#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-40pc.TextStyle-Header-L-40pc_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinus40pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-40pc_C");

	return Clss;
}


// TextStyle-Header-L-40pc_C TextStyle-Header-L-40pc.Default__TextStyle-Header-L-40pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinus40pc_C* UTextStyleMinusHeaderMinusLMinus40pc_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinus40pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinus40pc_C*>(UTextStyleMinusHeaderMinusLMinus40pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


