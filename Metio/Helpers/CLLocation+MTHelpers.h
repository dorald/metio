//
//  CLLocation+MTHelpers.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

#import <CoreLocation/CoreLocation.h>

@interface CLLocation (MTHelpers)

- (BOOL)isStale;

@end
