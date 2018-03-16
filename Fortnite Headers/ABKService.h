//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ABKPersistentData, ABKServerResponseHandler, NSString, NSURLSession;
@protocol ABKAppboyEndpointDelegate;

@interface ABKService : NSObject
{
    NSString *_baseUrl;
    NSString *_apiKey;
    NSURLSession *_appboyUrlSession;
    id <ABKAppboyEndpointDelegate> _appboyEndpointDelegate;
    ABKServerResponseHandler *_responseHandler;
    ABKPersistentData *_persistentUserData;
    unsigned long long _backgroundConnectionTask;
}

@property unsigned long long backgroundConnectionTask; // @synthesize backgroundConnectionTask=_backgroundConnectionTask;
@property(retain) ABKPersistentData *persistentUserData; // @synthesize persistentUserData=_persistentUserData;
@property(retain) ABKServerResponseHandler *responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain) id <ABKAppboyEndpointDelegate> appboyEndpointDelegate; // @synthesize appboyEndpointDelegate=_appboyEndpointDelegate;
@property(retain) NSURLSession *appboyUrlSession; // @synthesize appboyUrlSession=_appboyUrlSession;
@property(copy) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(copy) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
- (void).cxx_destruct;
- (id)dictionaryToRequestJsonPayload:(id)arg1;
- (_Bool)setServerRequestBody:(id)arg1 URLRequest:(id)arg2;
- (void)setServerRequestHeader:(id)arg1;
- (id)buildURLRequest:(id)arg1;
- (id)getURLSessionWithTimeoutInterval:(double)arg1;
- (void)processRequest:(id)arg1;
- (void)dealloc;
- (id)getAppboyApiEndpoint:(id)arg1;
- (void)postOpenAppTriggerIfRequestWasForSessionStart:(id)arg1;
- (void)dataRequest:(id)arg1 finishedSuccessfully:(_Bool)arg2;
- (void)invalidateCurrentURLSession;
- (void)request:(id)arg1 finishedSuccessfully:(_Bool)arg2;
- (id)initWithBaseURL:(id)arg1 apiKey:(id)arg2 persistentUserData:(id)arg3;

@end

