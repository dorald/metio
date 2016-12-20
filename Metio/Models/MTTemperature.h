//
//  MTTemperature.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

@interface MTTemperature : NSObject

typedef NS_ENUM(NSUInteger, MTTemperatureComparison) {
    MTTemperatureComparisonSame,
    MTTemperatureComparisonHotter,
    MTTemperatureComparisonWarmer,
    MTTemperatureComparisonCooler,
    MTTemperatureComparisonColder,
};

#pragma mark Properties

@property (nonatomic, readonly) NSInteger fahrenheitValue;
@property (nonatomic, readonly) NSInteger celsiusValue;

#pragma mark Methods

+ (instancetype)temperatureFromFahrenheit:(NSNumber *)number;
- (MTTemperatureComparison)comparedTo:(MTTemperature *)comparedTemperature;
- (instancetype)temperatureDifferenceFromTemperature:(MTTemperature *)temperature;

@end
