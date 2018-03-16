//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSFileManager, NSNumber, NSString;

@interface FABSettings : NSObject
{
    _Bool _reportingEnabled;
    _Bool _errorReportingEnabled;
    NSNumber *_logBufferSize;
    NSNumber *_maxErrors;
    NSNumber *_maxCustomKeys;
    NSDictionary *_settingsDictionary;
    NSString *_settingsPath;
    NSFileManager *_fileManager;
}

@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSString *settingsPath; // @synthesize settingsPath=_settingsPath;
@property(retain, nonatomic) NSDictionary *settingsDictionary; // @synthesize settingsDictionary=_settingsDictionary;
@property(readonly, nonatomic) NSNumber *maxCustomKeys; // @synthesize maxCustomKeys=_maxCustomKeys;
@property(readonly, nonatomic) NSNumber *maxErrors; // @synthesize maxErrors=_maxErrors;
@property(readonly, nonatomic) NSNumber *logBufferSize; // @synthesize logBufferSize=_logBufferSize;
@property(readonly, nonatomic) _Bool errorReportingEnabled; // @synthesize errorReportingEnabled=_errorReportingEnabled;
@property(readonly, nonatomic) _Bool reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
- (void).cxx_destruct;
- (id)settingsURLForEndpoint:(id)arg1 appInstanceIdentifer:(id)arg2 appIconHash:(id)arg3;
- (void)clearSettingsDictionary;
- (id)appStatus;
- (id)appSettings;
- (id)appSource;
- (id)appDisplayVersion;
- (id)appBuildVersion;
- (id)appPlatform;
- (id)appBundleIdentifier;
@property(readonly, nonatomic) _Bool appNeedsOnboarding;
@property(readonly, nonatomic) _Bool appUpdateRequired;
- (id)initWithSettingsPath:(id)arg1 fileManager:(id)arg2;

@end

