/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKChangeSourceObserver.h>

@protocol TNPageControllerDelegate;
@class TNDocumentRoot, TNPageCoordinateDictionary, TSUPointerKeyDictionary, TNSheet, NSMutableDictionary, NSString, NSObject, TNPrintProperties;

@interface TNPageController : NSObject <TSKChangeSourceObserver> {

	TNDocumentRoot* mDocumentRoot;
	TNPageCoordinateDictionary* mPageLayoutCache;
	TSUPointerKeyDictionary* mHintCacheDictionary;
	TNSheet* mSheet;
	SCD_Struct_TS266 mMaxPageCoordinate;
	BOOL mMaxPageCoordinateValid;
	NSMutableDictionary* mCachedAutoFitContentScaleDictionary;
	NSString* mPageNumberFontName;
	CTFontRef mPageNumberFont;
	CTFontRef mPageNumberFontForDevice;
	float mLastContentScaleForPageNumberFont;
	NSObject<TNPageControllerDelegate>* mDelegate;
	TNPrintProperties* _printProperties;

}

@property (assign,nonatomic) TNDocumentRoot * documentRoot; 
@property (assign,nonatomic) NSObject<TNPageControllerDelegate> * delegate; 
@property (assign,nonatomic) TNSheet * sheet; 
@property (readonly) CGSize pageSize; 
@property (readonly) CGRect contentFrame; 
@property (readonly) TNPrintProperties * printProperties;                                //@synthesize printProperties=_printProperties - In the implementation block
@property (getter=isPortrait,readonly) BOOL portrait; 
@property (readonly) unsigned numPages; 
@property (readonly) float contentScale; 
@property (readonly) CGSize pageSizeWithGutter; 
@property (readonly) NSString * pageNumberFontName; 
+(float)p_contentScaleAutoFitForSheet:(id)arg1 ;
+(id)p_cachedAutoFitContentScaleDictionary;
+(float)autoFitContentScaleForSheet:(id)arg1 ;
-(id)initWithDocumentRoot:(id)arg1 ;
-(void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(BOOL)isPagePlaceholderAtPageCoordinate:(SCD_Struct_TS266)arg1 ;
-(id)pageLayoutGeometryForPrintingAtPageCoordinate:(SCD_Struct_TS266)arg1 ;
-(id)pageLayoutGeometryForPageCoordinate:(SCD_Struct_TS266)arg1 ;
-(SCD_Struct_TS266)pageCoordinateForPageIndex:(unsigned)arg1 ;
-(void)registerPageLayout:(id)arg1 atPageCoordinate:(SCD_Struct_TS266)arg2 ;
-(void)layoutAtPageIndex:(unsigned)arg1 forLayoutController:(id)arg2 ;
-(unsigned)pageNumberForPageCoordinate:(SCD_Struct_TS266)arg1 ;
-(CTFontRef)pageNumberFontForDeviceSpace:(BOOL)arg1 ;
-(id)printProperties;
-(CGRect)firstPartitionFrameForInfo:(id)arg1 outStartPageCoordinate:(out SCD_Struct_TS266*)arg2 ;
-(void)syncPositionOfLayout:(id)arg1 atCoordinate:(SCD_Struct_TS266)arg2 ;
-(unsigned)numPages;
-(void)invalidateCachedAutoFitContentScaleForSheet:(id)arg1 ;
-(void)p_invalidatePageLayoutCache;
-(void)p_clearHintCache;
-(void)p_invalidateHintCache;
-(void)updateViewScale;
-(SCD_Struct_TS267)pageRangeForContentWithUpperBound:(SCD_Struct_TS266)arg1 ;
-(SCD_Struct_TS267)pageRangeForInfo:(id)arg1 upperBound:(SCD_Struct_TS266)arg2 ;
-(SCD_Struct_TS266)p_pageCoordinateForPageLayoutAtDevicePoint:(CGPoint)arg1 ;
-(SCD_Struct_TS266)pageCoordinateForMaxVisiblePage;
-(SCD_Struct_TS267)pageRangeForContent;
-(id)pageNumberFontName;
-(SCD_Struct_TS266)pageCoordinateForDrawableAtUnscaledPoint:(CGPoint)arg1 ;
-(void)p_updateVisiblePageRange:(SCD_Struct_TS267)arg1 forLayoutController:(id)arg2 ;
-(CGSize)pageSizeWithGutter;
-(void)p_layoutInfo:(id)arg1 intoPageLayout:(id)arg2 atPageCoordinate:(SCD_Struct_TS266)arg3 ;
-(void)updateContentScale;
-(id)p_hintCacheForInfo:(id)arg1 ;
-(SCD_Struct_TS267)pageRangeWithPlaceholdersWithUpperBound:(SCD_Struct_TS266)arg1 ;
-(id)p_pageLayoutAtCoordinate:(SCD_Struct_TS266)arg1 ;
-(void)p_enumerateOverPageRange:(SCD_Struct_TS267)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(id)p_layoutForInfo:(id)arg1 atCoordinate:(SCD_Struct_TS266)arg2 parentLayout:(id)arg3 ;
-(id)p_pageInfoForPageAtIndex:(unsigned)arg1 ;
-(SCD_Struct_TS267)pageRangeForPageIndex:(unsigned)arg1 ;
-(void)p_layoutInfo:(id)arg1 intoPageRange:(SCD_Struct_TS267)arg2 ;
-(CGSize)contentSizeForCanvasLayer;
-(void)layoutInPageRange:(SCD_Struct_TS267)arg1 forLayoutController:(id)arg2 ;
-(SCD_Struct_TS266)pageCoordinateForPageLayoutAtUnscaledPoint:(CGPoint)arg1 ;
-(CGRect)printingLayoutRectForPageIndex:(unsigned)arg1 ;
-(void)removeLayoutsFromPages;
-(void)invalidateDrawableLayouts;
-(void)invalidatePageLayout;
-(id)pageInfoForPageIndex:(unsigned)arg1 ;
-(BOOL)isPortrait;
-(CGRect)contentFrame;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(unsigned)pageCount;
-(id).cxx_construct;
-(float)contentScale;
-(CGSize)pageSize;
-(void)setSheet:(id)arg1 ;
-(id)documentRoot;
-(void)setDocumentRoot:(id)arg1 ;
-(id)sheet;
@end

