/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIViewServiceSessionManager.h>

@class _UIViewServiceXPCListener, NSMutableArray;

@interface _UIViewServiceSessionManager_XPCObjects : _UIViewServiceSessionManager {

	_UIViewServiceXPCListener* _xpcListener;
	NSMutableArray* _incomingConnections;

}
-(void)dealloc;
-(id)_init;
-(void)_startListener;
-(void)_registerSessionForDefaultDeputies:(id)arg1 ;
@end
