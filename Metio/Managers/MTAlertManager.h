//
//  MTAlertManager.h
//  Metio
//
//  Created by Ayan Yenbekbay on 11/1/15.
//  Copyright © 2015 Anvilabs, LLC.
//

@interface MTAlertManager : NSObject

+ (instancetype)sharedInstance;
- (void)showNotificationWithText:(NSString *)text;
- (void)showNotificationWithText:(NSString *)text color:(UIColor *)color;

@end
