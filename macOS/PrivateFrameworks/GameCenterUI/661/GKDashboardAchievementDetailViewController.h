//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterUI/GKDetailViewController.h>

@class GKAchievement, GKAchievementIconView, NSButton, NSTextField;

@interface GKDashboardAchievementDetailViewController : GKDetailViewController
{
    GKAchievementIconView *_iconView;
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
    NSTextField *_progressLabel;
    NSTextField *_disabledLabel;
    NSButton *_firstButton;
    NSButton *_secondButton;
    GKAchievement *_achievement;
    GKAchievement *_localAchievement;
}

@property(retain, nonatomic) GKAchievement *localAchievement; // @synthesize localAchievement=_localAchievement;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
@property(nonatomic) NSButton *secondButton; // @synthesize secondButton=_secondButton;
@property(nonatomic) NSButton *firstButton; // @synthesize firstButton=_firstButton;
@property(nonatomic) NSTextField *disabledLabel; // @synthesize disabledLabel=_disabledLabel;
@property(nonatomic) NSTextField *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(nonatomic) NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) GKAchievementIconView *iconView; // @synthesize iconView=_iconView;
- (void)share:(id)arg1;
- (void)challenge:(id)arg1;
- (void)configureForAchievements;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAchievement:(id)arg1 localAchievement:(id)arg2;

@end

