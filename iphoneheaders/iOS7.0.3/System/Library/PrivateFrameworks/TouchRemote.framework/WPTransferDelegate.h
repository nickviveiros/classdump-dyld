/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol WPTransferDelegate <NSObject>
@required
-(void)transferDidUpdateAdvertiserState:(id)arg1;
-(void)transferDidUpdateScannerState:(id)arg1;
-(id)transferDidReceiveData:(id)arg1;
-(void)transferDidFailWithError:(id)arg1;
-(void)transferDidFailToStartAdvertising:(id)arg1;
-(void)transferDidFailToStartScanning:(id)arg1;
-(void)transferComplete;
@end

