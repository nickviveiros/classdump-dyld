/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDPartitioner.h>
#import <iWorkImport/TSDCanvasDelegate.h>

@protocol TSDInfo;
@class NSObject, TSDCanvas, TSDLayout, TSUPointerKeyDictionary;

@interface TSDDefaultPartitioner : NSObject <TSDPartitioner, TSDCanvasDelegate> {

	NSObject<TSDInfo>* mInfo;
	TSDCanvas* mCanvas;
	TSDLayout* mLayout;
	TSUPointerKeyDictionary* mMainRepsByCanvas;
	TSUPointerKeyDictionary* mCachedImagesByCanvas;
	TSUPointerKeyDictionary* mPartialRepsByCanvas;

}
-(id)i_layout;
-(void)p_generateLayouts;
-(void)p_teardownLayouts;
-(unsigned)p_edgesForHintBounds:(CGRect)arg1 ;
-(id)p_nextHintForSize:(CGSize)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3 ;
-(id)p_firstHintForSize:(CGSize)arg1 ;
-(id)nextHintForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5 ;
-(id)layoutForHint:(id)arg1 parentLayout:(id)arg2 ;
-(id)nextLayoutForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5 ;
-(BOOL)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(BOOL)arg3 delta:(int)arg4 ;
-(id)hintForLayout:(id)arg1 ;
-(id)i_repForCanvas:(id)arg1 ;
-(CGImageRef)i_cachedImageForCanvas:(id)arg1 ;
-(void)i_setCachedImage:(CGImageRef)arg1 forCanvas:(id)arg2 ;
-(void)i_removeCachedImageForCanvas:(id)arg1 ;
-(void)i_registerPartialRep:(id)arg1 ;
-(void)i_unregisterPartialRep:(id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(id)documentRoot;
@end

