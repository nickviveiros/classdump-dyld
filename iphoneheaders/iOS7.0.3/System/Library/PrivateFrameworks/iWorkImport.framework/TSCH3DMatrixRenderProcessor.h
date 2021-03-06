/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@interface TSCH3DMatrixRenderProcessor : TSCH3DRetargetRenderProcessor {

	StateStack<glm::detail::tmat4x4<float>, 8> mTransformStack;
	tmat4x4<float> mProjection;
	BOOL mTransformChanged;
	BOOL mProjectionChanged;

}

@property (nonatomic,readonly) const tmat4x4<float>* current; 
@property (nonatomic,readonly) const tmat4x4<float>* projection; 
@property (nonatomic,readonly) BOOL transformChanged; 
@property (nonatomic,readonly) BOOL projectionChanged; 
-(tmat4x4<float>*)projection;
-(BOOL)transformChanged;
-(void)popMatrix;
-(void)pushMatrix;
-(void)projection:(tmat4x4<float>*)arg1 ;
-(void)translate:(tvec3<float>*)arg1 ;
-(void)copyProjectionInto:(tmat4x4<float>*)arg1 ;
-(void)copyTransformInto:(tmat4x4<float>*)arg1 ;
-(void)resetChangeFlags;
-(id)normalizedViewAll;
-(BOOL)projectionChanged;
-(void)replace:(tmat4x4<float>*)arg1 ;
-(id).cxx_construct;
-(void)scale:(tvec3<float>*)arg1 ;
-(tmat4x4<float>*)current;
-(void)multiply:(tmat4x4<float>*)arg1 ;
@end

