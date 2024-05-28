#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SocialUMG.SocialChatChannelTab
// (None)

class UClass* USocialChatChannelTab::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialChatChannelTab");

	return Clss;
}


// SocialChatChannelTab SocialUMG.Default__SocialChatChannelTab
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialChatChannelTab* USocialChatChannelTab::GetDefaultObj()
{
	static class USocialChatChannelTab* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialChatChannelTab*>(USocialChatChannelTab::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialChatContainer
// (None)

class UClass* USocialChatContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialChatContainer");

	return Clss;
}


// SocialChatContainer SocialUMG.Default__SocialChatContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialChatContainer* USocialChatContainer::GetDefaultObj()
{
	static class USocialChatContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialChatContainer*>(USocialChatContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialUMG.SocialChatContainer.SendCurrentMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USocialChatContainer::SendCurrentMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatContainer", "SendCurrentMessage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SocialUMG.SocialChatContainer.OnChatOpenChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShouldBeOpen                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialChatContainer::OnChatOpenChanged(bool bShouldBeOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatContainer", "OnChatOpenChanged");

	Params::USocialChatContainer_OnChatOpenChanged_Params Parms{};

	Parms.bShouldBeOpen = bShouldBeOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialUMG.SocialChatContainer.HandleRightTabPressed
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USocialChatContainer::HandleRightTabPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatContainer", "HandleRightTabPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SocialUMG.SocialChatContainer.HandleLeftTabPressed
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USocialChatContainer::HandleLeftTabPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatContainer", "HandleLeftTabPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SocialUMG.SocialChatContainer.FocusEditableText
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USocialChatContainer::FocusEditableText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatContainer", "FocusEditableText");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SocialUMG.SocialChatContainer.DynamicHandleMessageTextCommitted
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                        MessageText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialChatContainer::DynamicHandleMessageTextCommitted(class FText& MessageText, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatContainer", "DynamicHandleMessageTextCommitted");

	Params::USocialChatContainer_DynamicHandleMessageTextCommitted_Params Parms{};

	Parms.MessageText = MessageText;
	Parms.CommitMethod = CommitMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SocialUMG.SocialChatEditableText
// (None)

class UClass* USocialChatEditableText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialChatEditableText");

	return Clss;
}


// SocialChatEditableText SocialUMG.Default__SocialChatEditableText
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialChatEditableText* USocialChatEditableText::GetDefaultObj()
{
	static class USocialChatEditableText* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialChatEditableText*>(USocialChatEditableText::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialChatMessageEntry
// (None)

class UClass* USocialChatMessageEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialChatMessageEntry");

	return Clss;
}


// SocialChatMessageEntry SocialUMG.Default__SocialChatMessageEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialChatMessageEntry* USocialChatMessageEntry::GetDefaultObj()
{
	static class USocialChatMessageEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialChatMessageEntry*>(USocialChatMessageEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialUMG.SocialChatMessageEntry.OnMessageSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialChatMessageEntry::OnMessageSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatMessageEntry", "OnMessageSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialUMG.SocialChatMessageEntry.CanInteract
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USocialChatMessageEntry::CanInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatMessageEntry", "CanInteract");

	Params::USocialChatMessageEntry_CanInteract_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SocialUMG.SocialChatMessageList
// (None)

class UClass* USocialChatMessageList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialChatMessageList");

	return Clss;
}


// SocialChatMessageList SocialUMG.Default__SocialChatMessageList
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialChatMessageList* USocialChatMessageList::GetDefaultObj()
{
	static class USocialChatMessageList* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialChatMessageList*>(USocialChatMessageList::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialGroupListEntry
// (None)

class UClass* USocialGroupListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialGroupListEntry");

	return Clss;
}


// SocialGroupListEntry SocialUMG.Default__SocialGroupListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialGroupListEntry* USocialGroupListEntry::GetDefaultObj()
{
	static class USocialGroupListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialGroupListEntry*>(USocialGroupListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialUMG.SocialGroupListEntry.HandleGetMenuContent
// (Final, Native, Protected)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialGroupListEntry::HandleGetMenuContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialGroupListEntry", "HandleGetMenuContent");

	Params::USocialGroupListEntry_HandleGetMenuContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SocialUMG.SocialGroupTreeView
// (None)

class UClass* USocialGroupTreeView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialGroupTreeView");

	return Clss;
}


// SocialGroupTreeView SocialUMG.Default__SocialGroupTreeView
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialGroupTreeView* USocialGroupTreeView::GetDefaultObj()
{
	static class USocialGroupTreeView* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialGroupTreeView*>(USocialGroupTreeView::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialInteractionButton
// (None)

class UClass* USocialInteractionButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialInteractionButton");

	return Clss;
}


// SocialInteractionButton SocialUMG.Default__SocialInteractionButton
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialInteractionButton* USocialInteractionButton::GetDefaultObj()
{
	static class USocialInteractionButton* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialInteractionButton*>(USocialInteractionButton::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialUMG.SocialInteractionButton.OnInteractionSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialInteractionButton::OnInteractionSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteractionButton", "OnInteractionSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialUMG.SocialInteractionButton.IsPlatformOnlyFriend
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USocialInteractionButton::IsPlatformOnlyFriend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteractionButton", "IsPlatformOnlyFriend");

	Params::USocialInteractionButton_IsPlatformOnlyFriend_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SocialUMG.SocialInteractionButton.GetInteractionName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USocialInteractionButton::GetInteractionName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteractionButton", "GetInteractionName");

	Params::USocialInteractionButton_GetInteractionName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SocialUMG.SocialInteractionMenu
// (None)

class UClass* USocialInteractionMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialInteractionMenu");

	return Clss;
}


// SocialInteractionMenu SocialUMG.Default__SocialInteractionMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialInteractionMenu* USocialInteractionMenu::GetDefaultObj()
{
	static class USocialInteractionMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialInteractionMenu*>(USocialInteractionMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialUMG.SocialInteractionMenu.OnToggleConfirmation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsVisible                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialInteractionMenu::OnToggleConfirmation(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteractionMenu", "OnToggleConfirmation");

	Params::USocialInteractionMenu_OnToggleConfirmation_Params Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialUMG.SocialInteractionMenu.OnSocialContextSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialInteractionMenu::OnSocialContextSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteractionMenu", "OnSocialContextSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialUMG.SocialInteractionMenu.GetFirstEntryToCenter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialInteractionMenu::GetFirstEntryToCenter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteractionMenu", "GetFirstEntryToCenter");

	Params::USocialInteractionMenu_GetFirstEntryToCenter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SocialUMG.DesignerPreviewChatChannel
// (None)

class UClass* UDesignerPreviewChatChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DesignerPreviewChatChannel");

	return Clss;
}


// DesignerPreviewChatChannel SocialUMG.Default__DesignerPreviewChatChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UDesignerPreviewChatChannel* UDesignerPreviewChatChannel::GetDefaultObj()
{
	static class UDesignerPreviewChatChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UDesignerPreviewChatChannel*>(UDesignerPreviewChatChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialListEntry
// (None)

class UClass* USocialListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialListEntry");

	return Clss;
}


// SocialListEntry SocialUMG.Default__SocialListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialListEntry* USocialListEntry::GetDefaultObj()
{
	static class USocialListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialListEntry*>(USocialListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialUMG.SocialListEntry.HandleGetMenuContent
// (Final, Native, Protected)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialListEntry::HandleGetMenuContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialListEntry", "HandleGetMenuContent");

	Params::USocialListEntry_HandleGetMenuContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SocialUMG.SocialUserListEntry
// (None)

class UClass* USocialUserListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialUserListEntry");

	return Clss;
}


// SocialUserListEntry SocialUMG.Default__SocialUserListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialUserListEntry* USocialUserListEntry::GetDefaultObj()
{
	static class USocialUserListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialUserListEntry*>(USocialUserListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialUMG.SocialUserListEntry.OnUserPresenceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EOnlineStatus           OnlineStatus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialUserListEntry::OnUserPresenceChanged(enum class EOnlineStatus OnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialUserListEntry", "OnUserPresenceChanged");

	Params::USocialUserListEntry_OnUserPresenceChanged_Params Parms{};

	Parms.OnlineStatus = OnlineStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SocialUMG.SocialInviteListEntry
// (None)

class UClass* USocialInviteListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialInviteListEntry");

	return Clss;
}


// SocialInviteListEntry SocialUMG.Default__SocialInviteListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialInviteListEntry* USocialInviteListEntry::GetDefaultObj()
{
	static class USocialInviteListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialInviteListEntry*>(USocialInviteListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialActionItem
// (None)

class UClass* USocialActionItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialActionItem");

	return Clss;
}


// SocialActionItem SocialUMG.Default__SocialActionItem
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialActionItem* USocialActionItem::GetDefaultObj()
{
	static class USocialActionItem* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialActionItem*>(USocialActionItem::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialFriendInvite
// (None)

class UClass* USocialFriendInvite::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialFriendInvite");

	return Clss;
}


// SocialFriendInvite SocialUMG.Default__SocialFriendInvite
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialFriendInvite* USocialFriendInvite::GetDefaultObj()
{
	static class USocialFriendInvite* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialFriendInvite*>(USocialFriendInvite::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialPartyInvite
// (None)

class UClass* USocialPartyInvite::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialPartyInvite");

	return Clss;
}


// SocialPartyInvite SocialUMG.Default__SocialPartyInvite
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialPartyInvite* USocialPartyInvite::GetDefaultObj()
{
	static class USocialPartyInvite* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialPartyInvite*>(USocialPartyInvite::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialUserListHeader
// (None)

class UClass* USocialUserListHeader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialUserListHeader");

	return Clss;
}


// SocialUserListHeader SocialUMG.Default__SocialUserListHeader
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialUserListHeader* USocialUserListHeader::GetDefaultObj()
{
	static class USocialUserListHeader* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialUserListHeader*>(USocialUserListHeader::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialFriendInviteListHeader
// (None)

class UClass* USocialFriendInviteListHeader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialFriendInviteListHeader");

	return Clss;
}


// SocialFriendInviteListHeader SocialUMG.Default__SocialFriendInviteListHeader
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialFriendInviteListHeader* USocialFriendInviteListHeader::GetDefaultObj()
{
	static class USocialFriendInviteListHeader* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialFriendInviteListHeader*>(USocialFriendInviteListHeader::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialPartyInviteListHeader
// (None)

class UClass* USocialPartyInviteListHeader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialPartyInviteListHeader");

	return Clss;
}


// SocialPartyInviteListHeader SocialUMG.Default__SocialPartyInviteListHeader
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialPartyInviteListHeader* USocialPartyInviteListHeader::GetDefaultObj()
{
	static class USocialPartyInviteListHeader* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialPartyInviteListHeader*>(USocialPartyInviteListHeader::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialUserListHeaderEntry
// (None)

class UClass* USocialUserListHeaderEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialUserListHeaderEntry");

	return Clss;
}


// SocialUserListHeaderEntry SocialUMG.Default__SocialUserListHeaderEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialUserListHeaderEntry* USocialUserListHeaderEntry::GetDefaultObj()
{
	static class USocialUserListHeaderEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialUserListHeaderEntry*>(USocialUserListHeaderEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialUserTreeView
// (None)

class UClass* USocialUserTreeView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialUserTreeView");

	return Clss;
}


// SocialUserTreeView SocialUMG.Default__SocialUserTreeView
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialUserTreeView* USocialUserTreeView::GetDefaultObj()
{
	static class USocialUserTreeView* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialUserTreeView*>(USocialUserTreeView::StaticClass()->DefaultObject);

	return Default;
}

}


