/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayerInternal, NSArray, NSString, NSError;

@interface AVPlayer : NSObject {

	AVPlayerInternal* _player;

}

@property (setter=_setDisplaysUsedForPlayback:,nonatomic,copy) NSArray * _displaysUsedForPlayback; 
@property (nonatomic,readonly) int _externalProtectionStatus; 
@property (getter=isAudioPlaybackEnabledAtAllRates,nonatomic,readonly) BOOL audioPlaybackEnabledAtAllRates; 
@property (assign,nonatomic) float minRateForAudioPlayback; 
@property (assign,nonatomic) float maxRateForAudioPlayback; 
@property (assign,nonatomic) BOOL allowsPixelBufferPoolSharing; 
@property (assign,nonatomic) BOOL disallowsAMRAudio; 
@property (assign,nonatomic) BOOL appliesMediaSelectionCriteriaAutomatically; 
@property (nonatomic,copy) NSString * audioOutputDeviceUniqueID; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) NSError * error; 
+(id)playerWithURL:(id)arg1 ;
+(id)playerWithPlayerItem:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfCurrentItem;
+(BOOL)automaticallyNotifiesObserversOfRate;
+(id)keyPathsForValuesAffectingRate;
+(BOOL)automaticallyNotifiesObserversOfMasterClock;
+(BOOL)automaticallyNotifiesObserversOfUserVolume;
+(BOOL)automaticallyNotifiesObserversOfVibrationPattern;
+(BOOL)automaticallyNotifiesObserversOfVolume;
+(id)keyPathsForValuesAffectingVolume;
+(BOOL)automaticallyNotifiesObserversOfMuted;
+(id)keyPathsForValuesAffectingMuted;
+(BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;
+(id)keyPathsForValuesAffectingActionAtItemEnd;
+(BOOL)automaticallyNotifiesObserversOfClosedCaptionDisplayEnabled;
+(id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+(BOOL)automaticallyNotifiesObserversOfAllowsExternalPlayback;
+(BOOL)automaticallyNotifiesObserversOfUsesExternalPlaybackWhileExternalScreenIsActive;
+(BOOL)automaticallyNotifiesObserversOfExternalPlaybackActive;
+(BOOL)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+(BOOL)automaticallyNotifiesObserversOfAllowsAirPlayVideo;
+(BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;
+(BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+(BOOL)automaticallyNotifiesObserversOfDisallowsAllowsPixelBufferPoolSharing;
+(BOOL)automaticallyNotifiesObserversOfDisallowsAMRAudio;
+(BOOL)automaticallyNotifiesObserversOfDisallowsHardwareAcceleratedVideoDecoder;
+(BOOL)automaticallyNotifiesObserversOfAppliesMediaSelectionCriteriaAutomatically;
+(BOOL)automaticallyNotifiesObserversOfAudioOutputDeviceUniqueID;
+(BOOL)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;
+(void)initialize;
-(void)_addLayer:(id)arg1 ;
-(void)_removeLayer:(id)arg1 ;
-(id)_cachedValueForKey:(id)arg1 ;
-(void)_conformContentLayer:(id)arg1 toSize:(CGSize)arg2 ;
-(id)_stateDispatchQueue;
-(id)_currentSubtitlesPayload;
-(id)_weakReference;
-(id)expectedAssetTypes;
-(id)vibrationPattern;
-(BOOL)autoSwitchStreamVariants;
-(BOOL)preparesItemsForPlaybackAsynchronously;
-(id)initWithPlayerItem:(id)arg1 ;
-(BOOL)_insertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)_didFinishSuspension:(id)arg1 ;
-(BOOL)_iapdExtendedModeIsActive;
-(void)_playerDestinationPixelBufferAttributesDidChange:(id)arg1 ;
-(void)_checkDefaultsWriteForPerformanceLogging;
-(void)_removeFPListeners;
-(void)_removeAllLayers;
-(void)_willAccessKVOForKey:(id)arg1 ;
-(void)_didAccessKVOForKey:(id)arg1 ;
-(OpaqueCMClockRef)masterClock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(id)_currentItem;
-(void)_setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(int)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1 ;
-(OpaqueFigPlayerRef)_figPlayer;
-(void)_coordinateWithRemovalOfItem:(id)arg1 ;
-(BOOL)_removeItem:(id)arg1 ;
-(BOOL)_attachItem:(id)arg1 andPerformOperation:(int)arg2 withObject:(id)arg3 ;
-(void)_addFPListeners;
-(BOOL)_airPlayVideoActive;
-(id)_propertyStorage;
-(BOOL)_externalPlaybackActive;
-(void)_attachLayersToFigPlayer;
-(void)_setNeroVideoGravityOnFigPlayer;
-(BOOL)_insertPlaybackItemOfItem:(id)arg1 inPlayerQueueAfterPlaybackItemOfItem:(id)arg2 ;
-(void)_changeStatusToFailedWithError:(id)arg1 ;
-(void)_createPlayer:(int)arg1 item:(id)arg2 preparationRequested:(BOOL)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)_setCurrentItem:(id)arg1 ;
-(void)setRate:(float)arg1 withVolumeRampDuration:(SCD_Struct_CM4)arg2 ;
-(void)seekToDate:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)seekToTime:(SCD_Struct_CM4)arg1 toleranceBefore:(SCD_Struct_CM4)arg2 toleranceAfter:(SCD_Struct_CM4)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(int)_createPrerollID;
-(int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)_unregisterAndReturnRetainedPrerollCompletionHandler;
-(float)_playerVolume;
-(BOOL)_isMuted;
-(int)_defaultActionAtItemEnd;
-(int)_actionAtItemEnd;
-(void)_setActionAtItemEnd:(int)arg1 allowingAdvance:(BOOL)arg2 ;
-(BOOL)_isClosedCaptionDisplayEnabled;
-(BOOL)_allowsExternalPlayback;
-(BOOL)_usesExternalPlaybackWhileExternalScreenIsActive;
-(BOOL)_usesAudioOnlyModeForExternalPlayback;
-(void)_detachLayersFromFigPlayer;
-(id)_playerLayers;
-(id)_fpNotificationNames;
-(id)_copyPerformanceDataForCurrentItem;
-(id)initWithDispatchQueue:(id)arg1 ;
-(id)dispatchQueue;
-(BOOL)_isChangingValueForKey:(id)arg1 ;
-(void)_currentItemStatusIsReadyToPlay;
-(void)_advanceCurrentItemAccordingToFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
-(void)setExpectedAssetTypes:(id)arg1 ;
-(void)_removeAllItems;
-(void)seekToTime:(SCD_Struct_CM4)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)setRate:(float)arg1 time:(SCD_Struct_CM4)arg2 atHostTime:(SCD_Struct_CM4)arg3 ;
-(void)prerollAtRate:(float)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)cancelPendingPrerolls;
-(void)prerollOperationDidComplete:(BOOL)arg1 notificationPayload:(CFDictionaryRef)arg2 ;
-(void)setVibrationPattern:(id)arg1 ;
-(BOOL)allowsAirPlayVideo;
-(void)setAllowsAirPlayVideo:(BOOL)arg1 ;
-(BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;
-(void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)arg1 ;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 ;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_CM4)arg1 queue:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(id)_pixelBufferAttributeMediator;
-(void)_setFigPlaybackItemToMakeCurrent:(OpaqueFigPlaybackItemRef)arg1 ;
-(void)_setCurrentSubtitlesPayload:(id)arg1 ;
-(BOOL)_shouldLogPerformanceData;
-(void)_logPerformanceDataForPreviousItem;
-(void)_logPerformanceDataForCurrentItem;
-(BOOL)_outputObscuredDueToInsufficientExternalProtection;
-(id)_playbackDisplaysForFigPlayer;
-(id)_displaysUsedForPlayback;
-(void)_setDisplaysUsedForPlayback:(id)arg1 ;
-(void)removeAudioPlaybackRateLimits;
-(BOOL)isAudioPlaybackEnabledAtAllRates;
-(void)setMinRateForAudioPlayback:(float)arg1 ;
-(float)minRateForAudioPlayback;
-(void)setMaxRateForAudioPlayback:(float)arg1 ;
-(float)maxRateForAudioPlayback;
-(BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
-(BOOL)_hasAssociatedOnscreenAVPlayerLayer;
-(BOOL)_shouldDetachContentLayersFromFigPlayer;
-(id)_clientName;
-(BOOL)_allowsPixelBufferPoolSharing;
-(BOOL)allowsPixelBufferPoolSharing;
-(void)setAllowsPixelBufferPoolSharing:(BOOL)arg1 ;
-(BOOL)_disallowsAMRAudio;
-(BOOL)_disallowsHardwareAcceleratedVideoDecoder;
-(BOOL)disallowsHardwareAcceleratedVideoDecoder;
-(void)setDisallowsHardwareAcceleratedVideoDecoder:(BOOL)arg1 ;
-(BOOL)_appliesMediaSelectionCriteriaAutomatically;
-(BOOL)appliesMediaSelectionCriteriaAutomatically;
-(id)mediaSelectionCriteriaForMediaCharacteristic:(id)arg1 ;
-(id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)arg1 ;
-(id)_audioOutputDeviceUniqueID;
-(id)audioOutputDeviceUniqueID;
-(void)setAudioOutputDeviceUniqueID:(id)arg1 ;
-(void)setAutoSwitchStreamVariants:(BOOL)arg1 ;
-(SCD_Struct_CM4)currentTime;
-(BOOL)isAirPlayVideoActive;
-(void)play;
-(BOOL)isExternalPlaybackActive;
-(BOOL)disallowsAMRAudio;
-(void)setDisallowsAMRAudio:(BOOL)arg1 ;
-(void)setActionAtItemEnd:(int)arg1 ;
-(void)seekToDate:(id)arg1 ;
-(void)_setEQPreset:(int)arg1 ;
-(void)seekToTime:(SCD_Struct_CM4)arg1 ;
-(void)removeTimeObserver:(id)arg1 ;
-(void)_setStoppingFadeOutDuration:(float)arg1 ;
-(BOOL)allowsExternalPlayback;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(BOOL)isClosedCaptionDisplayEnabled;
-(BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
-(void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1 ;
-(void)setClosedCaptionDisplayEnabled:(BOOL)arg1 ;
-(float)_userVolume;
-(void)_setUserVolume:(float)arg1 ;
-(int)externalPlaybackType;
-(id)externalPlaybackVideoGravity;
-(void)_setPreferredLanguageList:(id)arg1 ;
-(id)playerAVAudioSession;
-(void)setExternalPlaybackVideoGravity:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_CM4)arg1 toleranceBefore:(SCD_Struct_CM4)arg2 toleranceAfter:(SCD_Struct_CM4)arg3 ;
-(void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1 ;
-(BOOL)usesAudioOnlyModeForExternalPlayback;
-(BOOL)_CALayerDestinationIsTVOut;
-(void)_setCALayerDestinationIsTVOut:(BOOL)arg1 ;
-(int)actionAtItemEnd;
-(BOOL)_resumePlayback:(double)arg1 error:(id*)arg2 ;
-(BOOL)outputObscuredDueToInsufficientExternalProtection;
-(void)_setClientName:(id)arg1 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)setMuted:(BOOL)arg1 ;
-(void)_enumerateItemsUsingBlock:(/*^block*/ id)arg1 ;
-(void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1 ;
-(void)setAppliesMediaSelectionCriteriaAutomatically:(BOOL)arg1 ;
-(int)_externalProtectionStatus;
-(void)prepareItem:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2 ;
-(void)setPreparesItemsForPlaybackAsynchronously:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)_items;
-(id)currentItem;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(void)pause;
-(int)status;
-(BOOL)isMuted;
-(float)rate;
-(id)error;
-(void)finalize;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)_rate;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

