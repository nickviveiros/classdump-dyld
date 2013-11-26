/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@class NSXPCConnection, ACDDatabase, NSString, NSNumber, NSMutableDictionary, ACDTelemetryWatchdog;

@interface ACDClient : NSObject {

	NSXPCConnection* _connection;
	ACDDatabase* _database;
	CFBundleRef _bundle;
	NSString* _bundleID;
	BOOL _didManuallySetBundleID;
	NSNumber* _pid;
	NSString* _localizedAppName;
	NSString* _name;
	NSMutableDictionary* _entitlementChecks;
	ACDTelemetryWatchdog* _telemetry;

}

@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,readonly) CFBundleRef bundle; 
@property (nonatomic,readonly) NSString * localizedAppName; 
@property (nonatomic,readonly) NSString * adamOrDisplayID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSNumber * pid; 
@property (nonatomic,readonly) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) ACDDatabase * database;                      //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) ACDTelemetryWatchdog * telemetry;              //@synthesize telemetry=_telemetry - In the implementation block
+(id)clientWithBundleID:(id)arg1 ;
+(id)bundleForPID:(int)arg1 ;
-(id)database;
-(id)bundleID;
-(id)initWithConnection:(id)arg1 database:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)name;
-(CFBundleRef)bundle;
-(id)connection;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)adamOrDisplayID;
-(id)_displayNameFromSpringBoardForPID:(int)arg1 ;
-(id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1 ;
-(id)localizedAppName;
-(id)telemetry;
-(void)setTelemetry:(id)arg1 ;
-(id)pid;
-(void)setBundleID:(id)arg1 ;
-(void).cxx_destruct;
@end
