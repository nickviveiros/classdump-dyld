/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray, NSError, SKPaymentTransaction, SKPayment, NSString, NSDate, NSData;

@interface SKPaymentTransactionInternal : NSObject {

	NSArray* _downloads;
	NSError* _error;
	SKPaymentTransaction* _originalTransaction;
	SKPayment* _payment;
	NSString* _temporaryIdentifier;
	NSDate* _transactionDate;
	NSString* _transactionIdentifier;
	NSData* _transactionReceipt;
	int _transactionState;

}
-(void)dealloc;
@end
