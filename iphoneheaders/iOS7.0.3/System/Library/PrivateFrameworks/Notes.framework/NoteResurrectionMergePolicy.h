/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/NSMergePolicy.h>

@interface NoteResurrectionMergePolicy : NSMergePolicy
+(id)sharedNoteResurrectionMergePolicy;
-(id)snapshotFromRecord:(id)arg1 ;
-(id)localStoreForNote:(id)arg1 ;
-(BOOL)accountExists:(id)arg1 ;
-(BOOL)resolveConflicts:(id)arg1 error:(id*)arg2 ;
@end
