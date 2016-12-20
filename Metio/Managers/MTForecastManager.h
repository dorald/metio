//
//  MTForecastManager.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

#import "LMAddress.h"
#import <ReactiveCocoa/ReactiveCocoa.h>

@interface MTForecastManager : NSObject

- (RACSignal *)fetchWeatherUpdateForAddress:(LMAddress *)address;

@end
