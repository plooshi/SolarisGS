#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MeshDescription.MeshDescription
// (None)

class UClass* UMeshDescription::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshDescription");

	return Clss;
}


// MeshDescription MeshDescription.Default__MeshDescription
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshDescription* UMeshDescription::GetDefaultObj()
{
	static class UMeshDescription* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshDescription*>(UMeshDescription::StaticClass()->DefaultObject);

	return Default;
}

}


