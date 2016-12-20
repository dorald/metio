//
//  MTStoriesView.h
//  Metio
//
//  Created by Ayan Yenbekbay on 10/31/15.
//  Copyright © 2015 Anvilabs, LLC.
//

extern UIOffset const kStoriesViewOffset;

@interface MTStoriesView : UICollectionView

- (instancetype)initWithFrame:(CGRect)frame;
- (void)updateStoriesWithCity:(NSString *)city;

@end
