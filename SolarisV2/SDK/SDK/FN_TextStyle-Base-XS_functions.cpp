#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS.TextStyle-Base-XS_C
// (None)

class UClass* UTextStyleMinusBaseMinusXS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS_C");

	return Clss;
}


// TextStyle-Base-XS_C TextStyle-Base-XS.Default__TextStyle-Base-XS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXS_C* UTextStyleMinusBaseMinusXS_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXS_C*>(UTextStyleMinusBaseMinusXS_C::StaticClass()->DefaultObject);

	return Default;
}

}


