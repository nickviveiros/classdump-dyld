/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODDPoint, ODDAlgorithm, ODDShape, NSMutableArray;

@interface ODILayoutNode : NSObject {

	ODDPoint* mPoint;
	ODDAlgorithm* mAlgorithm;
	ODDShape* mShape;
	NSMutableArray* mChildren;

}
-(void)dealloc;
-(id)initWithLayoutNode:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(id)initWithLayoutNode:(id)arg1 point:(id)arg2 ;
-(void)processLayoutObjects:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processLayoutNode:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processChoose:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processForEach:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processAlgorithm:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processShape:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
@end

