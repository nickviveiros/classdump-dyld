/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSNumber;

@interface PLSImageAdjustment : NSObject <NSCoding> {

	NSNumber* _rotation;

}

@property (nonatomic,retain) NSNumber * rotation;              //@synthesize rotation=_rotation - In the implementation block
+(id)imageAdjustment;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setRotation:(id)arg1 ;
-(id)rotation;
@end

