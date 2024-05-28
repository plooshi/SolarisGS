#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CMS_ML_TopImageWidget.CMS_ML_TopImageWidget_C
// (None)

class UClass* UCMS_ML_TopImageWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CMS_ML_TopImageWidget_C");

	return Clss;
}


// CMS_ML_TopImageWidget_C CMS_ML_TopImageWidget.Default__CMS_ML_TopImageWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCMS_ML_TopImageWidget_C* UCMS_ML_TopImageWidget_C::GetDefaultObj()
{
	static class UCMS_ML_TopImageWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCMS_ML_TopImageWidget_C*>(UCMS_ML_TopImageWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


