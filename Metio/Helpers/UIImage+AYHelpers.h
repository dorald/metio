//
//  UIImage+AYHelpers.h
//  AYToolbox
//
//  Created by Ayan Yenbekbay on 6/16/15.
//  Copyright (c) 2015 Anvilabs, LLC.
//

#import <UIKit/UIKit.h>

@interface UIImage (AYHelpers)

+ (instancetype)imageWithColor:(UIColor *)color;
+ (instancetype)convertViewToImage:(UIView *)view;

@end
