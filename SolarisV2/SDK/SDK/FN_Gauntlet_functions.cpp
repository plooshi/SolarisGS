#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Gauntlet.GauntletTestController
// (None)

class UClass* UGauntletTestController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GauntletTestController");

	return Clss;
}


// GauntletTestController Gauntlet.Default__GauntletTestController
// (Public, ClassDefaultObject, ArchetypeObject)

class UGauntletTestController* UGauntletTestController::GetDefaultObj()
{
	static class UGauntletTestController* Default = nullptr;

	if (!Default)
		Default = static_cast<UGauntletTestController*>(UGauntletTestController::StaticClass()->DefaultObject);

	return Default;
}


// Class Gauntlet.GauntletTestControllerBootTest
// (None)

class UClass* UGauntletTestControllerBootTest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GauntletTestControllerBootTest");

	return Clss;
}


// GauntletTestControllerBootTest Gauntlet.Default__GauntletTestControllerBootTest
// (Public, ClassDefaultObject, ArchetypeObject)

class UGauntletTestControllerBootTest* UGauntletTestControllerBootTest::GetDefaultObj()
{
	static class UGauntletTestControllerBootTest* Default = nullptr;

	if (!Default)
		Default = static_cast<UGauntletTestControllerBootTest*>(UGauntletTestControllerBootTest::StaticClass()->DefaultObject);

	return Default;
}


// Class Gauntlet.GauntletTestControllerErrorTest
// (None)

class UClass* UGauntletTestControllerErrorTest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GauntletTestControllerErrorTest");

	return Clss;
}


// GauntletTestControllerErrorTest Gauntlet.Default__GauntletTestControllerErrorTest
// (Public, ClassDefaultObject, ArchetypeObject)

class UGauntletTestControllerErrorTest* UGauntletTestControllerErrorTest::GetDefaultObj()
{
	static class UGauntletTestControllerErrorTest* Default = nullptr;

	if (!Default)
		Default = static_cast<UGauntletTestControllerErrorTest*>(UGauntletTestControllerErrorTest::StaticClass()->DefaultObject);

	return Default;
}

}


