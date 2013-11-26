/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IDSCore/IDSCore-Structs.h>
#import <IDSCore/IDSProfileMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSNumber;

@interface IDSProfileValidateHandleMessage : IDSProfileMessage <NSCopying> {

	NSString* _uri;
	NSNumber* _responseVettingStatus;
	NSString* _deviceName;

}

@property (setter=setURI:,copy) NSString * URI;                 //@synthesize uri=_uri - In the implementation block
@property (copy) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (copy) NSNumber * responseVettingStatus;              //@synthesize responseVettingStatus=_responseVettingStatus - In the implementation block
-(id)bagKey;
-(void)setDeviceName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)deviceName;
-(id)responseVettingStatus;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setResponseVettingStatus:(id)arg1 ;
-(id)messageBody;
-(id)URI;
-(void)setURI:(id)arg1 ;
-(id)requiredKeys;
@end
