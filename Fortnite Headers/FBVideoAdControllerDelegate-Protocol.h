//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBVideoAdController, NSError;

@protocol FBVideoAdControllerDelegate <NSObject>
- (void)controllerDidUnload:(FBVideoAdController *)arg1;
- (void)controllerWillLogImpression:(FBVideoAdController *)arg1;
- (void)controller:(FBVideoAdController *)arg1 didFailWithError:(NSError *)arg2;
- (void)controllerDidLoad:(FBVideoAdController *)arg1;
@end

