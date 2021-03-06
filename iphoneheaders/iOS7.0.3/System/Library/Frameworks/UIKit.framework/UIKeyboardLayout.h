/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UITextInputTraits, UIKBScreenTraits, NSMutableArray, UITouch, UIKeyboardTaskQueue;

@interface UIKeyboardLayout : UIView {

	UITextInputTraits* _inputTraits;
	UIKBScreenTraits* _screenTraits;
	NSMutableArray* _uncommittedTouches;
	UITouch* _activeTouch;
	UITouch* _shiftKeyTouch;
	UIKeyboardTaskQueue* _taskQueue;

}

@property (nonatomic,retain) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,retain) UITouch * activeTouch;                        //@synthesize activeTouch=_activeTouch - In the implementation block
@property (nonatomic,retain) UITouch * shiftKeyTouch;                      //@synthesize shiftKeyTouch=_shiftKeyTouch - In the implementation block
@property (nonatomic,readonly) int orientation; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setShift:(BOOL)arg1 ;
-(int)orientation;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(id)candidateList;
-(void)clearUnusedObjects:(BOOL)arg1 ;
-(BOOL)hasCandidateKeys;
-(BOOL)hasAccentKey;
-(BOOL)canMultitap;
-(BOOL)isAlphabeticPlane;
-(void)deactivateActiveKeys;
-(CGRect)frameForKeylayoutName:(id)arg1 ;
-(CGSize)dragGestureSize;
-(id)taskQueue;
-(BOOL)shouldShowIndicator;
-(id)activationIndicatorView;
-(BOOL)performReturnAction;
-(id)currentKeyplane;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(void)setAutoshift:(BOOL)arg1 ;
-(void)setTaskQueue:(id)arg1 ;
-(BOOL)shouldFadeFromLayout;
-(BOOL)shouldFadeToLayout;
-(void)fadeWithInvocation:(id)arg1 ;
-(BOOL)usesAutoShift;
-(void)didClearInput;
-(void)restoreDefaultsForAllKeys;
-(void)updateBackgroundCorners;
-(void)restoreDefaultsForKey:(id)arg1 ;
-(void)setTarget:(id)arg1 forKey:(id)arg2 ;
-(void)setAction:(SEL)arg1 forKey:(id)arg2 ;
-(void)setLongPressAction:(SEL)arg1 forKey:(id)arg2 ;
-(void)setLabel:(id)arg1 forKey:(id)arg2 ;
-(void)longPressAction;
-(BOOL)canProduceString:(id)arg1 ;
-(float)hitBuffer;
-(void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(BOOL)ignoresShiftState;
-(BOOL)isShiftKeyPlaneChooser;
-(BOOL)isShiftKeyBeingHeld;
-(void)updateLocalizedKeys:(BOOL)arg1 ;
-(void)setLayoutTag:(id)arg1 ;
-(id)baseKeyForString:(id)arg1 ;
-(id)keyplaneForKey:(id)arg1 ;
-(id)keyplaneNamed:(id)arg1 ;
-(void)changeToKeyplane:(id)arg1 ;
-(id)simulateTouch:(CGPoint)arg1 ;
-(id)simulateTouchForCharacter:(id)arg1 errorVector:(CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4 ;
-(void)wipeGestureRecognized:(id)arg1 ;
-(void)addWipeRecognizer;
-(SEL)handlerForNotification:(id)arg1 ;
-(void)setActiveTouch:(id)arg1 ;
-(void)setShiftKeyTouch:(id)arg1 ;
-(void)touchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)touchDragged:(id)arg1 executionContext:(id)arg2 ;
-(void)clearShiftIfNecessaryForEndedTouch:(id)arg1 ;
-(void)didCommitTouch:(id)arg1 ;
-(void)touchUp:(id)arg1 executionContext:(id)arg2 ;
-(id)activeTouch;
-(void)touchCancelled:(id)arg1 executionContext:(id)arg2 ;
-(id)touchesToCommitBeforeTouch:(id)arg1 ;
-(void)commitTouches:(id)arg1 ;
-(void)touchDown:(id)arg1 ;
-(void)touchDragged:(id)arg1 ;
-(BOOL)canForceTouchCommit:(id)arg1 ;
-(void)touchUp:(id)arg1 ;
-(void)touchCancelled:(id)arg1 ;
-(void)forceUpdatesForCommittedTouch;
-(void)commitTouches:(id)arg1 executionContext:(id)arg2 ;
-(BOOL)performSpaceAction;
-(void)deactivateActiveKeysClearingTouchInfo:(BOOL)arg1 clearingDimming:(BOOL)arg2 ;
-(void)physicalKeyDownWithEvent:(id)arg1 ;
-(void)physicalKeyUpWithEvent:(id)arg1 ;
-(float)flickDistance;
-(BOOL)acceptsDirectionInput;
-(id)shiftKeyTouch;
@end

