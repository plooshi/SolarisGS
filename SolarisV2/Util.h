#pragma once
#include "Includes.h"
#include <intrin.h>

static void LOG(std::string message)
{
	std::cout << "LogSolaris: Display: " << message << "\n";
}

Holder(Engine, UEngine::GetEngine());
Holder(World, Engine->GameViewport->World);
Holder(GameMode, reinterpret_cast<AFortGameModeAthena*>(World->AuthorityGameMode));
Holder(GameState, reinterpret_cast<AFortGameStateAthena*>(World->GameState));

namespace MemoryUtils {
	void BytePatch(uint8_t* Func, int Byte)
	{
		DWORD dwProt;
		VirtualProtect((PVOID)Func, 1, PAGE_EXECUTE_READWRITE, &dwProt);

		*(uint8_t*)Func = Byte;

		//DWORD dwTemp;
		VirtualProtect((PVOID)Func, 1, dwProt, &dwProt);
	}

	void NullFunction(uint8_t *Func)
	{
		BytePatch(Func, 0xC3);
	}

	inline bool IsBadReadPtr(void* p) // twin is a skid
	{
		MEMORY_BASIC_INFORMATION mbi = { 0 };
		if (::VirtualQuery(p, &mbi, sizeof(mbi)))
		{
			DWORD mask = (PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY);
			bool b = !(mbi.Protect & mask);
			// check the page is not a guard page
			if (mbi.Protect & (PAGE_GUARD | PAGE_NOACCESS)) b = true;

			return b;
		}
		return true;
	}
}

AActor* SpawnActor(UClass* Class, FVector Loc, FRotator Rot = {}, AActor* Owner = nullptr)
{
	FTransform Transform(Loc, Rot);

	return UGameplayStatics::GetDefaultObj()->FinishSpawningActor(UGameplayStatics::GetDefaultObj()->BeginDeferredActorSpawnFromClass(World, Class, Transform, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, Owner), Transform);
}

AActor* SpawnActor(UClass* Class, FTransform Transform, AActor* Owner = nullptr)
{
	return UGameplayStatics::GetDefaultObj()->FinishSpawningActor(UGameplayStatics::GetDefaultObj()->BeginDeferredActorSpawnFromClass(World, Class, Transform, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, Owner), Transform);
}

template<typename T = AActor>
T* SpawnActorUnfinished(UClass* Class, FVector Loc, FRotator Rot = {}, AActor* Owner = nullptr)
{
	FTransform Transform(Loc, Rot);

	return (T*)UGameplayStatics::GetDefaultObj()->BeginDeferredActorSpawnFromClass(World, Class, Transform, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, Owner);
}

template<typename T = AActor>
T* FinishSpawnActor(AActor* Actor, FVector Loc, FRotator Rot)
{
	FTransform Transform(Loc, Rot);

	return (T*)UGameplayStatics::GetDefaultObj()->FinishSpawningActor(Actor, Transform);
}

template<typename T = AActor>
T* SpawnActor(UClass* Class, FVector Loc, FRotator Rot = {}, AActor* Owner = nullptr)
{
	return (T*)SpawnActor(Class, Loc, Rot, Owner);
}

template<typename T = AActor>
T* SpawnActor(UClass* Class, FTransform Transform, AActor* Owner = nullptr)
{
	return (T*)SpawnActor(Class, Transform, Owner);
}

template<typename T>
T* SpawnActor(FVector Loc, FRotator Rot = {  }, AActor* Owner = nullptr)
{
	return (T *) SpawnActor(T::StaticClass(), Loc, Rot, Owner);
}

template<typename T>
T* SpawnActor(FTransform Transform, AActor* Owner = nullptr)
{
	return (T *) SpawnActor(T::StaticClass(), Transform, Owner);
}

template <class T>
T* CastFromUClass(UObject* t) {
	return t->IsA<T>() ? (T*)t : nullptr;
}

template <class T>
T* CastFromUClass(UClass *Class, UObject* t) {
	return t->IsA(Class) ? (T*)t : nullptr;
}

template <typename T = AActor>
static TArray<T*> GetAll() {
	TArray<AActor*> ret;
	UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(World, T::StaticClass(), &ret);
	return ret;
}

template <typename T = AActor>
static TArray<T*> GetAll(UClass *Class) {
	TArray<AActor*> ret;
	UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(World, Class, &ret);
	return ret;
}