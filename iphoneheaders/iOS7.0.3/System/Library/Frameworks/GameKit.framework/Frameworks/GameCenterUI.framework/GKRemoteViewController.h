/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <GameCenterUI/GKServiceViewControllerDelegate.h>

@class GKGame, GKHostedViewController, NSMutableDictionary, UIColor;

@interface GKRemoteViewController : _UIRemoteViewController <GKServiceViewControllerDelegate> {

	BOOL _didSetRemoteGame;
	BOOL _viewDidAppear;
	GKHostedViewController* _managingViewControllerWeak;
	GKGame* _game;
	NSMutableDictionary* _dirtyProperties;
	UIColor* _previousStatusBarColor;
	/*^block*/ id _blockToPerformAfterViewDidAppear;

}

@property (assign,nonatomic) BOOL didSetRemoteGame;                                        //@synthesize didSetRemoteGame=_didSetRemoteGame - In the implementation block
@property (assign,nonatomic) BOOL viewDidAppear;                                           //@synthesize viewDidAppear=_viewDidAppear - In the implementation block
@property (nonatomic,readonly) BOOL serviceNeedsCurrentGame; 
@property (nonatomic,readonly) BOOL serviceNeedsLocalPlayer; 
@property (nonatomic,retain) NSMutableDictionary * dirtyProperties;                        //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (assign,nonatomic) GKHostedViewController * managingViewController;              //@synthesize managingViewControllerWeak=_managingViewControllerWeak - In the implementation block
@property (nonatomic,retain) UIColor * previousStatusBarColor;                             //@synthesize previousStatusBarColor=_previousStatusBarColor - In the implementation block
@property (nonatomic,copy) id blockToPerformAfterViewDidAppear;                            //@synthesize blockToPerformAfterViewDidAppear=_blockToPerformAfterViewDidAppear - In the implementation block
@property (nonatomic,retain) GKGame * game;                                                //@synthesize game=_game - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
-(id)dirtyProperties;
-(void)setDirtyProperties:(id)arg1 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(id)managingViewController;
-(void)setupRemoteView;
-(void)remoteViewControllerIsCanceling;
-(void)remoteViewControllerIsFinishing;
-(BOOL)_dismissSelfAfterGettingShouldFinish;
-(id)observedKeyPaths;
-(void)setManagingViewController:(id)arg1 ;
-(BOOL)didSetRemoteGame;
-(BOOL)serviceNeedsCurrentGame;
-(BOOL)serviceNeedsLocalPlayer;
-(BOOL)serviceNeedsStatusBarHeightHack;
-(void)populateInitialStateForRemoteView:(id)arg1 ;
-(int)_desiredStatusBarStyle;
-(void)setViewDidAppear:(BOOL)arg1 ;
-(void)_performBlockAfterViewDidAppearIfNeeded;
-(/*^block*/ id)blockToPerformAfterViewDidAppear;
-(void)setBlockToPerformAfterViewDidAppear:(/*^block*/ id)arg1 ;
-(void)_performSelectorAfterAppearingOrTimeOut:(SEL)arg1 ;
-(BOOL)_dismissSelfAfterGettingShouldCancel;
-(void)readyToPresentInController:(id)arg1 ;
-(void)setDidSetRemoteGame:(BOOL)arg1 ;
-(id)previousStatusBarColor;
-(void)setPreviousStatusBarColor:(id)arg1 ;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(BOOL)viewDidAppear;
@end

