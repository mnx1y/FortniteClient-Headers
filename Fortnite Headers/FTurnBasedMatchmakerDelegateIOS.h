//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GKTurnBasedMatchmakerViewControllerDelegate-Protocol.h"

@class NSString;

@interface FTurnBasedMatchmakerDelegateIOS : NSObject <GKTurnBasedMatchmakerViewControllerDelegate>
{
    struct FTurnBasedMatchmakerDelegate *_delegate;
}

- (void)turnBasedMatchmakerViewControllerWasCancelled:(id)arg1;
- (void)turnBasedMatchmakerViewController:(id)arg1 playerQuitForMatch:(id)arg2;
- (void)turnBasedMatchmakerViewController:(id)arg1 didFindMatch:(id)arg2;
- (void)turnBasedMatchmakerViewController:(id)arg1 didFailWithError:(id)arg2;
- (id)initWithDelegate:(struct FTurnBasedMatchmakerDelegate *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

