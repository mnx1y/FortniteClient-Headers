//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class ABKServerConfig, CLLocation, CLLocationManager, NSString;

@interface ABKSignificantChangeLocationProvider : NSObject <CLLocationManagerDelegate>
{
    _Bool _isCollectingLocation;
    _Bool _isLocationCollectionServerEnabled;
    _Bool _isAuthorizedToPromptLocationAuthorization;
    ABKServerConfig *_serverConfig;
    CLLocationManager *_locationManager;
    CLLocation *_lastLocation;
    long long _distanceFilter;
    double _timeFilter;
}

@property _Bool isAuthorizedToPromptLocationAuthorization; // @synthesize isAuthorizedToPromptLocationAuthorization=_isAuthorizedToPromptLocationAuthorization;
@property double timeFilter; // @synthesize timeFilter=_timeFilter;
@property long long distanceFilter; // @synthesize distanceFilter=_distanceFilter;
@property _Bool isLocationCollectionServerEnabled; // @synthesize isLocationCollectionServerEnabled=_isLocationCollectionServerEnabled;
@property _Bool isCollectingLocation; // @synthesize isCollectingLocation=_isCollectingLocation;
@property(retain) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain) ABKServerConfig *serverConfig; // @synthesize serverConfig=_serverConfig;
- (void).cxx_destruct;
- (void)tryPromptForAlwaysAuthorization;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)stopUpdatingLocationCollection;
- (void)startSignificantChangeCollection;
- (_Bool)shouldLogLocation:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setConfigValuesFromServerConfig;
- (void)locationServerConfigUpdated:(id)arg1;
- (void)updateConfigFromAppboyOptions:(id)arg1;
- (void)dealloc;
- (void)singleLocationLogged:(id)arg1;
- (id)initWithServerConfig:(id)arg1 andAppboyOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
