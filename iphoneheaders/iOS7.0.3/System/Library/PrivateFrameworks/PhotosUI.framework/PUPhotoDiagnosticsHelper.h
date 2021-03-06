/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <DataDetectorsUI/MFMailComposeViewControllerDelegate.h>

@protocol PUPhotoDiagnosticsHelperDelegate;
@class UIViewController;

@interface PUPhotoDiagnosticsHelper : NSObject <UIAlertViewDelegate, MFMailComposeViewControllerDelegate> {

	<PUPhotoDiagnosticsHelperDelegate>* _delegate;
	UIViewController* _referenceViewController;
	PUPhotoDiagnosticsHelper* __keepSelf;

}

@property (assign,nonatomic,__weak) <PUPhotoDiagnosticsHelperDelegate> * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * referenceViewController;                      //@synthesize referenceViewController=_referenceViewController - In the implementation block
@property (setter=_setKeepSelf:,nonatomic,retain) PUPhotoDiagnosticsHelper * _keepSelf;              //@synthesize _keepSelf=__keepSelf - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)setReferenceViewController:(id)arg1 ;
-(void)_setKeepSelf:(id)arg1 ;
-(void)_finishedWithDataSent:(BOOL)arg1 ;
-(id)referenceViewController;
-(void)_composeMessageForDiagnosticInformation:(id)arg1 withProblemType:(int)arg2 ;
-(id)initWithReferenceViewController:(id)arg1 ;
-(void)collectDiagnosticsWithInformation:(id)arg1 ;
-(id)_keepSelf;
-(void).cxx_destruct;
@end

