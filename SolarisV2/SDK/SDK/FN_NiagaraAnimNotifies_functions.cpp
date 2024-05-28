#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// (None)

class UClass* UAnimNotify_PlayNiagaraEffect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlayNiagaraEffect");

	return Clss;
}


// AnimNotify_PlayNiagaraEffect NiagaraAnimNotifies.Default__AnimNotify_PlayNiagaraEffect
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_PlayNiagaraEffect* UAnimNotify_PlayNiagaraEffect::GetDefaultObj()
{
	static class UAnimNotify_PlayNiagaraEffect* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlayNiagaraEffect*>(UAnimNotify_PlayNiagaraEffect::StaticClass()->DefaultObject);

	return Default;
}


// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// (None)

class UClass* UAnimNotifyState_TimedNiagaraEffect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_TimedNiagaraEffect");

	return Clss;
}


// AnimNotifyState_TimedNiagaraEffect NiagaraAnimNotifies.Default__AnimNotifyState_TimedNiagaraEffect
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_TimedNiagaraEffect* UAnimNotifyState_TimedNiagaraEffect::GetDefaultObj()
{
	static class UAnimNotifyState_TimedNiagaraEffect* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_TimedNiagaraEffect*>(UAnimNotifyState_TimedNiagaraEffect::StaticClass()->DefaultObject);

	return Default;
}

}


