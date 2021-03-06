/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SURotationController.h>

@class SURotationController, UIViewController;

@interface SUSplitViewRotationController : SURotationController {

	SURotationController* _firstRotationController;
	UIViewController* _firstViewController;
	SURotationController* _secondRotationController;
	UIViewController* _secondViewController;

}
-(void)dealloc;
-(void)finishRotationFromInterfaceOrientation:(int)arg1 ;
-(void)animateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)prepareToRotateToInterfaceOrientation:(int)arg1 ;
-(id)_firstRotationController;
-(id)_secondRotationController;
@end

