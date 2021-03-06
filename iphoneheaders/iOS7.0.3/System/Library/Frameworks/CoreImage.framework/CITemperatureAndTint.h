/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CITemperatureAndTint : CIFilter {

	CIImage* inputImage;
	CIVector* inputNeutral;
	CIVector* inputTargetNeutral;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,@dynamic,retain) CIVector * inputNeutral; 
@property (nonatomic,retain) CIVector * inputTargetNeutral; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(void)setInputNeutral:(id)arg1 ;
-(void)setInputTargetNeutral:(id)arg1 ;
-(id)inputNeutral;
-(id)inputTargetNeutral;
@end

