//
//  MTTemperatureComparisonFormatter.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

#import "MTTemperature.h"

@interface MTTemperatureComparisonFormatter : NSObject

+ (NSString *)localizedStringFromComparison:(MTTemperatureComparison)comparison adjective:(NSString *__autoreleasing *)adjective precipitation:(NSString *)precipitation date:(NSDate *)date;

@end
