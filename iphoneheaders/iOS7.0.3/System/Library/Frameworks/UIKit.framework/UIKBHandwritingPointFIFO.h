/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIKBHandwritingPointFIFO : NSObject {

	UIKBHandwritingPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) UIKBHandwritingPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)dealloc;
-(void)flush;
-(void)clear;
-(void)addPoint:(CGPoint)arg1 ;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(id)arg1 ;
-(id)nextFIFO;
-(void)emitPoint:(CGPoint)arg1 ;
@end

