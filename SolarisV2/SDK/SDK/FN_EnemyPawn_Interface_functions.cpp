#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyPawn_Interface.EnemyPawn_Interface_C
// (None)

class UClass* IEnemyPawn_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyPawn_Interface_C");

	return Clss;
}


// EnemyPawn_Interface_C EnemyPawn_Interface.Default__EnemyPawn_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IEnemyPawn_Interface_C* IEnemyPawn_Interface_C::GetDefaultObj()
{
	static class IEnemyPawn_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IEnemyPawn_Interface_C*>(IEnemyPawn_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnemyPawn_Interface.EnemyPawn_Interface_C.Orphaned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOrphaned                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   AttachedPawn                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IEnemyPawn_Interface_C::Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyPawn_Interface_C", "Orphaned");

	Params::IEnemyPawn_Interface_C_Orphaned_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsOrphaned != nullptr)
		*IsOrphaned = Parms.IsOrphaned;

	if (AttachedPawn != nullptr)
		*AttachedPawn = Parms.AttachedPawn;

}

}


