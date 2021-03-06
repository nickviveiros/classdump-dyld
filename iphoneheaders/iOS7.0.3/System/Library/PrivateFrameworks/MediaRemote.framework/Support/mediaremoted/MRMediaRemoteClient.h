/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <mediaremoted/mediaremoted-Structs.h>
@class NSString, MRMediaRemoteRunAssertion, NSObject;

@interface MRMediaRemoteClient : NSObject {

	NSString* _bundleIdentifier;
	BOOL _canBeNowPlayingApplication;
	BOOL _keepAlive;
	unsigned _originDiscoveryCount;
	int _pid;
	unsigned _port;
	SBSProcessAssertionRef _processAssertion;
	unsigned _routeDiscoveryCount;
	MRMediaRemoteRunAssertion* _runAssertion;
	NSObject<OS_dispatch_source>* _source;

}

@property (assign,nonatomic) int pid;                                              //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned port;                                        //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) SBSProcessAssertionRef processAssertion;              //@synthesize processAssertion=_processAssertion - In the implementation block
@property (assign,nonatomic) BOOL canBeNowPlayingApplication;                      //@synthesize canBeNowPlayingApplication=_canBeNowPlayingApplication - In the implementation block
@property (nonatomic,readonly) unsigned originDiscoveryCount;                      //@synthesize originDiscoveryCount=_originDiscoveryCount - In the implementation block
@property (nonatomic,readonly) unsigned routeDiscoveryCount;                       //@synthesize routeDiscoveryCount=_routeDiscoveryCount - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
@property (assign,nonatomic) BOOL keepAlive;                                       //@synthesize keepAlive=_keepAlive - In the implementation block
-(unsigned)routeDiscoveryCount;
-(unsigned)originDiscoveryCount;
-(id)initWithPID:(int)arg1 port:(unsigned)arg2 bundleIdentifier:(id)arg3 ;
-(void)setCanBeNowPlayingApplication:(BOOL)arg1 ;
-(BOOL)canBeNowPlayingApplication;
-(void)setPort:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(id)bundleIdentifier;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)beginOriginDiscovery;
-(void)endOriginDiscovery;
-(void)beginRouteDiscovery;
-(void)endRouteDiscovery;
-(void)setKeepAlive:(BOOL)arg1 ;
-(BOOL)keepAlive;
-(void)setProcessAssertion:(SBSProcessAssertionRef)arg1 ;
-(SBSProcessAssertionRef)processAssertion;
-(unsigned)port;
@end

