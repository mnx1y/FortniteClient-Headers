//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLSNetworkClient, NSError, NSString;

@protocol CLSNetworkClientDelegate <NSObject>
- (_Bool)networkClientCanUseBackgroundSessions:(CLSNetworkClient *)arg1;

@optional
- (void)networkClient:(CLSNetworkClient *)arg1 didFinishUploadWithPath:(NSString *)arg2 error:(NSError *)arg3;
@end

