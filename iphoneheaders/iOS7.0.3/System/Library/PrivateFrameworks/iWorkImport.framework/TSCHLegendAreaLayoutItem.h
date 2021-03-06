/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>

@class NSValue;

@interface TSCHLegendAreaLayoutItem : TSCHChartLayoutItem {

	NSValue* mLegendGeoemtryFrame;

}

@property (assign,nonatomic) CGRect legendModelGeometryFrame; 
-(void)clearAll;
-(CGRect)calcDrawingRect;
-(id)renderersWithRep:(id)arg1 ;
-(void)resetLayoutSize;
-(CGRect)legendModelGeometryFrame;
-(void)setLegendModelGeometryFrame:(CGRect)arg1 ;
-(void)updateLegendGeometryFrameFromLegendModelCache;
-(CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(void)clearLayoutSize;
-(CGSize)calcMinSize;
-(void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/ id)arg2 ;
-(CGAffineTransform)transformForRenderingBadge:(unsigned)arg1 cellType:(int)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 ;
-(CGAffineTransform)transformForRenderingLabel:(unsigned)arg1 cellType:(int)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 ;
-(CGAffineTransform)transformForRenderingLabel:(unsigned)arg1 cellType:(int)arg2 range:(NSRange)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 ;
-(CGAffineTransform)p_transformForRenderingLabel:(unsigned)arg1 paragraphStyle:(id)arg2 cellType:(int)arg3 rangePtr:(NSRange*)arg4 outElementSize:(CGSize*)arg5 outClipRect:(CGRect*)arg6 ;
-(CGAffineTransform)transformForRenderingLabel:(unsigned)arg1 paragraphStyle:(id)arg2 cellType:(int)arg3 range:(NSRange)arg4 outElementSize:(CGSize*)arg5 outClipRect:(CGRect*)arg6 ;
-(void)dealloc;
-(id)initWithParent:(id)arg1 ;
-(void)setLayoutSize:(CGSize)arg1 ;
@end

