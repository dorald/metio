//
//  UIFont+MTHelpers.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2015 Anvilabs, LLC.
//

@interface UIFont (MTHelpers)

+ (instancetype)mt_regularFontOfSize:(CGFloat)size;
+ (instancetype)mt_lightFontOfSize:(CGFloat)size;
+ (instancetype)mt_boldFontOfSize:(CGFloat)size;

+ (CGFloat)conditionsFontSize;
+ (CGFloat)storyCeilFontSize;
+ (CGFloat)storyFloorFontSize;
+ (CGFloat)largeFontSize;
+ (CGFloat)mediumFontSize;
+ (CGFloat)smallFontSize;

@end
