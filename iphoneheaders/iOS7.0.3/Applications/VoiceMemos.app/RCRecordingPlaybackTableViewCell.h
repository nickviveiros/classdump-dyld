/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <MediaPlayer/MPDetailSliderDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol RCRecordingPlaybackTableViewCellDelegate;
@class UITextField, UILabel, UIView, UIButton, MPDetailSlider, _RCPlaybackToolbar, UIActivityIndicatorView, RCSavedRecording;

@interface RCRecordingPlaybackTableViewCell : UITableViewCell <MPDetailSliderDelegate, UITextFieldDelegate> {

	UITextField* _titleField;
	UILabel* _dateLabel;
	UILabel* _durationLabel;
	BOOL _playbackControlsInitialized;
	BOOL _wantsToResumePlayback;
	BOOL _recordingIsAvailable;
	UIView* _playbackControlsContainerView;
	UIButton* _playPauseButton;
	MPDetailSlider* _detailScrubber;
	_RCPlaybackToolbar* _actionsToolbar;
	UIActivityIndicatorView* _activityIndicatorView;
	BOOL _enabled;
	BOOL _playbackControlsVisible;
	BOOL _blank;
	BOOL _noContentCell;
	BOOL _preparing;
	<RCRecordingPlaybackTableViewCellDelegate>* _delegate;
	RCSavedRecording* _recording;
	int _playbackState;
	double _duration;

}

@property (assign,nonatomic,__weak) <RCRecordingPlaybackTableViewCellDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RCSavedRecording * recording;                                              //@synthesize recording=_recording - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                             //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsVisible;                                              //@synthesize playbackControlsVisible=_playbackControlsVisible - In the implementation block
@property (assign,getter=isBlank,nonatomic) BOOL blank;                                                 //@synthesize blank=_blank - In the implementation block
@property (assign,getter=isNoContentCell,nonatomic) BOOL noContentCell;                                 //@synthesize noContentCell=_noContentCell - In the implementation block
@property (assign,nonatomic) int playbackState;                                                         //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) double currentTime; 
@property (assign,nonatomic) double duration;                                                           //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isPreparing,nonatomic) BOOL preparing;                                         //@synthesize preparing=_preparing - In the implementation block
+(id)disabledBackgroundColor;
-(BOOL)isBlank;
-(void)setPlaybackControlsVisible:(BOOL)arg1 ;
-(void)commitEditedChanges;
-(void)setNoContentCell:(BOOL)arg1 ;
-(void)setBlank:(BOOL)arg1 ;
-(void)setRecording:(id)arg1 ;
-(void)setPreparing:(BOOL)arg1 ;
-(id)_createTitleField;
-(id)_createSubtitleLabel;
-(void)_updateForRecordingAvailability;
-(void)_updateTitleEditingState;
-(void)_updatePlaybackButton;
-(void)_updateDurationDisplay;
-(void)_endTitleEditing;
-(BOOL)playbackControlsVisible;
-(void)_initializePlaybackControls;
-(void)_setPlaybackControlsVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_createPlayPauseButton;
-(void)_playPauseAction:(id)arg1 ;
-(void)_shareAction:(id)arg1 ;
-(int)rc_tableViewScrollPositionForScrollPosition:(int)arg1 ;
-(BOOL)isNoContentCell;
-(double)currentTime;
-(int)playbackState;
-(void)setCurrentTime:(double)arg1 ;
-(int)_displayPlaybackState;
-(void)detailSliderTrackingDidBegin:(id)arg1 ;
-(void)detailSliderTrackingDidEnd:(id)arg1 ;
-(void)detailSliderTrackingDidCancel:(id)arg1 ;
-(void)detailSlider:(id)arg1 didChangeValue:(float)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)description;
-(id)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_updateTextColors;
-(void)willTransitionToState:(unsigned)arg1 ;
-(id)editableTextField;
-(void)setPlaybackState:(int)arg1 ;
-(void)_deleteAction:(id)arg1 ;
-(void)_updateLabels;
-(id)recording;
-(id)_assetImageForButtonPlaybackState:(int)arg1 ;
-(BOOL)isPreparing;
-(void).cxx_destruct;
-(void)_editAction:(id)arg1 ;
@end

