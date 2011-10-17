/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMailComposeViewControllerDelegate>, NSDictionary, _MFMailCompositionContext, NSString, MFLock, MFComposeBodyField, MutableMessageHeaders, MFSecureMIMECompositionManager, ABUnknownPersonViewController, MFOutgoingMessageDelivery, UITextContentView, MFMailComposeRecipientView, MFComposeImageSizeView, UIBarButtonItem, <NSCoding>, MFGenericAttachmentStore, MFComposeRecipientAtom, MailboxUid, OutgoingMessage, ABPersonViewController, NSArray, MFComposeSubjectView, ABPeoplePickerNavigationController, UIView, UIActionSheet;

@interface MFMailComposeController : UIViewController <UIActionSheetDelegate, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate, MFMailPopoverManagerDelegate, MFMailComposeViewDelegate, MFComposeHeaderViewDelegate, MFComposeSubjectViewDelegate, MFComposeImageSizeViewDelegate, MFMailComposeRecipientViewDelegate, MFSecureMIMECompositionManagerDelegate, MFComposeTypeFactoryDelegate> {
    <MFMailComposeViewControllerDelegate> *_delegate;
    id _autorotationDelegate;
    _MFMailCompositionContext *_compositionContext;
    unsigned int _options;
    NSArray *_toAddresses;
    NSArray *_ccAddresses;
    NSArray *_bccAddresses;
    NSArray *_originalBccAddresses;
    NSString *_subject;
    NSString *_originalSendingEmailAddress;
    NSString *_primaryAddressForForcedSendingAccount;
    NSString *_sendingEmailAddress;
    int _sendingEmailAddressIndex;
    id _content;
    MFGenericAttachmentStore *_attachmentStore;
    unsigned int _initialAttachmentCount;
    UIView *_alternateTitleView;
    UIBarButtonItem *_sendButtonItem;
    UIBarButtonItem *_closeButtonItem;
    ABPeoplePickerNavigationController *_peoplePicker;
    ABPersonViewController *_personViewController;
    ABUnknownPersonViewController *_unknownPersonViewController;
    MFMailComposeRecipientView *_toField;
    MFMailComposeRecipientView *_ccField;
    MFComposeRecipientAtom *_atomPresentingCard;
    MFComposeSubjectView *_subjectField;
    MFComposeImageSizeView *_imageSizeField;
    MFComposeBodyField *_bodyField;
    UITextContentView *_bodyTextView;
    UIActionSheet *_activeSheet;
    MFMailComposeRecipientView *_lastFocusedRecipientView;
    MFOutgoingMessageDelivery *_delivery;
    OutgoingMessage *_message;
    MutableMessageHeaders *_savedHeaders;
    NSString *_lastDraftMessageID;
    MailboxUid *_lastDraftMailboxUid;
    NSString *_initialTitle;
    MFLock *_autosaveLock;
    id _autosaveIdentifier;
    MFSecureMIMECompositionManager *_secureCompositionManager;
    NSDictionary *_certificatesByRecipient;
    NSDictionary *_errorsByRecipient;
    NSString *_addressForMissingIdentity;
    int _signingIdentityStatus;
    int _encryptionIdentityStatus;
    int _resolution;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    unsigned int _pendingImageScalingOperations;
    unsigned int _isDirty : 1;
    unsigned int _shouldAutosaveWithSuspendInfo : 1;
    unsigned int _isSuspended : 1;
    unsigned int _fromAddressPickerWasVisible : 1;
    unsigned int _stillLoading : 1;
    unsigned int _hosted : 1;
    unsigned int _hasViewAppeared : 1;
    unsigned int _rotationSnapshotTaken : 1;
    unsigned int _isPopoverVisible : 1;
    unsigned int _useSuspended : 1;
}

@property(retain) <NSCoding> * autosaveIdentifier;
@property(copy) NSString * addressForMissingIdentity;
@property(retain) NSDictionary * errorsByRecipient;
@property(retain) NSDictionary * certificatesByRecipient;
@property(retain) MFComposeRecipientAtom * atomPresentingCard;
@property(retain) ABUnknownPersonViewController * unknownPersonViewController;
@property(retain) ABPersonViewController * personViewController;
@property(retain) ABPeoplePickerNavigationController * peoplePicker;
@property(retain) UIActionSheet * activeSheet;
@property(retain) MFGenericAttachmentStore * attachmentStore;
@property id autorotationDelegate;
@property id delegate;

+ (id)signature;
+ (void)initialize;
+ (id)_defaultAccount;
+ (void)_refreshMailAccountsIfNecessary;
+ (id)preferenceForKey:(id)arg1;
+ (id)defaultSignature;
+ (BOOL)isSetupForDelivery;
+ (BOOL)_fromAccountAllowsEmoji:(id)arg1;
+ (void)setCodePointTranslationEnabled:(BOOL)arg1 forSendingEmail:(id)arg2;

- (void)secureMIMECompositionManager:(id)arg1 signingStatusDidChange:(int)arg2 context:(id)arg3;
- (void)secureMIMECompositionManager:(id)arg1 encryptionStatusDidChange:(int)arg2 context:(id)arg3;
- (id)subject;
- (id)attachments;
- (void)setSubject:(id)arg1;
- (void)send:(id)arg1;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)composeRecipientViewDidFinishEnteringRecipient:(id)arg1;
- (BOOL)hosted;
- (void)setHosted:(BOOL)arg1;
- (id)activeSheet;
- (void)setActiveSheet:(id)arg1;
- (void)setSheet:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)_accountsChanged:(id)arg1;
- (BOOL)hasAttachments;
- (BOOL)isDirty;
- (id)toRecipients;
- (void)setToRecipients:(id)arg1;
- (void)setContentVisible:(BOOL)arg1;
- (void)setContent:(id)arg1;
- (id)message;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (BOOL)_canReloadView;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (BOOL)pickerView:(id)arg1 shouldUseCheckSelectionForRow:(int)arg2 forComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (unsigned int)pickerView:(id)arg1 numberOfRowsInComponent:(unsigned int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)sendMessage;
- (BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)initWithCompositionContext:(id)arg1 contentSize:(struct CGSize { float x1; float x2; })arg2 options:(unsigned int)arg3;
- (void)setInitialTitle:(id)arg1;
- (void)setCompositionContext:(id)arg1;
- (id)compositionContext;
- (BOOL)_shouldPrependBlankLineForAttachments;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfAttachment:(id)arg1;
- (void)_insertInlineAttachmentWithWrapper:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)addInlineAttachment:(id)arg1;
- (void)_unscaleImages;
- (id)deliveryController;
- (void)forceSaveAsDraft;
- (id)draftMessage;
- (BOOL)isSavingAsDraft;
- (void)setRecipientsKeyboardType:(int)arg1;
- (id)atomPresentingCard;
- (id)autorotationDelegate;
- (id)bccRecipients;
- (void)setSavedHeaders:(id)arg1;
- (id)addInlinedElementToStore:(id)arg1 onlyIfNecessary:(BOOL)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (BOOL)composeRecipientViewShowingSearchResults:(id)arg1;
- (BOOL)presentSearchResultsForComposeRecipientView:(id)arg1;
- (void)selectNextSearchResultForComposeRecipientView:(id)arg1;
- (void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;
- (BOOL)chooseSelectedSearchResultForComposeRecipientView:(id)arg1;
- (void)imageSizeView:(id)arg1 changedSelectedScaleTo:(int)arg2;
- (BOOL)sendingEmailDirtied;
- (void)popoverControllerDidDismissPopover:(id)arg1 isUserAction:(BOOL)arg2;
- (void)close:(id)arg1;
- (void)_popoverWillBePresented:(id)arg1;
- (void)_attachmentLoaderFinished:(id)arg1;
- (id)mailComposeView;
- (void)_unthrottleScalingAfterDelay;
- (id)attachmentStore;
- (void)setAddresses:(id)arg1 field:(int)arg2;
- (int)composeType;
- (void)_updateNavigationBarTitleAnimated:(BOOL)arg1;
- (id)_alternateTitleView;
- (id)navigationBarTitle;
- (void)_resetSecureCompositionManager;
- (void)clearAllFields;
- (void)_loadCompositionContext;
- (void)_setupForDraft:(id)arg1;
- (void)_setupForOutbox:(id)arg1;
- (void)_setupForAutosavedMessage:(id)arg1;
- (id)ccRecipients;
- (void)_checkForReplyAndForwardRestriction;
- (void)_tryAddSenderToBccRecipients;
- (void)_updateOriginalBccStatusForRestore;
- (void)_setIsLoading:(BOOL)arg1;
- (void)_loadingContextDidLoad:(id)arg1;
- (void)_loadAttachments;
- (void)_pickInitialFirstResponder;
- (void)_updateImageSizeTitles;
- (BOOL)_isReplyOrForward;
- (BOOL)_isRestoredComposition;
- (id)savedHeaders;
- (void)setSendingEmailAddress:(id)arg1;
- (void)_setupForExistingNewMessage:(id)arg1 content:(id)arg2;
- (void)setDraftMessageID:(id)arg1 mailbox:(id)arg2;
- (void)setCcRecipients:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(BOOL)arg2;
- (void)_finishedLoadingAllContentAndAttachments;
- (void)_scaleImages;
- (void)_inlinedAttachmentFinishedLoading:(id)arg1;
- (void)_insertInlineAttachment:(id)arg1;
- (void)_updateSendAndCloseEnabled;
- (id)_emailAddresses;
- (id)_addressFieldForField:(int)arg1;
- (void)_setRecipients:(id)arg1 forField:(int)arg2;
- (id)addressesForField:(int)arg1;
- (id)sendingEmailAddress;
- (void)addAddress:(id)arg1 field:(int)arg2;
- (void)_updateOriginalBccStatusForRestoreAddingAddress:(BOOL)arg1;
- (id)_allRecipientViews;
- (BOOL)_shouldEnableSendButton;
- (BOOL)_shouldEnableCloseButton;
- (void)_prepareForSuspend;
- (id)messageUseSuspendInfo:(BOOL)arg1;
- (int)resolution;
- (void)_finishedComposing;
- (void)_displayAlertSheet:(id)arg1;
- (void)_leaveMessageInOutbox;
- (id)messageUseSuspendInfo:(BOOL)arg1 endingEditing:(BOOL)arg2;
- (void)_getMessage:(id)arg1;
- (void)_checkForInvalidAddresses;
- (void)_checkForEmptySubject;
- (void)_prepareImagesForSend;
- (void)_physicallyScaleImagesToScale:(int)arg1;
- (unsigned long)_estimateMessageSize;
- (void)_setUpDeliveryObject;
- (BOOL)needsDelivery;
- (id)messageEndingEditing:(BOOL)arg1;
- (void)_setupForSaveAsDraft;
- (BOOL)deliverMessageRemotely;
- (void)_bodyTextChanged:(id)arg1;
- (void)attachmentsRemoved:(id)arg1;
- (void)attachmentFinishedLoading:(id)arg1;
- (void)attachmentFinishedCachingScaledSizes:(id)arg1;
- (void)attachmentCachedSizesWillChange:(id)arg1;
- (void)_searchBegan:(id)arg1;
- (void)_searchEnded:(id)arg1;
- (void)_composeViewDidDraw:(id)arg1;
- (void)_focusGained:(id)arg1;
- (void)clearInitialTitle;
- (void)_finishEnteringRecipients;
- (void)resumeWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_updateRecipientAtomStyles;
- (void)setPeoplePicker:(id)arg1;
- (void)setPersonViewController:(id)arg1;
- (void)setUnknownPersonViewController:(id)arg1;
- (void)setAtomPresentingCard:(id)arg1;
- (id)peoplePicker;
- (BOOL)_anyRecipientViewContainsAddress:(id)arg1;
- (void)_dismissPersonCard;
- (void)_setLastFocusedRecipientView:(id)arg1;
- (void)_updatePersonCard;
- (void)_dismissAlertSheet:(id)arg1 willClose:(BOOL)arg2;
- (void)didSelectCellAtRow:(unsigned int)arg1;
- (void)removeAddressAtIndex:(int)arg1 field:(int)arg2;
- (void)_updateTableCell:(id)arg1 isChecked:(BOOL)arg2;
- (void)setCertificatesByRecipient:(id)arg1;
- (void)setErrorsByRecipient:(id)arg1;
- (void)setAddressForMissingIdentity:(id)arg1;
- (void)_updateTitleBarForEncryptionStatus:(int)arg1;
- (BOOL)_hasEncryptionIdentityError;
- (BOOL)_hasRecipients;
- (void)_setTitleBarDetailText:(id)arg1 showLock:(BOOL)arg2;
- (int)_defaultAddressAtomStyle;
- (id)certificatesByRecipient;
- (id)errorsByRecipient;
- (BOOL)_wantsEncryption;
- (id)personViewController;
- (id)unknownPersonViewController;
- (void)_showMissingIdentityAlert;
- (id)_missingIdentityErrorWithFormat:(id)arg1 title:(id)arg2;
- (id)addressForMissingIdentity;
- (void)_updateIdentityStatus:(int*)arg1 withPolicy:(int)arg2 identity:(struct __SecIdentity { }*)arg3 error:(id)arg4;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(id)arg1;
- (void)composeSubjectViewTextFieldDidBecomeFirstResponder:(id)arg1;
- (void)composeHeaderViewDidChangeValue:(id)arg1;
- (void)composeHeaderViewDidConfirmValue:(id)arg1;
- (void)setAttachmentStore:(id)arg1;
- (id)bodyField;
- (BOOL)canShowFromField;
- (BOOL)canShowImageSizeField;
- (id)sendingEmailAddressIfExists;
- (id)currentScaleImageSize;
- (void)composeBodyFieldDidFinishLoad;
- (void)selectCurrentEntryForFromAddressPickerView:(id)arg1;
- (void)scrollToSelectedEntryInFromAddressTableView:(id)arg1;
- (BOOL)bccAddressesDirtied;
- (void)_dismissPeoplePicker;
- (id)autosaveIdentifier;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)setAutorotationDelegate:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForAttachmentWithIdentifier:(id)arg1;
- (void)dealloc;
- (void)_close;
- (void)autosaveWithHandler:(id)arg1;
- (void)_textChanged:(id)arg1;
- (void)dismissSheet;

@end
