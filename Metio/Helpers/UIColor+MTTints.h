//
//  UIColor+MTTints.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2015 Anvilabs, LLC.
//

@interface UIColor (MTTints)

+ (instancetype)defaultColor;
+ (instancetype)hotColor;
+ (instancetype)warmerColor;
+ (instancetype)coolerColor;
+ (instancetype)coldColor;
- (instancetype)darkerColorByAmount:(CGFloat)amount;

@end
