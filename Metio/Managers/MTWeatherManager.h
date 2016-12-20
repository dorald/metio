//
//  MTWeatherManager.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

#import <ReactiveCocoa/ReactiveCocoa.h>

@interface MTWeatherManager : NSObject

@property (nonatomic, readonly) RACSignal *locationName;
@property (nonatomic, readonly) RACSignal *status;
@property (nonatomic, readonly) RACSignal *conditionsImage;
@property (nonatomic, readonly) RACSignal *conditionsDescription;
@property (nonatomic, readonly) RACSignal *windDescription;
@property (nonatomic, readonly) RACSignal *precipitationDescription;
@property (nonatomic, readonly) RACSignal *temperatureDescription;
@property (nonatomic, readonly) RACSignal *backgroundColor;
@property (nonatomic, readonly) RACSignal *dailyForecastViewModels;
@property (nonatomic, readonly) RACCommand *updateWeatherCommand;

@end
