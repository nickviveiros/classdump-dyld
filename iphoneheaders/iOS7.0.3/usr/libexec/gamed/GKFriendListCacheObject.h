/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <gamed/GKPlayerOwnedListCacheObject.h>

@interface GKFriendListCacheObject : GKPlayerOwnedListCacheObject

@property (assign,nonatomic,@dynamic) BOOL common; 
+(Class)entryClass;
+(id)cacheFriendList:(id)arg1 withTimeToLive:(double)arg2 forProfile:(id)arg3 managedObjectContext:(id)arg4 commonFriends:(BOOL)arg5 ;
+(id)entityName;
-(void)populateFriendNamesFromServerRepresentationDictionary:(id)arg1 ;
-(id)internalRepresentation;
-(id)playerIDs;
@end
