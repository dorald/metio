//
//  MTTemperatureFormatter.m
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

#import "MTTemperatureFormatter.h"

@implementation MTTemperatureFormatter

- (NSString *)stringFromTemperature:(MTTemperature *)temperature {
    CGFloat temperatureValue = temperature.celsiusValue;
    return [NSString stringWithFormat:@"%.f°", temperatureValue];
}

@end
