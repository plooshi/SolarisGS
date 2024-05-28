#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-HomeBasePower-XS.TextStyle-Header-HomeBasePower-XS_C
// (None)

class UClass* UTextStyleMinusHeaderMinusHomeBasePowerMinusXS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-HomeBasePower-XS_C");

	return Clss;
}


// TextStyle-Header-HomeBasePower-XS_C TextStyle-Header-HomeBasePower-XS.Default__TextStyle-Header-HomeBasePower-XS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusHomeBasePowerMinusXS_C* UTextStyleMinusHeaderMinusHomeBasePowerMinusXS_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusHomeBasePowerMinusXS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusHomeBasePowerMinusXS_C*>(UTextStyleMinusHeaderMinusHomeBasePowerMinusXS_C::StaticClass()->DefaultObject);

	return Default;
}

}


