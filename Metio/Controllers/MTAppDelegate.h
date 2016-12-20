//
//  MTAppDelegate.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15
//  Copyright (c) 2015 Anvilabs, LLC.
//

#import "MTApplicationManager.h"

@interface MTAppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic) UIWindow *window;
@property (nonatomic) UINavigationController *navigationController;
@property (strong, nonatomic) MTApplicationManager *applicationManager;

@end
