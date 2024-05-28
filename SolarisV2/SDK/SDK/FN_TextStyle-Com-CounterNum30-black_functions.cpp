#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Com-CounterNum30-black.TextStyle-Com-CounterNum30-black_C
// (None)

class UClass* UTextStyleMinusComMinusCounterNum30Minusblack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Com-CounterNum30-black_C");

	return Clss;
}


// TextStyle-Com-CounterNum30-black_C TextStyle-Com-CounterNum30-black.Default__TextStyle-Com-CounterNum30-black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusComMinusCounterNum30Minusblack_C* UTextStyleMinusComMinusCounterNum30Minusblack_C::GetDefaultObj()
{
	static class UTextStyleMinusComMinusCounterNum30Minusblack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusComMinusCounterNum30Minusblack_C*>(UTextStyleMinusComMinusCounterNum30Minusblack_C::StaticClass()->DefaultObject);

	return Default;
}

}


