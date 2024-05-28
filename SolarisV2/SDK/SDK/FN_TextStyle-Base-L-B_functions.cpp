#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-L-B.TextStyle-Base-L-B_C
// (None)

class UClass* UTextStyleMinusBaseMinusLMinusB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-L-B_C");

	return Clss;
}


// TextStyle-Base-L-B_C TextStyle-Base-L-B.Default__TextStyle-Base-L-B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusLMinusB_C* UTextStyleMinusBaseMinusLMinusB_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusLMinusB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusLMinusB_C*>(UTextStyleMinusBaseMinusLMinusB_C::StaticClass()->DefaultObject);

	return Default;
}

}


