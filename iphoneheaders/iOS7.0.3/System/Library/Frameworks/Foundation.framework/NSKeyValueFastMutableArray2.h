/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueFastMutableArray.h>

@class NSKeyValueGetter;

@interface NSKeyValueFastMutableArray2 : NSKeyValueFastMutableArray {

	NSKeyValueGetter* _valueGetter;

}
+(SCD_Struct_NS32*)_proxyNonGCPoolPointer;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(id)_nonNilArrayValueWithSelector:(SEL)arg1 ;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
@end
