/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SiriUI/SiriUIViewController.h>

@protocol SiriUIAceObjectViewControllerDelegate;
@class AceObject;

@interface SiriUIAceObjectViewController : UIViewController <SiriUIViewController> {

	BOOL _virgin;
	AceObject* _aceObject;
	<SiriUIAceObjectViewControllerDelegate>* _delegate;

}

@property (nonatomic,retain) AceObject * aceObject;                                                  //@synthesize aceObject=_aceObject - In the implementation block
@property (getter=isVirgin,nonatomic,readonly) BOOL virgin;                                          //@synthesize virgin=_virgin - In the implementation block
@property (assign,nonatomic,__weak) <SiriUIAceObjectViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(float)desiredHeight;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_privateDelegate;
-(void)siriWillActivateFromSource:(int)arg1 ;
-(void)wasAddedToTranscript;
-(void)viewDidPresent;
-(id)aceObject;
-(void)setAceObject:(id)arg1 ;
-(BOOL)removedAfterDialogProgresses;
-(BOOL)isVirgin;
-(void)_setVirgin:(BOOL)arg1 ;
-(int)_pinAnimationType;
-(int)_insertionAnimation;
-(int)_replacementAnimation;
-(float)_insertionAnimatedZPosition;
-(void).cxx_destruct;
@end

