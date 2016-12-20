//
//  MTTemperatureFormatter.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

#import "MTTemperature.h"

@interface MTTemperatureFormatter : NSObject

- (NSString *)stringFromTemperature:(MTTemperature *)temperature;

@end
