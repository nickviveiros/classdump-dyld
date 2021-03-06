/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@interface SUScriptDocumentInteractionControllerNativeObject : SUScriptNativeObject <UIDocumentInteractionControllerDelegate> {

	BOOL _didPickApplication;
	BOOL _isVisible;
	/*^block*/ id _presentationBlock;
	BOOL _redisplayAfterRotation;

}
-(void)dealloc;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1 ;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1 ;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2 ;
-(void)destroyNativeObject;
-(void)_windowDidRotateNotification:(id)arg1 ;
-(void)_windowWillRotateNotification:(id)arg1 ;
-(void)setupNativeObject;
-(BOOL)_isAffectedByWindowNotification:(id)arg1 ;
-(void)presentUsingBlock:(/*^block*/ id)arg1 ;
@end

