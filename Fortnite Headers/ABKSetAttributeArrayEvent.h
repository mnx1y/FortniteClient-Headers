//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKEvent.h"

@class NSArray, NSString;

@interface ABKSetAttributeArrayEvent : ABKEvent
{
    NSString *_customAttributeKey;
    NSArray *_stringArray;
}

@property(retain) NSArray *stringArray; // @synthesize stringArray=_stringArray;
@property(copy) NSString *customAttributeKey; // @synthesize customAttributeKey=_customAttributeKey;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getDataAsJson;
- (id)getType;
- (id)initWithCustomAttributeArrayKey:(id)arg1 array:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
