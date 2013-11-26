/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSMutableSet, NSArray;

@interface WebPluginDatabase : NSObject {

	NSMutableDictionary* plugins;
	NSMutableSet* registeredMIMETypes;
	NSArray* plugInPaths;
	NSMutableSet* pluginInstanceViews;

}
+(void)setAdditionalWebPlugInPaths:(id)arg1 ;
+(id)sharedDatabase;
+(id)_defaultPlugInPaths;
+(void)closeSharedDatabase;
-(void)dealloc;
-(id)init;
-(void)close;
-(void)refresh;
-(id)plugins;
-(void)setPlugInPaths:(id)arg1 ;
-(id)pluginForMIMEType:(id)arg1 ;
-(void)_removePlugin:(id)arg1 ;
-(id)_scanForNewPlugins;
-(void)_addPlugin:(id)arg1 ;
-(id)pluginForExtension:(id)arg1 ;
-(BOOL)isMIMETypeRegistered:(id)arg1 ;
-(void)addPluginInstanceView:(id)arg1 ;
-(void)removePluginInstanceView:(id)arg1 ;
-(void)removePluginInstanceViewsFor:(id)arg1 ;
-(void)destroyAllPluginInstanceViews;
-(id)_plugInPaths;
@end
