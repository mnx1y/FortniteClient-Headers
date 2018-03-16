//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ABKPersistentData, ABKRequestDispatcher, NSTimer;

@interface ABKManager : NSObject
{
    NSTimer *_flushTimer;
    double _flushInterval;
    ABKPersistentData *_userData;
    ABKRequestDispatcher *_client;
    long long _requestProcessingPolicy;
}

@property(nonatomic) long long requestProcessingPolicy; // @synthesize requestProcessingPolicy=_requestProcessingPolicy;
@property(retain) ABKRequestDispatcher *client; // @synthesize client=_client;
@property(retain) ABKPersistentData *userData; // @synthesize userData=_userData;
@property(nonatomic) double flushInterval; // @synthesize flushInterval=_flushInterval;
@property(retain) NSTimer *flushTimer; // @synthesize flushTimer=_flushTimer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)shutdownServerCommunication;
- (void)processErrorNotification:(id)arg1;
- (void)postFeedback:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)reportGeofenceEvent:(id)arg1;
- (void)handleEventForDataFlush:(id)arg1;
- (void)handleEventForDataFlushNotification:(id)arg1;
- (void)requestImmediateDataFlush;
- (void)flushDeviceChanges:(id)arg1;
- (void)requestTemplateWithTriggerEvent:(id)arg1 triggerAction:(id)arg2;
- (void)requestGeofencesWithLocationRecordedEvent:(id)arg1;
- (void)startGeofenceRequestProcess;
- (void)requestFeedRefresh;
- (void)requestTriggerRefresh;
- (void)addRequestToFrontOfQueueAndFlushImmediately:(id)arg1;
- (void)processRequestQueueImmediately;
- (void)ensureRequestQueueProcessingIsScheduled;
- (void)addMetadataToEventForServerFlush:(id)arg1;
- (void)requestRefreshForNewMessagingSession;
- (void)requestRefreshForNewSessionWithDataRequest:(id)arg1;
- (void)requestRefreshForChangedUser;
- (void)requestRefreshForNewAnalyticsSessionAndIncludeFeed:(_Bool)arg1;
- (id)initWithApiKey:(id)arg1 requestProcessingPolicy:(long long)arg2 persistentData:(id)arg3;
- (id)init;

@end

