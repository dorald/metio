//
//  UIImagePickerController+MTBugFix.m
//  Metio
//
//  Created by Ayan Yenbekbay on 6/23/15.
//  Copyright (c) 2015 Anvilabs, LLC.
//

#import "UIImagePickerController+MTBugFix.h"

@implementation UIImagePickerController (MTBugFix)

- (void)viewDidLoad {
    [super viewDidLoad];
    [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleDefault animated:YES];
}

- (void)navigationController:(UINavigationController *)navigationController willShowViewController:(UIViewController *)viewController animated:(BOOL)animated {
    [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleDefault animated:NO];
}

@end
