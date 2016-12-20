//
//  MTWeatherView.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2015 Anvilabs, LLC.
//

#import "MTWeatherManager.h"

@interface MTWeatherView : UIView

#pragma mark Methods

- (void)bindWeatherManager:(MTWeatherManager *)weatherManager;

@end
