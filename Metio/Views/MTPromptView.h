//
//  MTPromptView.h
//  Metio
//
//  Created by Ayan Yenbekbay on 30/05/2014.
//  Copyright (c) 2014 Ayan Yenbekbay.
//

@protocol MTPromptViewDelegate <NSObject>

- (void)promptForReview;
- (void)promptForFeedback;
- (void)promptClose;

@end

@interface MTPromptView : UIView

#pragma mark Properties

@property (weak) id<MTPromptViewDelegate> delegate;

#pragma mark Methods

+ (NSNumber *)numberOfUsesForCurrentVersion;
+ (void)incrementUsesForCurrentVersion;

@end
