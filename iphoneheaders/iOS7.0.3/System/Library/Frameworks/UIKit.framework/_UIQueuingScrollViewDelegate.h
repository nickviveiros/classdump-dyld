/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIQueuingScrollViewDelegate <NSObject>
@required
-(void)queuingScrollView:(id)arg1 willManuallyScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(BOOL)arg5;
-(void)queuingScrollView:(id)arg1 didCommitManualScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(int)arg5 animated:(BOOL)arg6 canComplete:(BOOL)arg7;
-(void)queuingScrollView:(id)arg1 didEndManualScroll:(BOOL)arg2 toRevealView:(id)arg3 direction:(int)arg4 animated:(BOOL)arg5 didFinish:(BOOL)arg6 didComplete:(BOOL)arg7;
-(void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;
-(void)queuingScrollViewDidFinishScrolling:(id)arg1;
-(BOOL)queuingScrollViewShouldLayoutSubviews:(id)arg1;
@end

