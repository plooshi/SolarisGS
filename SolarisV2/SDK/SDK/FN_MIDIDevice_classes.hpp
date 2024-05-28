#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x60 - 0x28)
// Class MIDIDevice.MIDIDeviceController
class UMIDIDeviceController : public UObject
{
public:
	UMulticastInlineDelegateProperty_            OnMIDIEvent;                                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        DeviceID;                                          // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A37[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DeviceName;                                        // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A38[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMIDIDeviceController* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class MIDIDevice.MIDIDeviceInputController
class UMIDIDeviceInputController : public UObject
{
public:
	UMulticastInlineDelegateProperty_            OnMIDINoteOn;                                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnMIDINoteOff;                                     // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnMIDIPitchBend;                                   // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnMIDIAftertouch;                                  // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnMIDIControlChange;                               // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnMIDIProgramChange;                               // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnMIDIChannelAftertouch;                           // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        DeviceID;                                          // 0x98(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A3B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DeviceName;                                        // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A3C[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMIDIDeviceInputController* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MIDIDevice.MIDIDeviceManager
class UMIDIDeviceManager : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMIDIDeviceManager* GetDefaultObj();

	void GetMIDIOutputDeviceIDByName(const class FString& DeviceName, int32* DeviceID);
	void GetMIDIInputDeviceIDByName(const class FString& DeviceName, int32* DeviceID);
	void GetDefaultIMIDIOutputDeviceID(int32* DeviceID);
	void GetDefaultIMIDIInputDeviceID(int32* DeviceID);
	void FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices);
	void FindAllMIDIDeviceInfo(TArray<struct FMIDIDeviceInfo>* OutMIDIInputDevices, TArray<struct FMIDIDeviceInfo>* OutMIDIOutputDevices);
	class UMIDIDeviceOutputController* CreateMIDIDeviceOutputController(int32 DeviceID);
	class UMIDIDeviceInputController* CreateMIDIDeviceInputController(int32 DeviceID, int32 MIDIBufferSize);
	class UMIDIDeviceController* CreateMIDIDeviceController(int32 DeviceID, int32 MIDIBufferSize);
};

// 0x20 (0x48 - 0x28)
// Class MIDIDevice.MIDIDeviceOutputController
class UMIDIDeviceOutputController : public UObject
{
public:
	int32                                        DeviceID;                                          // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A73[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DeviceName;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A74[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMIDIDeviceOutputController* GetDefaultObj();

	void SendMIDIProgramChange(int32 Channel, int32 ProgramNumber);
	void SendMIDIPitchBend(int32 Channel, int32 Pitch);
	void SendMIDINoteOn(int32 Channel, int32 Note, int32 Velocity);
	void SendMIDINoteOff(int32 Channel, int32 Note, int32 Velocity);
	void SendMIDINoteAftertouch(int32 Channel, int32 Note, float Amount);
	void SendMIDIEvent(enum class EMIDIEventType EventType, int32 Channel, int32 Data1, int32 Data2);
	void SendMIDIControlChange(int32 Channel, int32 Type, int32 Value);
	void SendMIDIChannelAftertouch(int32 Channel, float Amount);
};

}


