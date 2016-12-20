//
//  MTStoriesManager.h
//  Metio
//
//  Created by Ayan Yenbekbay on 11/1/15.
//  Copyright © 2015 Anvilabs, LLC.
//

#import "MTStory.h"

@interface MTStoriesManager : NSObject

+ (instancetype)sharedInstance;
- (BOOL)hasVotedForStory:(MTStory *)story;
- (void)votedForStory:(MTStory *)story;
- (RACSignal *)createStoryWithText:(NSString *)text image:(UIImage *)image city:(NSString *)city;
- (RACSignal *)isModerated;

@end
