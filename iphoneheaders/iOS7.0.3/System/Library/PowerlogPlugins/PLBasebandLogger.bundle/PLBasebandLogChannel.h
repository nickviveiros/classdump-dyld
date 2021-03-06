/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLBasebandLogger.bundle/PLBasebandLogger
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PLBasebandLogger/PLBasebandLogger-Structs.h>
#import <PowerlogLoggerSupport/PLLogger.h>

@protocol PLBasebandLogChannelDelegate;
@interface PLBasebandLogChannel : PLLogger {

	<PLBasebandLogChannelDelegate>* delegate;
	CFMessagePortRef remotePort;
	CFMessagePortRef localPort;
	BOOL cachingEnabled;

}

@property (assign,nonatomic) <PLBasebandLogChannelDelegate> * delegate; 
@property (nonatomic,readonly) BOOL isValid; 
@property (assign,nonatomic) BOOL cachingEnabled; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)invalidate;
-(void)flush;
-(BOOL)isValid;
-(void)close;
-(void)setCachingEnabled:(BOOL)arg1 ;
-(void)setChannelTimeout:(double)arg1 ;
-(void)setHardwareLoggingLevel:(unsigned)arg1 withWindowSize:(unsigned)arg2 ;
-(void)commitHardwareLogs;
-(BOOL)openWithConnection:(id)arg1 ;
-(void)enableLogCodes:(id)arg1 andEvents:(id)arg2 ;
-(void)connectionInvalidated:(id)arg1 ;
-(void)sendObjectOverRemotePort:(id)arg1 ;
-(BOOL)cachingEnabled;
@end

