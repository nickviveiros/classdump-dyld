/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PLPreheatItemSource, NSFastEnumeration;
#import <PhotosUI/PhotosUI-Structs.h>
@class NSNumber, PUImageManager, , NSFetchRequest;

@interface PUPreheatManager : NSObject {

	BOOL _imageFormatIsTable;
	int _imageFormat;
	NSNumber* _imageFormatKey;
	PUImageManager* _imageManager;
	<PLPreheatItemSource>* _imageTable;
	<NSFastEnumeration>* _previousAssets;
	NSFetchRequest* _fetchRequest;

}

@property (assign,nonatomic) int imageFormat;                                   //@synthesize imageFormat=_imageFormat - In the implementation block
@property (nonatomic,retain) NSNumber * imageFormatKey;                         //@synthesize imageFormatKey=_imageFormatKey - In the implementation block
@property (assign,nonatomic) BOOL imageFormatIsTable;                           //@synthesize imageFormatIsTable=_imageFormatIsTable - In the implementation block
@property (nonatomic,retain) PUImageManager * imageManager;                     //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) <PLPreheatItemSource> * imageTable;                //@synthesize imageTable=_imageTable - In the implementation block
@property (nonatomic,retain) <NSFastEnumeration> * previousAssets;              //@synthesize previousAssets=_previousAssets - In the implementation block
@property (nonatomic,retain) NSFetchRequest * fetchRequest;                     //@synthesize fetchRequest=_fetchRequest - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithFormat:(int)arg1 ;
-(int)imageFormat;
-(id)fetchRequest;
-(void)setFetchRequest:(id)arg1 ;
-(id)imageForAsset:(id)arg1 ;
-(void)cancelAllPreheating;
-(void)pu_diffsFromRect:(CGRect)arg1 toRect:(CGRect)arg2 differenceHandler:(/*^block*/ id)arg3 ;
-(void)preheatAssets:(id)arg1 cancelAssets:(id)arg2 ;
-(void)invalidateCachedImagesForAssets:(id)arg1 ;
-(void)setImageFormatIsTable:(BOOL)arg1 ;
-(void)setImageFormat:(int)arg1 ;
-(void)setImageFormatKey:(id)arg1 ;
-(BOOL)imageFormatIsTable;
-(void)setImageTable:(id)arg1 ;
-(void)setImageManager:(id)arg1 ;
-(void)_prefetchAssetsForThumbnails:(id)arg1 ;
-(id)imageTable;
-(id)imageManager;
-(id)dataForAsset:(id)arg1 width:(int*)arg2 height:(int*)arg3 bytesPerRow:(int*)arg4 dataWidth:(int*)arg5 dataHeight:(int*)arg6 imageDataOffset:(int*)arg7 ;
-(id)imageFormatKey;
-(id)previousAssets;
-(void)setPreviousAssets:(id)arg1 ;
-(void).cxx_destruct;
@end
