/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreData/CoreData-Structs.h>
@class NSArray, NSString, NSExpression, NSDictionary;

@interface NSPropertyMapping : NSObject {

	void* _reserved;
	NSArray* _transformValidations;
	NSArray* _propertyTransforms;
	NSString* _name;
	NSExpression* _valueExpression;
	NSDictionary* _userInfo;
	struct {
		unsigned _isInUse : 1;
		unsigned _reservedPropertyMapping : 31;
	}  _propertyMappingFlags;

}
+(void)initialize;
-(void)setValueExpression:(id)arg1 ;
-(void)_setPropertyTransforms:(id)arg1 ;
-(void)_setTransformValidations:(id)arg1 ;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(void)_setIsEditable:(BOOL)arg1 ;
-(id)valueExpression;
-(id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2 ;
-(id)_propertyTransforms;
-(id)_transformValidations;
-(id)initWithName:(id)arg1 valueExpression:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isEditable;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)userInfo;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setUserInfo:(id)arg1 ;
@end
