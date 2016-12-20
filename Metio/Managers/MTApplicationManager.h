//
//  MTApplicationManager.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

#import "MTWeatherViewController.h"
#import <ReactiveCocoa/ReactiveCocoa.h>

@interface MTApplicationManager : NSObject

@property (nonatomic) MTWeatherViewController *rootViewController;

- (RACSignal *)performBackgroundFetch;
- (void)setMinimumBackgroundFetchIntervalForApplication:(UIApplication *)application;

@end
