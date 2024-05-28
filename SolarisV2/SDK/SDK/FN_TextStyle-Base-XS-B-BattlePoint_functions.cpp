#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-BattlePoint.TextStyle-Base-XS-B-BattlePoint_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusBattlePoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-BattlePoint_C");

	return Clss;
}


// TextStyle-Base-XS-B-BattlePoint_C TextStyle-Base-XS-B-BattlePoint.Default__TextStyle-Base-XS-B-BattlePoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusBattlePoint_C* UTextStyleMinusBaseMinusXSMinusBMinusBattlePoint_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusBattlePoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusBattlePoint_C*>(UTextStyleMinusBaseMinusXSMinusBMinusBattlePoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


