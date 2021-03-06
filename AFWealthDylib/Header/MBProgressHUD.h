//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSString, NSTimer, UIButton, UIFont, UILabel;
@protocol MBProgressHUDDelegate;


typedef NS_ENUM(NSInteger, MBProgressHUDMode) {
    /// UIActivityIndicatorView.
    MBProgressHUDModeIndeterminate,
    /// A round, pie-chart like, progress view.
    MBProgressHUDModeDeterminate,
    /// Horizontal progress bar.
    MBProgressHUDModeDeterminateHorizontalBar,
    /// Ring-shaped progress view.
    MBProgressHUDModeAnnularDeterminate,
    /// Shows a custom view.
    MBProgressHUDModeCustomView,
    /// Shows only labels.
    MBProgressHUDModeText
};

@interface MBProgressHUD : UIView

+ (id)HUDForView:(id)arg1;
+ (id)allHUDsForView:(id)arg1;
+ (unsigned long long)hideAllHUDsForView:(id)arg1 animated:(_Bool)arg2;
+ (_Bool)hideHUDForView:(id)arg1 animated:(_Bool)arg2;
+ (id)showHUDAddedTo:(id)arg1 animated:(_Bool)arg2;
- (void)animationFinished:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
@property int animationType; // @synthesize animationType;
- (void)cleanUp;
@property(nonatomic) UIButton *confirmButton; // @synthesize confirmButton;
@property(retain) UIView *customView; // @synthesize customView;
- (void)dealloc;
@property __weak id <MBProgressHUDDelegate> delegate; // @synthesize delegate;
@property(retain) UIFont *detailsLabelFont; // @synthesize detailsLabelFont;
@property(copy) NSString *detailsLabelText; // @synthesize detailsLabelText;
- (void)deviceOrientationDidChange:(id)arg1;
@property _Bool dimBackground; // @synthesize dimBackground;
- (void)done;
- (void)drawRect:(struct CGRect)arg1;
@property float graceTime; // @synthesize graceTime;
@property(retain) NSTimer *graceTimer; // @synthesize graceTimer;
- (void)handleGraceTimer:(id)arg1;
- (void)handleMinShowTimer:(id)arg1;
- (void)hide:(_Bool)arg1;
- (void)hide:(_Bool)arg1 afterDelay:(double)arg2;
- (void)hideDelayed:(id)arg1;
- (void)hideUsingAnimation:(_Bool)arg1;
@property(retain) UIView *indicator; // @synthesize indicator;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithWindow:(id)arg1;
@property(getter=isSquare) _Bool square; // @synthesize square;
@property(retain) UIFont *labelFont; // @synthesize labelFont;
@property(copy) NSString *labelText; // @synthesize labelText;
- (void)launchExecution;
- (void)layoutSubviews;
@property float margin; // @synthesize margin;
@property float minShowTime; // @synthesize minShowTime;
@property(retain) NSTimer *minShowTimer; // @synthesize minShowTimer;
@property struct CGSize minSize; // @synthesize minSize;
@property int mode; // @synthesize mode;
- (id)observableKeypaths;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property float opacity; // @synthesize opacity;
@property float progress; // @synthesize progress;
- (void)registerForKVO;
- (void)registerForNotifications;
@property _Bool removeFromSuperViewOnHide; // @synthesize removeFromSuperViewOnHide;
@property(retain) NSDate *showStarted; // @synthesize showStarted;
@property struct CGSize size; // @synthesize size;
@property _Bool taskInProgress; // @synthesize taskInProgress;
- (void)setTransformForCurrentOrientation:(_Bool)arg1;
@property float xOffset; // @synthesize xOffset;
@property float yOffset; // @synthesize yOffset;
- (void)setupLabels;
- (void)show:(_Bool)arg1;
- (void)showUsingAnimation:(_Bool)arg1;
- (void)showWhileExecuting:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 animated:(_Bool)arg4;
- (void)unregisterFromKVO;
- (void)unregisterFromNotifications;
- (void)updateIndicators;
- (void)updateUIForKeypath:(id)arg1;

@end

