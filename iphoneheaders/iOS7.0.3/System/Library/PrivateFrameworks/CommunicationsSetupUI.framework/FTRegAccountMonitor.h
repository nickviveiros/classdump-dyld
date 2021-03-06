/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
@class IMServiceImpl, NSArray, FTRegConnectionHandler;

@interface FTRegAccountMonitor : NSObject {

	int _serviceType;
	IMServiceImpl* _service;
	NSArray* _accounts;
	FTRegConnectionHandler* _connectionHandler;
	struct {
		unsigned listeningForNotifications : 1;
	}  _monitorFlags;

}

@property (nonatomic,readonly) NSArray * activeAccounts;              //@synthesize accounts=_accounts - In the implementation block
@property (assign,nonatomic) int serviceType;                         //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) IMServiceImpl * service;                 //@synthesize service=_service - In the implementation block
-(id)service;
-(id)initWithServiceType:(int)arg1 ;
-(void)dealloc;
-(id)logName;
-(void)_startListeningForNotifications;
-(void)_updateAccountState:(BOOL)arg1 ;
-(id)_activeAccounts;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleAccountNotification:(id)arg1 ;
-(BOOL)_shouldHandleAccountNofication:(id)arg1 ;
-(void)_stopListeningForNotifications;
-(void)setServiceType:(int)arg1 ;
-(int)serviceType;
-(id)activeAccounts;
-(void)setService:(id)arg1 ;
@end

