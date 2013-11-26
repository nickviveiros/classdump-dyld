/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSFileAccessArbiter.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessArbiter> {

	NSObject<OS_xpc_object>* _server;
	NSObject<OS_dispatch_queue>* _serverQueue;
	/*^block*/ id _serverEventHandler;
	NSObject<OS_dispatch_queue>* _queue;
	NSMutableDictionary* _presentersByID;
	NSMutableDictionary* _providersByID;

}
+(id)_operationQueueForPresenter:(id)arg1 ;
-(id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(BOOL)arg2 ;
-(void)revokeAccessClaimForID:(id)arg1 ;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 ;
-(void)revokeSubarbitrationClaimForID:(id)arg1 ;
-(void)cancelAccessClaimForID:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5 ;
-(void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2 ;
-(id)_idForReactor:(id)arg1 ;
-(void)_makePresenter:(id)arg1 saveChangesWithCompletionHandler:(/*^block*/ id)arg2 ;
-(id)_readRelinquishmentForPresenter:(id)arg1 ;
-(void)_makePresenter:(id)arg1 relinquishToAccessClaimWithID:(id)arg2 ifNecessaryUsingSelector:(SEL)arg3 recordingRelinquishment:(id)arg4 continuer:(/*^block*/ id)arg5 ;
-(void)_makePresenter:(id)arg1 accommodateDeletionWithSubitemURL:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)_makePresenter:(id)arg1 accommodateDisconnectionWithCompletionHandler:(/*^block*/ id)arg2 ;
-(id)_writeRelinquishmentForPresenter:(id)arg1 ;
-(void)_makePresenter:(id)arg1 relinquishToReadingClaimWithID:(id)arg2 options:(unsigned)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)_makePresenter:(id)arg1 relinquishToWritingClaimWithID:(id)arg2 options:(unsigned)arg3 subitemURL:(id)arg4 completionHandler:(/*^block*/ id)arg5 ;
-(void)_makePresenter:(id)arg1 reacquireFromReadingClaimForID:(id)arg2 ;
-(void)_makePresenter:(id)arg1 reacquireFromWritingClaimForID:(id)arg2 ;
-(void)_makePresenter:(id)arg1 observeChangeWithSubitemURL:(id)arg2 ;
-(void)_makePresenter:(id)arg1 observeMoveToURL:(id)arg2 withSubitemURL:(id)arg3 ;
-(void)_makePresenterObserveDisconnection:(id)arg1 ;
-(void)_makePresenterObserveReconnection:(id)arg1 ;
-(void)_makePresenter:(id)arg1 observeUbiquityChangeWithSubitemURL:(id)arg2 ;
-(void)_makePresenter:(id)arg1 observeVersionChangeOfKind:(id)arg2 withClientID:(id)arg3 name:(id)arg4 subitemURL:(id)arg5 ;
-(void)_makePresenter:(id)arg1 setLastPresentedItemEventIdentifier:(unsigned long long)arg2 ;
-(void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 forAccessClaimWithID:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)_makeProvider:(id)arg1 cancelProvidingItemAtURL:(id)arg2 forAccessClaimWithID:(id)arg3 ;
-(void)_makeProvider:(id)arg1 observePresentationChangeOfKind:(id)arg2 withPresenterID:(id)arg3 url:(id)arg4 newURL:(id)arg5 completionHandler:(/*^block*/ id)arg6 ;
-(id)initWithServer:(id)arg1 queue:(id)arg2 eventHandler:(/*^block*/ id)arg3 ;
-(id)filePresenters;
-(void)addFileProvider:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)removeFileProvider:(id)arg1 ;
-(id)fileProviders;
-(id)idForFileReactor:(id)arg1 ;
-(void)handleMessage:(id)arg1 ;
-(void)handleCanceledServer;
-(void)dealloc;
-(void)addFilePresenter:(id)arg1 ;
-(void)removeFilePresenter:(id)arg1 ;
-(void)finalize;
@end
