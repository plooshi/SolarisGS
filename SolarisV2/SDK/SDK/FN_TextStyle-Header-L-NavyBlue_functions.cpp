#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-NavyBlue.TextStyle-Header-L-NavyBlue_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusNavyBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-NavyBlue_C");

	return Clss;
}


// TextStyle-Header-L-NavyBlue_C TextStyle-Header-L-NavyBlue.Default__TextStyle-Header-L-NavyBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusNavyBlue_C* UTextStyleMinusHeaderMinusLMinusNavyBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusNavyBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusNavyBlue_C*>(UTextStyleMinusHeaderMinusLMinusNavyBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


