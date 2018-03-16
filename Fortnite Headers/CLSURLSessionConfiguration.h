//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSURLCache;

@interface CLSURLSessionConfiguration : NSObject <NSCopying>
{
    NSDictionary *_additionalHeaders;
    NSURLCache *_URLCache;
    unsigned long long _cookiePolicy;
    _Bool _allowsCellularAccess;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
}

+ (id)backgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)backgroundSessionConfiguration:(id)arg1;
+ (id)ephemeralSessionConfiguration;
+ (id)defaultSessionConfiguration;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(nonatomic) unsigned long long HTTPCookieAcceptPolicy; // @synthesize HTTPCookieAcceptPolicy=_cookiePolicy;
@property(copy, nonatomic) NSDictionary *HTTPAdditionalHeaders; // @synthesize HTTPAdditionalHeaders=_additionalHeaders;
@property(retain, nonatomic) NSURLCache *URLCache; // @synthesize URLCache=_URLCache;
- (void).cxx_destruct;
@property(nonatomic) _Bool sessionSendsLaunchEvents;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

