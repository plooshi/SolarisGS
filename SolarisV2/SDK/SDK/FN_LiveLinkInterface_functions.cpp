#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveLinkInterface.LiveLinkSourceSettings
// (None)

class UClass* ULiveLinkSourceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkSourceSettings");

	return Clss;
}


// LiveLinkSourceSettings LiveLinkInterface.Default__LiveLinkSourceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkSourceSettings* ULiveLinkSourceSettings::GetDefaultObj()
{
	static class ULiveLinkSourceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkSourceSettings*>(ULiveLinkSourceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// (None)

class UClass* ULiveLinkCurveRemapSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkCurveRemapSettings");

	return Clss;
}


// LiveLinkCurveRemapSettings LiveLinkInterface.Default__LiveLinkCurveRemapSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkCurveRemapSettings* ULiveLinkCurveRemapSettings::GetDefaultObj()
{
	static class ULiveLinkCurveRemapSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkCurveRemapSettings*>(ULiveLinkCurveRemapSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkInterface.LiveLinkSourceFactory
// (None)

class UClass* ULiveLinkSourceFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkSourceFactory");

	return Clss;
}


// LiveLinkSourceFactory LiveLinkInterface.Default__LiveLinkSourceFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkSourceFactory* ULiveLinkSourceFactory::GetDefaultObj()
{
	static class ULiveLinkSourceFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkSourceFactory*>(ULiveLinkSourceFactory::StaticClass()->DefaultObject);

	return Default;
}

}


