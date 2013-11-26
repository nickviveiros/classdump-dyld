/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:03:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Accounts/Notification/IDSAccountNotificationPlugin.bundle/IDSAccountNotificationPlugin
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccountsDaemon/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface IDSAccountNotificationDelegate : NSObject <ACDAccountNotificationPlugin> {

	NSMutableArray* _controllers;
	NSObject<OS_dispatch_queue>* _queue;

}
-(BOOL)_hasExistingIdentityServicesACAccountWithUserName:(id)arg1 inStore:(id)arg2 ;
-(id)_findExistingACAccountWithUserName:(id)arg1 inStore:(id)arg2 ;
-(void)_registerAccount:(id)arg1 inStore:(id)arg2 ;
-(void)_deregisterAccount:(id)arg1 inStore:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end
