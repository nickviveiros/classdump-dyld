/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class BuddyAirplaneView;

@interface BuddyAirplaneController : BuddyTableViewController <BuddyController> {

	<BuddyControllerDelegate>* _delegate;
	BuddyAirplaneView* _buddyAirplaneView;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)titleText;
@end

