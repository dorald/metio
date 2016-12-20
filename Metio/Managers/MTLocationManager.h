//
//  MTLocationManager.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

#import <ReactiveCocoa/ReactiveCocoa.h>

@interface MTLocationManager : NSObject

- (RACSignal *)requestWhenInUseAuthorization;
- (RACSignal *)updateCurrentLocation;
- (RACSignal *)reverseGeocodeLocation:(CLLocation *)location;
- (BOOL)authorizationStatusEqualTo:(CLAuthorizationStatus)status;

@end
