/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAITOrientedBounds : NSObject
+(float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2 ;
+(CGAffineTransform)transformFromBounds:(CGRect)arg1 toOrientedBounds:(id)arg2 ;
+(id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(CGRect)arg3 ;
+(id)relativeOrientedBoundsOfDrawable:(id)arg1 ;
+(id)absoluteOrientedBoundsOfDrawable:(id)arg1 ;
+(id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1 logicalBounds:(CGRect)arg2 ;
+(id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1 ;
+(CGRect)axisParallelBoundsOfOrientedBounds:(id)arg1 ;
@end
