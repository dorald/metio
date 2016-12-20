//
//  MTApplicationManager.m
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

#import "MTApplicationManager.h"

#import "MTWeatherManager.h"
#import "MTWeatherViewController.h"
#import "MTLocationManager.h"

@interface MTApplicationManager ()

@property (nonatomic) MTWeatherManager *weatherManager;
@property (nonatomic) MTLocationManager *locationManager;

@end

@implementation MTApplicationManager

- (instancetype)init {
    self = [super init];
    if (!self) { return nil; }
    
    self.rootViewController = [MTWeatherViewController new];
    self.weatherManager = [MTWeatherManager new];
    self.locationManager = [MTLocationManager new];
    
    return self;
}

- (RACSignal *)performBackgroundFetch {
    return [self.weatherManager.updateWeatherCommand execute:self];
}

- (void)setMinimumBackgroundFetchIntervalForApplication:(UIApplication *)application {
    if ([self.locationManager authorizationStatusEqualTo:kCLAuthorizationStatusAuthorizedAlways]) {
        [application setMinimumBackgroundFetchInterval:UIApplicationBackgroundFetchIntervalMinimum];
    } else {
        [application setMinimumBackgroundFetchInterval:UIApplicationBackgroundFetchIntervalNever];
    }
}

@end
