/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <GuidedAccess/GuidedAccess-Structs.h>
@class UIBezierPath;

@interface GAXPathInterpolator : NSObject {

	UIBezierPath* _startingPath;
	UIBezierPath* _endingPath;
	void* _interpolationPathElementMappings;

}

@property (nonatomic,copy) UIBezierPath * startingPath;                           //@synthesize startingPath=_startingPath - In the implementation block
@property (nonatomic,copy) UIBezierPath * endingPath;                             //@synthesize endingPath=_endingPath - In the implementation block
@property (assign,nonatomic) void* interpolationPathElementMappings;              //@synthesize interpolationPathElementMappings=_interpolationPathElementMappings - In the implementation block
-(id)startingPath;
-(void)setEndingPath:(id)arg1 ;
-(id)endingPath;
-(id)initWithStartingPath:(id)arg1 endingPath:(id)arg2 ;
-(id)interpolatedPathForProgress:(float)arg1 ;
-(void)setStartingPath:(id)arg1 ;
-(void)setInterpolationPathElementMappings:(void*)arg1 ;
-(void*)interpolationPathElementMappings;
-(id)_enhancedByAddingPointsMatchingPath:(id)arg1 originalPath:(id)arg2 ;
-(CGPoint)_pointFromStartingPointAtDistance:(float)arg1 inPath:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

