//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface FBAdCandidate : NSObject
{
    NSString *_adapterID;
    NSDictionary *_data;
    NSMutableDictionary *_trackersByType;
    NSMutableSet *_trackersFired;
}

+ (long long)trackerTypeFromString:(id)arg1;
@property(retain, nonatomic) NSMutableSet *trackersFired; // @synthesize trackersFired=_trackersFired;
@property(retain, nonatomic) NSMutableDictionary *trackersByType; // @synthesize trackersByType=_trackersByType;
@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *adapterID; // @synthesize adapterID=_adapterID;
- (void).cxx_destruct;
- (void)fireTrackers:(long long)arg1 withExtraData:(id)arg2;
- (id)initWithAdapterID:(id)arg1 data:(id)arg2 trackers:(id)arg3;

@end

