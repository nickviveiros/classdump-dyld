/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SCATPointPickerDelegate <NSObject>
@required
-(void)pointPickerDidFinishSweeping:(id)arg1;
-(void)pointPicker:(id)arg1 didPickPoint:(CGPoint)arg2;
-(void)pointPicker:(id)arg1 didSweepIntoFocusContext:(id)arg2 isRefiningPoint:(BOOL)arg3;
-(void)pointPicker:(id)arg1 didSweepOutOfFocusContext:(id)arg2 isRefiningPoint:(BOOL)arg3;
@end

