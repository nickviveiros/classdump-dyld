/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/PassesLockScreenPlugin.lockbundle/PassesLockScreenPlugin
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAwayViewPluginController.h>
#import <PassesLockScreenPlugin/WLLockScreenViewDataSource.h>
#import <PassesLockScreenPlugin/WLLockScreenViewDelegate.h>
#import <PassKitCore/PKPassLibraryDelegate.h>
#import <NowPlayingArtLockScreen/SBLockScreenBundleController.h>

@class PKPassLibrary, NSArray, NSMutableDictionary, PKDiff, NSTimer, PKUsageNotificationServer;

@interface WLLockScreenCardsViewController : SBAwayViewPluginController <WLLockScreenViewDataSource, WLLockScreenViewDelegate, PKPassLibraryDelegate, SBLockScreenBundleController> {

	PKPassLibrary* _passLibrary;
	NSArray* _cardUniqueIDs;
	unsigned _startIndex;
	NSMutableDictionary* _cardsByUniqueID;
	PKDiff* _diff;
	NSTimer* _resetIdleTimerTimer;
	NSTimer* _notifyPassViewedTimer;
	PKUsageNotificationServer* _usageServer;

}
+(id)rootViewController;
-(id)cardAtIndex:(unsigned)arg1 ;
-(id)_newPassesDictionaryFromSet:(id)arg1 ;
-(void)enableIdleTimer;
-(void)updateBacklightWithProgress:(float)arg1 ;
-(unsigned)cardCount;
-(void)_passViewNotificationTimerFired;
-(void)disableIdleTimer;
-(double)_presentAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)_verifyArrayOfStrings:(id)arg1 ;
-(id)diffForCardAtIndex:(unsigned)arg1 ;
-(BOOL)showsBeneathNotifications;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)dismiss;
-(unsigned)startIndex;
-(void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3 ;
-(BOOL)viewWantsOverlayLayout;
-(BOOL)showDateView;
-(void)setActivationContext:(id)arg1 ;
-(/*^block*/ id)_disableTransitionBlock;
-(/*^block*/ id)enableTransitionBlock;
-(BOOL)viewWantsFullscreenLayout;
-(BOOL)shouldDisableOnRelock;
-(BOOL)shouldDisableOnUnlock;
-(BOOL)shouldShowLockStatusBarTime;
-(int)pluginPriority;
-(BOOL)showAwayItems;
-(BOOL)wantsUserWallpaper;
-(BOOL)showsDuringCall;
-(BOOL)handleMenuButtonTap;
@end

