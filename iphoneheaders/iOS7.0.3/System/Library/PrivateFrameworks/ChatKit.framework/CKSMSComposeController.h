/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <ChatKit/CKSMSCompose.h>
#import <ChatKit/CKSMSComposeRemoteViewControllerDelegate.h>

@class _UIAsyncInvocation, UINavigationController, CKSMSComposeRemoteViewController, CKSMSComposeQueuingRemoteViewControllerProxy;

@interface CKSMSComposeController : UIViewController <CKSMSCompose, CKSMSComposeRemoteViewControllerDelegate> {

	id _delegate;
	int _entryViewInvisible;
	_UIAsyncInvocation* _cancellationInvocation;
	UINavigationController* _clientNavigationController;
	BOOL _safeToAdd;
	BOOL _didChangeStatusBarStyle;
	int _savedStatusBarStyle;
	CKSMSComposeRemoteViewController* _remoteViewController;
	CKSMSComposeQueuingRemoteViewControllerProxy* _remoteViewControllerProxy;

}

@property (assign,nonatomic) id delegate;                                                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKSMSComposeRemoteViewController * remoteViewController;                               //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) CKSMSComposeQueuingRemoteViewControllerProxy * remoteViewControllerProxy;              //@synthesize remoteViewControllerProxy=_remoteViewControllerProxy - In the implementation block
+(BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3 ;
+(BOOL)acceptsMIMEType:(id)arg1 ;
+(double)maxTrimDurationForAudio;
+(double)maxTrimDurationForVideo;
-(id)initWithNavigationController:(id)arg1 ;
-(id)remoteViewControllerProxy;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setRemoteViewController:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)remoteViewController;
-(void)forceMMS;
-(void)setCanEditRecipients:(BOOL)arg1 ;
-(void)smsComposeControllerDataInserted;
-(BOOL)insertTextPart:(id)arg1 ;
-(void)setPendingAddresses:(id)arg1 ;
-(void)setTextEntryContentsVisible:(BOOL)arg1 ;
-(void)smsComposeControllerAppeared;
-(void)smsComposeControllerCancelled;
-(void)smsComposeControllerSendStartedWithText:(id)arg1 ;
-(void)setText:(id)arg1 addresses:(id)arg2 ;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 ;
-(void)setUICustomizationData:(id)arg1 ;
-(BOOL)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 ;
-(BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
-(void)forceCancelComposition;
-(void)setRemoteViewControllerProxy:(id)arg1 ;
-(void)_addRemoteVCIfNeeded;
-(void)disableCameraAttachments;
-(BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4 ;
-(BOOL)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
@end
