#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-S.TextStyle-Header-S_C
// (None)

class UClass* UTextStyleMinusHeaderMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-S_C");

	return Clss;
}


// TextStyle-Header-S_C TextStyle-Header-S.Default__TextStyle-Header-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusS_C* UTextStyleMinusHeaderMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusS_C*>(UTextStyleMinusHeaderMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


