//
//  MTStoryFormViewController.h
//  Metio
//
//  Created by Ayan Yenbekbay on 9/20/15.
//  Copyright (c) 2015 Anvilabs, LLC.
//

#import <ReactiveCocoa/ReactiveCocoa.h>
#import "STPopup.h"

@protocol MTStoryFormViewControllerDelegate <NSObject>

@required
- (RACSignal *)createStoryWithText:(NSString *)text image:(UIImage *)image;

@end

@interface MTStoryFormViewController : UIViewController

#pragma mark Properties

@property (weak, nonatomic) id<MTStoryFormViewControllerDelegate> delegate;

#pragma mark Methods

- (instancetype)initWithTintColor:(UIColor *)tintColor;

@end
