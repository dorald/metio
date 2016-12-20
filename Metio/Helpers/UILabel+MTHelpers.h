//
//  UILabel+MTHelpers.h
//  Metio
//
//  Created by Ayan Yenbekbay on 2/27/15.
//  Copyright (c) 2015 Anvilabs, LLC.
//

@interface UILabel (MTHelpers)

- (void)adjustFontSize:(NSUInteger)maxLines fontFloor:(CGFloat)fontFloor;
- (void)setFrameToFitWithHeightLimit:(CGFloat)heightLimit;
- (CGSize)sizeToFitWithHeightLimit:(CGFloat)heightLimit;

@end
