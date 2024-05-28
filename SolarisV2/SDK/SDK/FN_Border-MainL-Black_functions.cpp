#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-MainL-Black.Border-MainL-Black_C
// (None)

class UClass* UBorderMinusMainLMinusBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-MainL-Black_C");

	return Clss;
}


// Border-MainL-Black_C Border-MainL-Black.Default__Border-MainL-Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusMainLMinusBlack_C* UBorderMinusMainLMinusBlack_C::GetDefaultObj()
{
	static class UBorderMinusMainLMinusBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusMainLMinusBlack_C*>(UBorderMinusMainLMinusBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


