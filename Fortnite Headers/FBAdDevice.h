//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBAdDevice : NSObject
{
}

+ (_Bool)systemVersionIsGreaterThanOrEqualToiOS9;
+ (_Bool)systemVersionIsGreaterThanOrEqualToiOS8;
+ (_Bool)systemVersionIsLessThan:(id)arg1;
+ (_Bool)systemVersionIsGreaterThanOrEqualTo:(id)arg1;
+ (id)systemBuildNumber;
+ (id)systemVersion;
+ (_Bool)isRunningOnPadInPhoneEmulator;
+ (_Bool)isSlowerDevice;
+ (unsigned long long)freeDiskBytes;
+ (unsigned long long)totalMemoryBytes;
+ (unsigned long long)freeMemoryBytes;
+ (struct FBAdDeviceBatteryInfo)deviceBatteryInfo;
+ (unsigned long long)adjustedFillRate;
+ (unsigned long long)freeDiskSpace;
+ (unsigned int)coreCount;
+ (_Bool)isPad;
+ (id)systemName;
+ (unsigned long long)deviceModel;
+ (id)model;
+ (id)architecture;
+ (id)machineName;
+ (id)machine;
+ (void)resetCache;
+ (void)initializeAndCacheValues;
+ (void)initialize;

@end
