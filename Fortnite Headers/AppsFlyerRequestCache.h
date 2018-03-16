//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface AppsFlyerRequestCache : NSObject
{
    NSMutableArray *cachedRequests;
    _Bool isSendingCachedData;
    NSString *cacheDirectoryPath;
    _Bool failedToInitialize;
}

+ (unsigned long long)getCacheSize:(id)arg1;
+ (id)instance;
- (void).cxx_destruct;
- (void)deleteRequest:(id)arg1;
- (void)sendNextCachedEvents;
- (void)processCache;
- (void)sendCachedRequest:(id)arg1;
- (id)getCachedRequests;
- (unsigned long long)getCacheSize;
- (void)cacheRequest:(id)arg1;
- (void)initialize;
- (id)getCacheDirectoryPath;

@end

