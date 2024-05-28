#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PedestalGroup_Primary.PedestalGroup_Primary_C
// (Actor)

class UClass* APedestalGroup_Primary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PedestalGroup_Primary_C");

	return Clss;
}


// PedestalGroup_Primary_C PedestalGroup_Primary.Default__PedestalGroup_Primary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APedestalGroup_Primary_C* APedestalGroup_Primary_C::GetDefaultObj()
{
	static class APedestalGroup_Primary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APedestalGroup_Primary_C*>(APedestalGroup_Primary_C::StaticClass()->DefaultObject);

	return Default;
}

}


