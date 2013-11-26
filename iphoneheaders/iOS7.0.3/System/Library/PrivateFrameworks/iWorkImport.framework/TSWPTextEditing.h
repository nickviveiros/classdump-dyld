/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSWPTextEditingHostLayout;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPParagraphStyle, TSWPShapeStyle, TSWPStorage, TSDInteractiveCanvasController, TSDLayout, TSWPEditingController, TSPObjectContext;

@interface TSWPTextEditing : NSObject {

	TSWPParagraphStyle* _paragraphStyle;
	TSWPShapeStyle* _shapeStyle;
	TSWPStorage* _storage;
	BOOL _isEditing;
	TSDInteractiveCanvasController* _icc;
	TSDLayout<TSWPTextEditingHostLayout>* _hostLayout;

}

@property (nonatomic,retain) TSWPStorage * storage;                           //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) TSWPEditingController * editor; 
@property (nonatomic,readonly) TSPObjectContext * objectContext; 
@property (nonatomic,readonly) BOOL isEditing;                                //@synthesize isEditing=_isEditing - In the implementation block
-(id)storage;
-(void)setStorage:(id)arg1 ;
-(id)objectContext;
-(void)p_editingDidEndNotification:(id)arg1 ;
-(void)editingDidEnd;
-(id)initWithShapeStyle:(id)arg1 defaultStorage:(id)arg2 ;
-(id)initWithParagraphStyle:(id)arg1 shapeStyle:(id)arg2 defaultText:(id)arg3 stylesheet:(id)arg4 ;
-(void)p_handleEndEditing;
-(Class)shapeInfoClass;
-(void)beginEditingWithViewController:(id)arg1 layout:(id)arg2 geometry:(id)arg3 delegate:(id)arg4 ;
-(id)initWithParagraphStyle:(id)arg1 shapeStyle:(id)arg2 defaultText:(id)arg3 ;
-(void)beginEditingInRect:(CGRect)arg1 interactiveCanvasController:(id)arg2 layout:(id)arg3 delegate:(id)arg4 ;
-(void)beginEditingInRect:(CGRect)arg1 interactiveCanvasController:(id)arg2 layout:(id)arg3 ;
-(void)beginEditingWithViewController:(id)arg1 geometry:(id)arg2 ;
-(id)editor;
-(void)dealloc;
-(BOOL)isEditing;
-(void)endEditing;
@end
