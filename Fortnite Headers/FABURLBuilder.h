//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableString;

@interface FABURLBuilder : NSObject
{
    NSMutableString *_URLString;
    unsigned long long _queryParams;
}

+ (id)URLWithBase:(id)arg1;
@property(nonatomic) unsigned long long queryParams; // @synthesize queryParams=_queryParams;
@property(retain, nonatomic) NSMutableString *URLString; // @synthesize URLString=_URLString;
- (void).cxx_destruct;
- (id)URL;
- (void)appendValue:(id)arg1 forQueryParam:(id)arg2;
- (void)escapeAndAppendComponent:(id)arg1;
- (void)appendComponent:(id)arg1;
- (id)escapeString:(id)arg1;
- (id)init;

@end

