#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-70pc.TextStyle-Header-L-70pc_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinus70pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-70pc_C");

	return Clss;
}


// TextStyle-Header-L-70pc_C TextStyle-Header-L-70pc.Default__TextStyle-Header-L-70pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinus70pc_C* UTextStyleMinusHeaderMinusLMinus70pc_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinus70pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinus70pc_C*>(UTextStyleMinusHeaderMinusLMinus70pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


