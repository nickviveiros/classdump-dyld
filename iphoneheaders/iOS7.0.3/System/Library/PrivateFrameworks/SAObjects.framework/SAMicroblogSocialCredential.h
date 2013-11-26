/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString;

@interface SAMicroblogSocialCredential : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSString * accessToken; 
@property (nonatomic,copy) NSString * personalizationPermission; 
@property (nonatomic,copy) NSString * socialNetwork; 
@property (nonatomic,copy) NSString * tokenSecret; 
+(id)socialCredential;
+(id)socialCredentialWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setAccessToken:(id)arg1 ;
-(id)accessToken;
-(id)encodedClassName;
-(id)socialNetwork;
-(void)setSocialNetwork:(id)arg1 ;
-(id)personalizationPermission;
-(void)setPersonalizationPermission:(id)arg1 ;
-(id)tokenSecret;
-(void)setTokenSecret:(id)arg1 ;
@end
