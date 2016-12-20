//
//  MTWeatherUpdateCache.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

#import "MTWeatherUpdate.h"

@interface MTWeatherUpdateCache : NSObject

- (MTWeatherUpdate *)latestWeatherUpdate;
- (BOOL)archiveWeatherUpdate:(MTWeatherUpdate *)update;

@end
