/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Videos.app/Videos
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSOperation.h>
#import <StoreServices/SSRequestDelegate.h>

@class NSLock, VideosRentalData, NSDictionary, NSRunLoop;

@interface VideosRentalDataLoadOperation : NSOperation <SSRequestDelegate> {

	BOOL _didCheckOutKeys;
	NSLock* _lock;
	int _reason;
	VideosRentalData* _rentalData;
	NSDictionary* _rentalInformation;
	NSRunLoop* _runLoop;

}

@property (readonly) int loadReason; 
@property (readonly) VideosRentalData * rentalData; 
@property (readonly) NSDictionary * rentalInformation; 
-(id)initWithRentalData:(id)arg1 reason:(int)arg2 ;
-(id)rentalData;
-(id)rentalInformation;
-(id)_rentalInformationFromMedia;
-(BOOL)_checkOutRentalKeys;
-(void)_setRentalInformation:(id)arg1 ;
-(void)_setDidCheckOutKeys:(BOOL)arg1 ;
-(id)_newRentalCheckoutRequest;
-(void)_runCheckoutRequest:(id)arg1 ;
-(BOOL)_didCheckOutKeys;
-(void)_setRunLoop:(id)arg1 ;
-(void)_timer:(id)arg1 ;
-(void)_startCheckoutRequest:(id)arg1 ;
-(id)_runLoop;
-(void)_delayedStopRunLoop:(id)arg1 ;
-(id)initWithRentalData:(id)arg1 ;
-(int)loadReason;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(id)init;
-(void)cancel;
-(void)main;
-(void)_stopRunLoop;
-(void).cxx_destruct;
@end
