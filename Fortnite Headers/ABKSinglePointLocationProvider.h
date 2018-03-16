//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString;

@interface ABKSinglePointLocationProvider : NSObject <CLLocationManagerDelegate>
{
    _Bool _isCollectingLocation;
    _Bool _isAuthorizedToPromptLocationAuthorization;
    _Bool _shouldLogLocation;
    CLLocationManager *_locationManager;
}

@property _Bool shouldLogLocation; // @synthesize shouldLogLocation=_shouldLogLocation;
@property _Bool isAuthorizedToPromptLocationAuthorization; // @synthesize isAuthorizedToPromptLocationAuthorization=_isAuthorizedToPromptLocationAuthorization;
@property _Bool isCollectingLocation; // @synthesize isCollectingLocation=_isCollectingLocation;
@property(retain) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)tryPromptForWhenInUseAuthorization;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)dealloc;
- (void)stopUpdatingLocation;
- (void)stopUpdatingLocationOnMainThread;
- (void)requestSingleLocationAndLogLocationEvent:(_Bool)arg1;
- (void)logSingleLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

