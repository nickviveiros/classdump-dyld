/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataAccess/DATaskManager.h>
#import <DAEAS/ASPolicyManagerDelegate.h>

@class ASPolicyManager, NSError, NSMutableDictionary, ASTask, ASGetOptionsTask;

@interface ASTaskManager : DATaskManager <ASPolicyManagerDelegate> {

	ASPolicyManager* _policyManager;
	NSError* _versionError;
	NSMutableDictionary* _taskIDToTask;
	ASTask* _modalGetOptionsTask;
	ASGetOptionsTask* _getOptionsTask;
	ASTask* _modalPolicyKeyUpdateTask;

}
-(void)dealloc;
-(id)protocol;
-(id)policyManager;
-(id)policyKey;
-(id)easProtocolVersion;
-(id)initWithAccount:(id)arg1 policyManager:(id)arg2 ;
-(id)stateString;
-(void)cancelTask:(id)arg1 ;
-(void)getOptionsTask:(id)arg1 completedWithStatus:(int)arg2 supportedCommands:(id)arg3 supportedVersions:(id)arg4 error:(id)arg5 ;
-(void)policyManagerUpdatedPolicy:(id)arg1 ;
-(void)cancelAllTasks;
-(void)taskRequestModal:(id)arg1 ;
-(void)taskEndModal:(id)arg1 ;
-(void)requestEASVersionWithDelegateTask:(id)arg1 ;
-(void)updatePolicyKeyWithDelegateTask:(id)arg1 ;
-(id)accountDeviceManagementID;
-(void)taskDidFinish:(id)arg1 ;
-(void)_populateVersionDescriptions;
-(void)setEASProtocolVersion:(id)arg1 ;
-(void)_finishAllTasksWithError:(id)arg1 ;
-(void)finishTask:(id)arg1 withError:(id)arg2 ;
-(BOOL)taskIsModal:(id)arg1 ;
-(void)policyManagerFailedToUpdatePolicy:(id)arg1 ;
-(id)_version;
-(void)taskManagerDidAddTask:(id)arg1 ;
-(void)taskManagerWillRemoveTask:(id)arg1 ;
-(BOOL)_hasTasksIndicatingARunningSync;
-(id)deviceID;
-(void)shutdown;
-(void)cancelTaskWithID:(int)arg1 ;
@end
