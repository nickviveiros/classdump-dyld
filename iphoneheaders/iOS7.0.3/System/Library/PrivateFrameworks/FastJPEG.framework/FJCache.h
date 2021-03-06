/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/FastJPEG.framework/FastJPEG
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <FastJPEG/FastJPEG-Structs.h>
@class NSMutableDictionary;

@interface FJCache : NSObject {

	NSMutableDictionary* _cacheEntries;
	int _countLimit;
	int _currentCount;
	int _totalCostLimit;
	int _currentCost;
	opaque_pthread_mutex_t _lock;
	entryList* _lru;

}
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCountLimit:(int)arg1 totalCostLimit:(int)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(int)arg3 ;
@end

