/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SURotationController.h>

@class SURotationController, SUViewController;

@interface SUStorePageRotationController : SURotationController {

	SURotationController* _childRotationController;
	SUViewController* _childViewController;

}
-(void)dealloc;
-(void)finishRotationFromInterfaceOrientation:(int)arg1 ;
-(void)animateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)prepareToRotateToInterfaceOrientation:(int)arg1 ;
-(id)_childRotationController;
@end
