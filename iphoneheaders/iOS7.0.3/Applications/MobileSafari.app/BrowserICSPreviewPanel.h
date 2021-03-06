/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/RotatablePopoverControllerDelegate.h>
#import <MobileSafari/BrowserPanel.h>

@class OpenInOtherAppActivityViewController, BrowserICSPreviewPanelNavController, RotatablePopoverController, EKICSPreviewController, NSString;

@interface BrowserICSPreviewPanel : NSObject <RotatablePopoverControllerDelegate, BrowserPanel> {

	OpenInOtherAppActivityViewController* _activityViewController;
	BrowserICSPreviewPanelNavController* _wrappingNavController;
	RotatablePopoverController* _activityPopover;
	EKICSPreviewController* _icsController;
	NSString* _filePath;

}
-(int)panelType;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
-(BOOL)shouldHideOnSuspend;
-(void)_openInOtherAppsButtonPressed:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(void)dealloc;
-(id)viewController;
-(id)activityViewController;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 ;
@end

