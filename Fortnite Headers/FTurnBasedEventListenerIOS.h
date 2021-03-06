//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GKLocalPlayerListener-Protocol.h"

@class NSString;

@interface FTurnBasedEventListenerIOS : NSObject <GKLocalPlayerListener>
{
    struct FTurnBasedEventDelegate *_owner;
}

- (struct FString)getMatchIDFromMatch:(id)arg1;
- (void)player:(id)arg1 receivedTurnEventForMatch:(id)arg2 didBecomeActive:(_Bool)arg3;
- (void)player:(id)arg1 receivedExchangeRequest:(id)arg2 forMatch:(id)arg3;
- (void)player:(id)arg1 receivedExchangeReplies:(id)arg2 forCompletedExchange:(id)arg3 forMatch:(id)arg4;
- (void)player:(id)arg1 receivedExchangeCancellation:(id)arg2 forMatch:(id)arg3;
- (void)player:(id)arg1 matchEnded:(id)arg2;
- (void)player:(id)arg1 didRequestMatchWithPlayers:(id)arg2;
- (void)player:(id)arg1 didAcceptInvite:(id)arg2;
- (void)player:(id)arg1 wantsToPlayChallenge:(id)arg2;
- (void)player:(id)arg1 issuedChallengeWasCompleted:(id)arg2 byFriend:(id)arg3;
- (void)player:(id)arg1 didReceiveChallenge:(id)arg2;
- (void)player:(id)arg1 didCompleteChallenge:(id)arg2 issuedByFriend:(id)arg3;
- (void)dealloc;
- (id)initWithOwner:(struct FTurnBasedEventDelegate *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

