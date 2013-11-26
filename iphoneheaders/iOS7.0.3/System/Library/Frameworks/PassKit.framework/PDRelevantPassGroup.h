/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class PKPass, NSMutableSet, NSDate, NSString;

@interface PDRelevantPassGroup : NSObject {

	PKPass* _seedPass;
	NSMutableSet* _passes;
	NSDate* _relevantDate;
	NSString* _relevantText;

}
-(void)addPass:(id)arg1 forDate:(id)arg2 ;
-(void)addPass:(id)arg1 forLocation:(id)arg2 ;
-(void)addPass:(id)arg1 forBeacon:(id)arg2 ;
-(id)sortedPasses;
-(id)seedPass;
-(id)_dateText;
-(void)_addPass:(id)arg1 ;
-(void)_addPass:(id)arg1 withRelevantText:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)bodyText;
-(id)iconData;
-(id)passes;
-(id)titleText;
@end
