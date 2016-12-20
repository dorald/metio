//
//  MTPrecipitationChanceFormatter.m
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2014 thoughtbot, inc., 2015 Anvilabs, LLC.
//

#import "MTPrecipitationChanceFormatter.h"

@implementation MTPrecipitationChanceFormatter

#pragma mark Public

+ (NSString *)precipitationChanceStringFromPrecipitation:(MTPrecipitation *)precipitation {
    NSString *adjective = [self localizedAdjectiveForPrecipitationChance:[precipitation chance]];
    NSString *precipitationName = [self localizedNameForPrecipitationType:[precipitation type]];
    
    return NSLocalizedString([adjective stringByAppendingString:precipitationName], nil);
}

#pragma mark Private

+ (NSString *)localizedAdjectiveForPrecipitationChance:(MTPrecipitationChance)chance {
    switch (chance) {
        case MTPrecipitationChanceGood: return @"Good";
        case MTPrecipitationChanceSlight: return @"Slight";
        case MTPrecipitationChanceNone: return @"None";
    }
}

+ (NSString *)localizedNameForPrecipitationType:(NSString *)type {
    return [type capitalizedString];
}

@end
