//
//  MTBearingFormatter.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

@interface MTBearingFormatter : NSObject

+ (NSString *)cardinalDirectionStringFromBearing:(CGFloat)bearing;
+ (NSString *)abbreviatedCardinalDirectionStringFromBearing:(CGFloat)bearing;

@end
