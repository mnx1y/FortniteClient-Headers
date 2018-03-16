//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable;
@protocol FBSetIdleTimerApplicationProtocol;

@interface FNFIdleTimeoutManager : NSObject
{
    NSHashTable *_clients;
    id <FBSetIdleTimerApplicationProtocol> _application;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_setApplication:(id)arg1;
- (void)removeNonIdlingClient:(id)arg1;
- (void)addNonIdlingClient:(id)arg1;
- (id)init;

@end

