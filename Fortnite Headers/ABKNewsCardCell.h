//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKCardCell.h"

@class ABKThemableCardBodyLabel, ABKThemableCardStaticLinkLabel, ABKThemableCardTitleLabel, UIImageView;

@interface ABKNewsCardCell : ABKCardCell
{
    UIImageView *_cardImage;
    ABKThemableCardTitleLabel *_title;
    ABKThemableCardBodyLabel *_cardDescription;
    ABKThemableCardStaticLinkLabel *_link;
}

@property(retain, nonatomic) ABKThemableCardStaticLinkLabel *link; // @synthesize link=_link;
@property(retain, nonatomic) ABKThemableCardBodyLabel *cardDescription; // @synthesize cardDescription=_cardDescription;
@property(retain, nonatomic) ABKThemableCardTitleLabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *cardImage; // @synthesize cardImage=_cardImage;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

