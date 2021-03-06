/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <Maps/RecentsViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol CollectionsViewControllerDelegate;
@class UIPopoverController, UINavigationController, ABPeoplePickerNavigationController, BookmarksViewController, RecentsViewController, UIActionSheet, NSMutableSet;

@interface CollectionsViewController : UIViewController <ABPeoplePickerNavigationControllerDelegate, RecentsViewControllerDelegate, UINavigationControllerDelegate> {

	UIPopoverController* _collectionsPopoverController;
	UINavigationController* _bookmarksNavController;
	UINavigationController* _recentsNavController;
	ABPeoplePickerNavigationController* _contactsNavController;
	UINavigationController* _currentNavController;
	BookmarksViewController* _bookmarksViewController;
	RecentsViewController* _recentsViewController;
	UIActionSheet* _toOrFromSelectionActionSheet;
	void* _person;
	int _personAddressID;
	<CollectionsViewControllerDelegate>* _mapControllerDelegate;
	int _searchType;
	int _collectionsMode;
	NSMutableSet* _segmentedControls;
	BOOL _abAllowed;

}

@property (assign,nonatomic) int collectionsMode;                              //@synthesize collectionsMode=_collectionsMode - In the implementation block
@property (assign,nonatomic) int searchType;                                   //@synthesize searchType=_searchType - In the implementation block
@property (getter=isPresented,nonatomic,readonly) BOOL presented; 
-(void)setCustomSearchResult:(id)arg1 ;
-(void)didChangeValueOfSegmentedControl:(id)arg1 ;
-(void)_dismissCompletionController:(id)arg1 ;
-(id)_navigationControllerForCollectionsMode:(int)arg1 ;
-(int)_collectionsModeForABAuthorization:(long)arg1 ;
-(void)switchToViewForCollectionsMode:(int)arg1 ;
-(id)_bookmarksViewController;
-(id)doneButtonItem;
-(id)toolbarItemsForCollectionsMode:(int)arg1 ;
-(id)_recentsViewController;
-(id)_bookmarksNavController;
-(id)_recentsNavController;
-(id)_contactsNavController;
-(int)searchMode;
-(void)recentsViewController:(id)arg1 choseHistoryItem:(id)arg2 ;
-(void)recentsViewController:(id)arg1 choseBookmark:(id)arg2 ;
-(BOOL)recentsViewControllerShouldPresentToOrFromSelectionAlert:(id)arg1 ;
-(void)setSearchType:(int)arg1 ;
-(void)presentFromBarButtonItem:(id)arg1 ;
-(id)bookmarksViewController;
-(void)setCollectionsMode:(int)arg1 ;
-(int)collectionsMode;
-(int)searchType;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2 ;
-(CGSize)_preferredContentSize;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)isPresented;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)initWithDelegate:(id)arg1 ;
@end

