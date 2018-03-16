//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBNCardTextContent;
@protocol FBNAsset;

@interface FBNCardHeroConfiguration : NSObject
{
    double _height;
    id <FBNAsset> _background;
    FBNCardTextContent *_content;
    unsigned long long _contentVerticalAlignment;
}

+ (id)configurationFromDictionary:(id)arg1 assetsController:(id)arg2;
@property(readonly, nonatomic) unsigned long long contentVerticalAlignment; // @synthesize contentVerticalAlignment=_contentVerticalAlignment;
@property(readonly, nonatomic) FBNCardTextContent *content; // @synthesize content=_content;
@property(readonly, nonatomic) id <FBNAsset> background; // @synthesize background=_background;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)arg1 assetsController:(id)arg2;

@end

