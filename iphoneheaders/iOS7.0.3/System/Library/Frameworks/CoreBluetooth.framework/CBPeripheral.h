/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol CBPeripheralDelegate;
@class NSUUID, NSString, NSNumber, NSMutableArray, CBCentralManager, NSMutableDictionary, NSArray;

@interface CBPeripheral : NSObject <NSCopying> {

	<CBPeripheralDelegate>* _delegate;
	CFUUIDRef _UUID;
	NSUUID* _identifier;
	NSString* _name;
	NSNumber* _RSSI;
	int _state;
	NSMutableArray* _services;
	CBCentralManager* _centralManager;
	NSMutableDictionary* _attributes;
	BOOL _isPaired;
	BOOL _isConnectedToSystem;

}

@property (assign,nonatomic,__weak) <CBPeripheralDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CFUUIDRef UUID;                                      //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (retain) NSNumber * RSSI;                                                 //@synthesize RSSI=_RSSI - In the implementation block
@property (@dynamic,readonly) BOOL isConnected; 
@property (assign) int state;                                                       //@synthesize state=_state - In the implementation block
@property (retain) NSArray * services;                                              //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) BOOL isPaired;                                       //@synthesize isPaired=_isPaired - In the implementation block
@property (nonatomic,readonly) BOOL isConnectedToSystem;                            //@synthesize isConnectedToSystem=_isConnectedToSystem - In the implementation block
-(BOOL)isConnected;
-(void)sendMsg:(int)arg1 args:(id)arg2 ;
-(id)sendSyncMsg:(int)arg1 args:(id)arg2 ;
-(void)setOrphan;
-(id)initWithCentralManager:(id)arg1 dictionary:(id)arg2 ;
-(void)handleDisconnection;
-(void)setAttribute:(id)arg1 forHandle:(id)arg2 ;
-(void)handleConnection:(BOOL)arg1 ;
-(void)handleConnectionStateUpdated:(BOOL)arg1 ;
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(void)removeAttributeForHandle:(id)arg1 ;
-(id)attributeForHandle:(id)arg1 ;
-(void)sendMsg:(int)arg1 requiresConnected:(BOOL)arg2 args:(id)arg3 ;
-(void)handleNameUpdated:(id)arg1 ;
-(void)handleServicesChanged:(id)arg1 ;
-(void)handleRSSIUpdated:(id)arg1 ;
-(void)handleServicesDiscovered:(id)arg1 ;
-(void)handlePairingRequested:(id)arg1 ;
-(void)handlePairingCompleted:(id)arg1 ;
-(void)handleUnpaired:(id)arg1 ;
-(void)handleWritesExecuted:(id)arg1 ;
-(void)handleServiceIncludedServicesDiscovered:(id)arg1 ;
-(void)handleServiceCharacteristicsDiscovered:(id)arg1 ;
-(void)handleCharacteristicValueUpdated:(id)arg1 ;
-(void)handleCharacteristicValueWritten:(id)arg1 ;
-(void)handleCharacteristicValueNotifying:(id)arg1 ;
-(void)handleCharacteristicDescriptorsDiscovered:(id)arg1 ;
-(void)handleDescriptorValueUpdated:(id)arg1 ;
-(void)handleDescriptorValueWritten:(id)arg1 ;
-(void)setRSSI:(id)arg1 ;
-(void)invalidateAllAttributes;
-(void)handleAttributeEvent:(id)arg1 args:(id)arg2 attributeSelector:(SEL)arg3 delegateSelector:(SEL)arg4 ;
-(void)handleServiceEvent:(id)arg1 serviceSelector:(SEL)arg2 delegateSelector:(SEL)arg3 ;
-(void)handleCharacteristicEvent:(id)arg1 characteristicSelector:(SEL)arg2 delegateSelector:(SEL)arg3 ;
-(void)handleDescriptorEvent:(id)arg1 descriptorSelector:(SEL)arg2 delegateSelector:(SEL)arg3 ;
-(void)readRSSI;
-(void)discoverIncludedServices:(id)arg1 forService:(id)arg2 ;
-(void)reliablyWriteValues:(id)arg1 forCharacteristics:(id)arg2 ;
-(void)setBroadcastValue:(BOOL)arg1 forCharacteristic:(id)arg2 ;
-(void)discoverDescriptorsForCharacteristic:(id)arg1 ;
-(void)readValueForDescriptor:(id)arg1 ;
-(void)writeValue:(id)arg1 forDescriptor:(id)arg2 ;
-(void)acceptPairing:(BOOL)arg1 ofType:(id)arg2 withPasskey:(id)arg3 ;
-(BOOL)isConnectedToSystem;
-(oneway void)release;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setName:(id)arg1 ;
-(CFUUIDRef)UUID;
-(id)name;
-(id)identifier;
-(BOOL)isPaired;
-(void)unpair;
-(id)RSSI;
-(void)setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2 ;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 type:(int)arg3 ;
-(void)readValueForCharacteristic:(id)arg1 ;
-(void)discoverCharacteristics:(id)arg1 forService:(id)arg2 ;
-(BOOL)hasTag:(id)arg1 ;
-(void)untag:(id)arg1 ;
-(void)tag:(id)arg1 ;
-(void)discoverServices:(id)arg1 ;
-(void)setServices:(id)arg1 ;
-(id)services;
-(void)pair;
@end

