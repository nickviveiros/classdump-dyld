/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol NSLayoutItem <NSObject>
@required
-(id)nsli_description;
-(BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(float)arg3 container:(id)arg4;
-(BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(float)arg3 forConstraint:(id)arg4;
-(id)nsli_layoutEngine;
-(CGSize*)nsli_convertSizeToEngineSpace:(CGSize)arg1;
-(CGSize*)nsli_convertSizeFromEngineSpace:(CGSize)arg1;
-(id)nsli_superitem;
-(BOOL)nsli_resolvedValue:(float*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4;
-(BOOL)nsli_descriptionIncludesPointer;
-(unsigned)nsli_autoresizingMask;
-(BOOL)nsli_isFlipped;
@end
