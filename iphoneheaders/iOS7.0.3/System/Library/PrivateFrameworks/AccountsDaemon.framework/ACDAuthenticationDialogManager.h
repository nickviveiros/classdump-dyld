/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccountsDaemon/ACDAuthenticationDialogManagerProtocol.h>

@class NSXPCListener, ACDQueueDictionary, NSString;

@interface ACDAuthenticationDialogManager : NSObject <ACDAuthenticationDialogManagerProtocol> {

	NSXPCListener* _authenticationDialogListener;
	ACDQueueDictionary* _dialogRequestQueues;
	NSString* _activeAccountID;

}
-(id)init;
-(void)contextForAuthenticationDialog:(/*^block*/ id)arg1 ;
-(void)authenticationDialogDidFinishWithSuccess:(BOOL)arg1 ;
-(void)authenticationDialogCrashed;
-(void)_launchDialogContainerAppForAccount:(id)arg1 shouldConfirm:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(BOOL)_confirmUserWantsToOpenAuthenticationURLForAccount:(id)arg1 ;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
-(void).cxx_destruct;
@end
