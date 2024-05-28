#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XS.TextStyle-Header-XS_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XS_C");

	return Clss;
}


// TextStyle-Header-XS_C TextStyle-Header-XS.Default__TextStyle-Header-XS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXS_C* UTextStyleMinusHeaderMinusXS_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXS_C*>(UTextStyleMinusHeaderMinusXS_C::StaticClass()->DefaultObject);

	return Default;
}

}


