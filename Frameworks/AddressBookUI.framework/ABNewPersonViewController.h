/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABNewPersonViewControllerDelegate>, ABPersonViewControllerHelper, <ABStyleProvider>, ABGroupWrapper;

@interface ABNewPersonViewController : UIViewController  {
    <ABNewPersonViewControllerDelegate> *_newPersonViewDelegate;
    id _parentGroup;
    id _helper;
    void *_recordForNewPerson;
}

@property <ABNewPersonViewControllerDelegate> * newPersonViewDelegate;
@property void* addressBook;
@property void* displayedPerson;
@property void* parentGroup;
@property(retain) ABGroupWrapper * parentGroupWrapper;
@property(readonly) void* recordForNewPerson;
@property(readonly) ABPersonViewControllerHelper * helper;
@property BOOL savesNewContactOnSuspend;
@property BOOL showsCancelButton;
@property(retain) <ABStyleProvider> * styleProvider;


- (void)updateNavigationButtons;
- (void)setAddressBook:(void*)arg1;
- (void*)addressBook;
- (BOOL)showsCancelButton;
- (void)setShowsCancelButton:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)applicationWillTerminate:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setNewPersonViewDelegate:(id)arg1;
- (void)cancel:(id)arg1;
- (void)save:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)helper;
- (id)newPersonViewDelegate;
- (void*)parentGroup;
- (void)setParentGroup:(void*)arg1;
- (id)parentGroupWrapper;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (BOOL)savesNewContactOnSuspend;
- (void)savePerson:(void*)arg1;
- (void)saveAndTellDelegate:(BOOL)arg1;
- (void*)recordForNewPerson;
- (void)attemptSaveAndTellDelegate:(BOOL)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setParentGroupWrapper:(id)arg1;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (int)abViewControllerType;
- (void*)displayedPerson;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (BOOL)ckCanDismissWhenSuspending;

@end
