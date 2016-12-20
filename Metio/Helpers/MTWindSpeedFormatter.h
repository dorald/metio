//
//  MTWindSpeedFormatter.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

@interface MTWindSpeedFormatter : NSObject

+ (NSString *)localizedStringForWindSpeed:(CGFloat)speed bearing:(CGFloat)bearing;

@end
