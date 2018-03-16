//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface FBSDKAppEventsState : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_mutableEvents;
    unsigned long long _numSkipped;
    NSString *_tokenString;
    NSString *_appID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSString *appID; // @synthesize appID=_appID;
@property(readonly, copy) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(readonly) unsigned long long numSkipped; // @synthesize numSkipped=_numSkipped;
- (void).cxx_destruct;
- (id)JSONStringForEvents:(_Bool)arg1;
- (_Bool)isCompatibleWithTokenString:(id)arg1 appID:(id)arg2;
- (_Bool)isCompatibleWithAppEventsState:(id)arg1;
- (_Bool)areAllEventsImplicit;
- (void)addEvent:(id)arg1 isImplicit:(_Bool)arg2;
- (void)addEventsFromAppEventState:(id)arg1;
@property(readonly, copy) NSArray *events;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithToken:(id)arg1 appID:(id)arg2;
- (id)init;

@end

