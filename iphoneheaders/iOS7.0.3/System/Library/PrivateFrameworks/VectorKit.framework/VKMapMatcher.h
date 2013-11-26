/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/GEOMapAccessRestrictions.h>

@protocol VKRoutePreloadSession;
@class GEOMapAccess, ;

@interface VKMapMatcher : NSObject <GEOMapAccessRestrictions> {

	GEOMapAccess* _map;
	<VKRoutePreloadSession>* _routePreloader;

}

@property (nonatomic,retain) <VKRoutePreloadSession> * routePreloader;              //@synthesize routePreloader=_routePreloader - In the implementation block
@property (nonatomic,readonly) BOOL allowsNetworkTileLoad; 
+(id)mapMatcherOfType:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)allowsNetworkTileLoad;
-(id)tilesAround:(SCD_Struct_VK61)arg1 radius:(double)arg2 ;
-(id)matchLocation:(id)arg1 transportType:(int)arg2 ;
-(id)routePreloader;
-(void)setRoutePreloader:(id)arg1 ;
@end
