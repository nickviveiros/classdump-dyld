/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DADaemonIMAPNotes.bundle/DADaemonIMAPNotes
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DAAgent.h>
#import <DADaemonIMAPNotes/DAIMAPNotesFolderListConsumer.h>
#import <DADaemonIMAPNotes/DANotesUpdateConsumer.h>
#import <DADaemonIMAPNotes/DADataclassLockWatcher.h>
#import <DADaemonSupport/PCConnectionManagerDelegate.h>

@class NSMutableSet, NSMutableArray, NSLock, PCConnectionManager, NSSet;

@interface DAIMAPNotesAgent : DAAgent <DAIMAPNotesFolderListConsumer, DANotesUpdateConsumer, DADataclassLockWatcher, PCConnectionManagerDelegate> {

	NSMutableSet* _currentlySyncingFolderIds;
	NSMutableArray* _outstandingFolderRequests;
	NSLock* _folderItemSyncRequestLock;
	PCConnectionManager* _pcManager;
	int _outstandingInvocationCount;
	BOOL _isShuttingDown;
	/*^block*/ id _fullyShutDownCallback;
	BOOL _accountHasShutDown;
	NSSet* _lastFolderSetRegisteredForPush;

}
-(void)startMonitoring;
-(void)dealloc;
-(id)waiterID;
-(void)_appendSyncRequestsForFolders:(id)arg1 remoteChanges:(BOOL)arg2 ;
-(void)_tearDownNotesNotifications;
-(void)_syncAllNotesFoldersWithRemoteChanges:(BOOL)arg1 ;
-(void)refreshFolderListRequireChangedFolders:(BOOL)arg1 isUserRequested:(BOOL)arg2 ;
-(void)_setUpNotesNotifications;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(int)arg2 isUserRequested:(BOOL)arg3 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)_appendSyncRequest:(id)arg1 ;
-(void)_fireWaitingFolderItemSyncRequests;
-(void)_reallySyncRequest:(id)arg1 ;
-(void)_syncRequest:(id)arg1 ;
-(void)notesFolderWithId:(id)arg1 failedToSyncWithStatus:(int)arg2 error:(id)arg3 ;
-(void)connectionManager:(id)arg1 handleEvent:(int)arg2 ;
-(void)syncResultForNotesFolder:(id)arg1 noteContext:(id)arg2 newTag:(id)arg3 previousTag:(id)arg4 actions:(id)arg5 results:(id)arg6 changeSet:(id)arg7 notesToDeleteAfterSync:(id)arg8 isInitialSync:(BOOL)arg9 moreAvailable:(BOOL)arg10 ;
-(void)failedToRetrieveFolderListWithStatus:(int)arg1 andError:(id)arg2 ;
-(void)successfullyRetrievedFolderList;
-(void)_validateAndSyncWithRemoteChanges:(BOOL)arg1 ;
-(void)_setLastFolderSetRegisteredForPush:(id)arg1 ;
-(void)_callShutdownBlockIfAppropriate;
-(BOOL)_clearChangeHistoriesInContext:(id)arg1 changeSet:(id)arg2 ;
-(void)_finishSyncResultOnMainThreadForFolderWithId:(id)arg1 ;
-(id)_copyDAActionsFromNoteChanges:(id)arg1 inStore:(id)arg2 mutableNotesToDeleteAfterSync:(id)arg3 ;
-(void)_syncInLockRequest:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

