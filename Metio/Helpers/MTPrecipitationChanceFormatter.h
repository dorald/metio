//
//  MTPrecipitationChanceFormatter.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

#import "MTPrecipitation.h"

@interface MTPrecipitationChanceFormatter : NSObject

+ (NSString *)precipitationChanceStringFromPrecipitation:(MTPrecipitation *)precipitation;

@end
