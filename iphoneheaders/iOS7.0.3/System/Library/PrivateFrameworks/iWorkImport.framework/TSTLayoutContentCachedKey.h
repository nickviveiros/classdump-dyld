/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, TSWPParagraphStyle;

@interface TSTLayoutContentCachedKey : NSObject <NSCopying> {

	NSString* mString;
	float mWidth;
	float mHeight;
	TSWPParagraphStyle* mParagraphStyle;
	BOOL mCellWraps;
	int mValueType;
	UIEdgeInsets mPaddingInsets;
	int mVerticalAlignment;
	int mWritingDirection;

}

@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) float width; 
@property (nonatomic,readonly) float height; 
@property (nonatomic,readonly) TSWPParagraphStyle * paragraphStyle; 
@property (nonatomic,readonly) BOOL cellWraps; 
@property (nonatomic,readonly) int valueType; 
@property (nonatomic,readonly) UIEdgeInsets paddingInsets; 
@property (nonatomic,readonly) int verticalAlignment; 
@property (nonatomic,readonly) int writingDirection; 
-(id)paragraphStyle;
-(BOOL)cellWraps;
-(UIEdgeInsets)paddingInsets;
-(id)initWithString:(id)arg1 width:(float)arg2 height:(float)arg3 paragraphStyle:(id)arg4 cellWraps:(BOOL)arg5 valueType:(int)arg6 paddingInsets:(UIEdgeInsets)arg7 verticalAlignment:(int)arg8 writingDirection:(int)arg9 ;
-(BOOL)isEqualToLayoutContentCachedKey:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)string;
-(float)width;
-(float)height;
-(int)writingDirection;
-(int)verticalAlignment;
-(int)valueType;
@end

