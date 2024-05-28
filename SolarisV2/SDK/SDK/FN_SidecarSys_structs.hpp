#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// ScriptStruct SidecarSys.SidecarFileInfo
struct FSidecarFileInfo
{
public:
	TMap<class FString, class FString>           Meta;                                              // 0x0(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsCheckedOut;                                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOperationPending;                                 // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A26[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CheckoutGuid;                                      // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


