//
//  CLLocation+MTHelpers.m
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

#import "CLLocation+MTHelpers.h"

static NSTimeInterval const kRecentLocationMaximumElapsedTimeInterval = 5;

@implementation CLLocation (MTHelpers)

- (BOOL)isStale {
    return [self elapsedTimeInterval] > kRecentLocationMaximumElapsedTimeInterval;
}

- (NSTimeInterval)elapsedTimeInterval {
    return [[NSDate date] timeIntervalSinceDate:self.timestamp];
}

@end
