#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xD0 - 0x28)
// Class ScreenCapture.ScreenCaptureContext
class UScreenCaptureContext : public UObject
{
public:
	UMulticastInlineDelegateProperty_            OnCaptureFinishedDelegate;                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnCaptureInterruptedDelegate;                      // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnVideoSavedToAlbumDelegate;                       // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnScreenshotCapturedDelegate;                      // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_AED[0x58];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            PreviewImage;                                      // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AEE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UScreenCaptureContext* GetDefaultObj();

	void ToggleMicrophoneRecording(bool bEnableMicrophone);
	void TakeScreenshot();
	void StopCapture(bool bIsCaptureInterrupted);
	void StartCapture(bool bInRecordAppAudio, bool bGeneratePreviewImage);
	bool SaveToAlbum(const class FString& LocalFilePath);
	bool RemoveFile(const class FString& LocalFilePath);
	bool IsRecording();
	class UScreenCaptureContext* CreateScreenCaptureContext(class UObject* WorldContextObject);
};

}


