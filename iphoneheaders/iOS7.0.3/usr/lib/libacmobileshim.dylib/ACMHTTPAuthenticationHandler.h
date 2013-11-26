/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libacmobileshim.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libacmobileshim.dylib/ACMHTTPHandler.h>

@class ACMInitialToken, NSString, NSDate;

@interface ACMHTTPAuthenticationHandler : ACMHTTPHandler {

	ACMInitialToken* _token;
	NSString* _policyVersion;
	id _request;
	int _tryCounter;
	NSDate* _startInvocationDate;

}

@property (nonatomic,retain) ACMInitialToken * token;                   //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSString * policyVersion;                  //@synthesize policyVersion=_policyVersion - In the implementation block
@property (nonatomic,retain) id request;                                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSString * realm; 
@property (assign,nonatomic) int tryCounter;                            //@synthesize tryCounter=_tryCounter - In the implementation block
@property (nonatomic,retain) NSDate * startInvocationDate;              //@synthesize startInvocationDate=_startInvocationDate - In the implementation block
+(id)handlerWithDelegate:(id)arg1 request:(id)arg2 ;
+(id)handlerWithDelegate:(id)arg1 token:(id)arg2 ;
-(id)realm;
-(void)setRequest:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)request;
-(id)requestBody;
-(id)token;
-(void)setToken:(id)arg1 ;
-(void)setPolicyVersion:(id)arg1 ;
-(void)launchMethodInvocation;
-(void)setTryCounter:(int)arg1 ;
-(void)setStartInvocationDate:(id)arg1 ;
-(id)policyVersion;
-(int)tryCounter;
-(id)startInvocationDate;
-(BOOL)isConnectionError:(id)arg1 ;
-(BOOL)shouldRetryMethodInvocationAfterError:(id)arg1 ;
-(void)processResponse:(id)arg1 ;
-(void)didStopWithError:(id)arg1 ;
@end
