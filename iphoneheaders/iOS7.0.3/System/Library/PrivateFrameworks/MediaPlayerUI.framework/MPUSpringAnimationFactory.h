/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayerUI/MPUAnimationFactory.h>

@interface MPUSpringAnimationFactory : MPUAnimationFactory {

	float _damping;
	float _mass;
	float _stiffness;
	float _velocity;

}

@property (assign,nonatomic) float damping;                //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) float mass;                   //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) float stiffness;              //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) float velocity;               //@synthesize velocity=_velocity - In the implementation block
-(float)stiffness;
-(void)setVelocity:(float)arg1 ;
-(void)setStiffness:(float)arg1 ;
-(void)setDamping:(float)arg1 ;
-(void)setMass:(float)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(float)damping;
-(float)velocity;
-(float)mass;
@end
