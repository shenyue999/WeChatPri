//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMPingOperation, MMPingOperationData, NSData, NSError;

@protocol MMPingOperationDelegate <NSObject>
- (void)pingOperationTimeout:(MMPingOperation *)arg1;
- (void)pingOperation:(MMPingOperation *)arg1 didRecieveResponse:(NSData *)arg2 withPingResult:(MMPingOperationData *)arg3;
- (void)pingOperation:(MMPingOperation *)arg1 errorSendingPacket:(NSData *)arg2 withError:(NSError *)arg3;

@optional
- (void)pingOperation:(MMPingOperation *)arg1 didSendPacket:(NSData *)arg2;
@end
