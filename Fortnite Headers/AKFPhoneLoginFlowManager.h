//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AKFAccountKitPhoneLoginDelegate-Protocol.h"

@class AKFAccountKit, AKFAppEventsLogger, NSString;
@protocol AKFAccessToken, AKFAccountKitPhoneLoginDelegate;

@interface AKFPhoneLoginFlowManager : NSObject <AKFAccountKitPhoneLoginDelegate>
{
    AKFAccountKit *_accountKit;
    AKFAppEventsLogger *_appEventsLogger;
    _Bool _valid;
    id <AKFAccountKitPhoneLoginDelegate> _phoneLoginDelegate;
}

@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) __weak id <AKFAccountKitPhoneLoginDelegate> phoneLoginDelegate; // @synthesize phoneLoginDelegate=_phoneLoginDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) AKFAppEventsLogger *appEventsLogger;
- (void)accountKitPhoneLoginDidStart:(id)arg1;
- (void)accountKit:(id)arg1 phoneLoginDidFailWithError:(id)arg2;
- (void)accountKit:(id)arg1 phoneLoginDidCompleteWithAuthorizationCode:(id)arg2 state:(id)arg3;
- (void)accountKit:(id)arg1 phoneLoginDidCompleteWithToken:(id)arg2 state:(id)arg3;
- (void)setConfirmationCode:(id)arg1;
- (void)logInWithPhoneNumber:(id)arg1 state:(id)arg2 sendToFacebook:(_Bool)arg3;
- (void)cancel;
@property(readonly, nonatomic) id <AKFAccessToken> accessToken;
- (id)initWithAccountKit:(id)arg1 phoneLoginDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

