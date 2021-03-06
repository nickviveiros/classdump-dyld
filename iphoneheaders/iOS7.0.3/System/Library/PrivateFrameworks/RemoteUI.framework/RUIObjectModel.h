/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKit/UIWebViewDelegate.h>
#import <RemoteUI/RUITableViewDelegate.h>
#import <RemoteUI/RUIPasscodeViewDelegate.h>
#import <RemoteUI/RUIPageDelegate.h>

@protocol RUIObjectModelDelegate;
@class NSString, NSURL, NSMutableArray, NSMutableDictionary, NSDictionary, NSTimer, UIAlertView, NSArray, RUIPage;

@interface RUIObjectModel : NSObject <UIWebViewDelegate, RUITableViewDelegate, RUIPasscodeViewDelegate, RUIPageDelegate> {

	NSString* _name;
	NSURL* _sourceURL;
	NSURL* _scriptURL;
	NSString* _inlineScript;
	NSString* _validationFunction;
	NSMutableArray* _defaultPages;
	NSMutableDictionary* _namedPages;
	NSMutableArray* _displayedPages;
	int _currentPage;
	<RUIObjectModelDelegate>* _delegate;
	OpaqueJSContextRef _ctx;
	NSDictionary* _alert;
	NSDictionary* _clientInfo;
	NSDictionary* _serverInfo;
	NSDictionary* _updateInfo;
	int _refreshDelay;
	NSString* _refreshURL;
	NSTimer* _refreshTimer;
	int _nextButtonStyle;
	UIAlertView* _confirmationAlert;
	UIAlertView* _secondConfirmationAlert;
	NSDictionary* _confirmationAttributes;
	NSString* _confirmationURLString;
	NSString* _confirmationButtonName;

}

@property (nonatomic,readonly) NSArray * displayedPages; 
@property (nonatomic,readonly) NSArray * pages; 
@property (nonatomic,readonly) NSArray * defaultPages;                   //@synthesize defaultPages=_defaultPages - In the implementation block
@property (nonatomic,readonly) NSDictionary * namedPages;                //@synthesize namedPages=_namedPages - In the implementation block
@property (nonatomic,readonly) NSArray * allPages; 
@property (nonatomic,readonly) RUIPage * visiblePage; 
@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSURL * sourceURL;                          //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,retain) NSURL * scriptURL;                          //@synthesize scriptURL=_scriptURL - In the implementation block
@property (nonatomic,retain) NSString * inlineScript;                    //@synthesize inlineScript=_inlineScript - In the implementation block
@property (nonatomic,retain) NSString * validationFunction;              //@synthesize validationFunction=_validationFunction - In the implementation block
@property (nonatomic,retain) NSDictionary * alert;                       //@synthesize alert=_alert - In the implementation block
@property (nonatomic,retain) NSDictionary * clientInfo;                  //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * serverInfo;                  //@synthesize serverInfo=_serverInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * updateInfo;                  //@synthesize updateInfo=_updateInfo - In the implementation block
@property (assign,nonatomic) int refreshDelay;                           //@synthesize refreshDelay=_refreshDelay - In the implementation block
@property (nonatomic,retain) NSString * refreshURL;                      //@synthesize refreshURL=_refreshURL - In the implementation block
@property (assign,nonatomic) int nextButtonStyle;                        //@synthesize nextButtonStyle=_nextButtonStyle - In the implementation block
+(id)objectModelForXMLNamed:(id)arg1 ;
-(id)sourceURL;
-(void)setSourceURL:(id)arg1 ;
-(void)presentInParentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)displayedPages;
-(void)presentWithBlock:(/*^block*/ id)arg1 ;
-(id)defaultPages;
-(id)clientInfo;
-(id)postbackDictionary;
-(id)visiblePage;
-(void)tableViewOM:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)tableViewOM:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3 ;
-(void)setAlert:(id)arg1 ;
-(id)alert;
-(BOOL)validateWithFunction:(id)arg1 ;
-(id)alertView;
-(void)setClientInfo:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(BOOL)goBack;
-(id)postbackData;
-(void)setServerInfo:(id)arg1 ;
-(id)serverInfo;
-(id)pages;
-(void)setPages:(id)arg1 ;
-(void)RUIPage:(id)arg1 toggledEditing:(BOOL)arg2 ;
-(void)RUIPage:(id)arg1 pressedNavBarButton:(id)arg2 ;
-(void)tableViewOMDidChange:(id)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(void)setValidationFunction:(id)arg1 ;
-(unsigned)supportedInterfaceOrientationsForRUIPage:(id)arg1 ;
-(id)validationFunction;
-(id)updateInfo;
-(void)setUpdateInfo:(id)arg1 ;
-(id)rowForFormField:(id)arg1 ;
-(id)alertViewInWindow:(id)arg1 ;
-(id)allPages;
-(void)setJSGlobalContext:(OpaqueJSContextRef)arg1 ;
-(void)_cleanupRefreshTimer;
-(void)_nextPage;
-(void)back:(id)arg1 ;
-(void)_handleLinkPress:(id)arg1 attributes:(id)arg2 ;
-(void)_populatePageNavItem:(id)arg1 withNextButton:(BOOL)arg2 ;
-(void)refreshTimeout;
-(id)_firstPageForPresentation;
-(id)namedPages;
-(id)invokeScriptFunction:(id)arg1 withArguments:(id)arg2 ;
-(BOOL)hasAttributeOrAttributeFunctionNamed:(id)arg1 withAttributes:(id)arg2 ;
-(id)stringForAttributeName:(id)arg1 withAttributes:(id)arg2 ;
-(BOOL)hasSecondConfirmationAttributes:(id)arg1 ;
-(void)_presentSecondConfirmationWithAttributes:(id)arg1 ;
-(void)_handleLinkPressConfirmed:(id)arg1 attributes:(id)arg2 ;
-(void)_handleButtonPressConfirmed:(id)arg1 attributes:(id)arg2 ;
-(void)_cleanupConfirmation;
-(BOOL)hasConfirmationAttributes:(id)arg1 ;
-(void)_presentConfirmationWithAttributes:(id)arg1 ;
-(id)relativeURLWithString:(id)arg1 ;
-(void)_handleButtonPress:(id)arg1 attributes:(id)arg2 ;
-(id)_pageContainingTableView:(id)arg1 ;
-(BOOL)tableViewOM:(id)arg1 deleteRowAtIndexPath:(id)arg2 ;
-(void)passcodeViewOM:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3 ;
-(id)newNavigationControllerForPresentation;
-(void)_displaySupplementalPage:(id)arg1 ;
-(void)configureTableView:(id)arg1 ;
-(void)configureRow:(id)arg1 ;
-(void)configureSection:(id)arg1 ;
-(Class)customHeaderClassForSection:(id)arg1 ;
-(Class)customFooterClassForSection:(id)arg1 ;
-(Class)customTableCellClassForTableViewRow:(id)arg1 ;
-(id)tableHeaderViewForAttributes:(id)arg1 ;
-(id)tableFooterViewForAttributes:(id)arg1 ;
-(void)remoteUIWebViewControllerDonePressed:(id)arg1 ;
-(id)scriptURL;
-(void)setScriptURL:(id)arg1 ;
-(id)inlineScript;
-(void)setInlineScript:(id)arg1 ;
-(int)refreshDelay;
-(void)setRefreshDelay:(int)arg1 ;
-(id)refreshURL;
-(void)setRefreshURL:(id)arg1 ;
-(int)nextButtonStyle;
-(void)setNextButtonStyle:(int)arg1 ;
-(void)runScript;
-(BOOL)prepareScriptContext;
-(id)objectForJSValue:(OpaqueJSValueRef)arg1 ;
@end

