/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSManagedObjectID.h>

@interface _NSCoreManagedObjectID : NSManagedObjectID
+(BOOL)accessInstanceVariablesDirectly;
+(char*)generatedNameSuffix;
+(id)_retain_1;
+(void)_release_1;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(Class)classWithStore:(id)arg1 andEntity:(id)arg2 ;
+(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
+(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned)arg2 ;
+(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
+(void)_setStoreInfo1:(id)arg1 ;
+(id)_storeInfo1;
+(void)_storeDeallocated;
+(void)release;
+(id)retain;
+(id)alloc;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(int)version;
-(id)persistentStore;
-(id)_storeInfo1;
-(id)_storeIdentifier;
-(BOOL)_isPersistentStoreAlive;
-(oneway void)release;
-(id)retain;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)retainCount;
-(id)entityName;
-(BOOL)isTemporaryID;
-(id)entity;
-(id)URIRepresentation;
-(void)finalize;
@end

