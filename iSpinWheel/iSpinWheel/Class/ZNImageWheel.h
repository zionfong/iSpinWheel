//
//  ANImageWheel.h
//  SpinWheel
//
//  Created by Alex Nichol on 6/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "SpinWheel.h"


@class ZNImageWheel;
@protocol SpinWheelDelegate <NSObject>

//- (void)didStartSpinWheel:(ZNImageWheel*)imgWheel;
- (void)didStopSpinWheel:(ZNImageWheel*)imgWheel atSegment:(NSInteger)index selectedText:(NSString*)text automatic:(BOOL)isAuto;

@end


@interface ZNImageWheel : SpinWheel {
    UIImageView * imageView;
}

@property (nonatomic, assign) CGFloat pointerAngle;
@property (nonatomic, assign) CGFloat buttonDiameter;
@property (nonatomic, assign) CGFloat maxVelocity;
@property (nonatomic, assign) NSInteger segmentNumber;
@property (nonatomic, assign) NSInteger maxSegmentNumber;
@property (nonatomic, strong) UIButton* spinButton;
@property (nonatomic, assign) BOOL isEditMode;
@property (nonatomic, assign) id<SpinWheelDelegate> delegate;

- (void)setImage:(UIImage *)anImage;
- (UIImage *)image;
- (void)setSegmentsWithTextList:(NSArray*)textList;
- (void)setSegmentsWithTextList:(NSArray*)textList withColorArray:(NSArray*)colorArray;

- (id)initWithFrame:(CGRect)frame image:(UIImage *)anImage;
- (void)startEditAnimationWithDelay:(NSTimeInterval)delay;
- (void)stopEditAnimation;

@end
