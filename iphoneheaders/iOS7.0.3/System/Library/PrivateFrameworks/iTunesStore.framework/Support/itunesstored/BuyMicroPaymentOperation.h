/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, StoreKitClientIdentity, NSData, MicroPaymentQueueResponse;

@interface BuyMicroPaymentOperation : ISOperation {

	NSString* _applicationUsername;
	NSString* _buyParameters;
	StoreKitClientIdentity* _clientIdentity;
	NSString* _productIdentifier;
	int _quantity;
	NSData* _requestData;
	MicroPaymentQueueResponse* _response;

}

@property (copy) NSString * applicationUsername; 
@property (copy) NSString * buyParameters; 
@property (retain) StoreKitClientIdentity * clientIdentity; 
@property (copy) NSString * productIdentifier; 
@property (assign) int quantity; 
@property (copy) NSData * requestData; 
@property (readonly) MicroPaymentQueueResponse * response; 
-(id)clientIdentity;
-(void)setClientIdentity:(id)arg1 ;
-(void)_runPurchaseOperation;
-(id)_copyFullBuyParameters;
-(id)buyParameters;
-(void)setBuyParameters:(id)arg1 ;
-(id)productIdentifier;
-(id)applicationUsername;
-(int)quantity;
-(id)requestData;
-(void)setApplicationUsername:(id)arg1 ;
-(void)setProductIdentifier:(id)arg1 ;
-(void)setQuantity:(int)arg1 ;
-(void)setRequestData:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(id)response;
@end
