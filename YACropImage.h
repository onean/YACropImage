//
//  YACropImage.h
//  YACropImage
//
//  Created by FaceUI on 13-7-1.
//  Copyright (c) 2013年 faceUI_anyi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
//裁剪的最小宽度
#define MIN_WIDTH 30
//裁剪的最小高度
#define MIN_HEIGHT 30
@interface YACropImage : UIImageView

@property (strong, nonatomic) UIImage * cornerImage;
@property ( nonatomic) CGRect imageViewRect;
//在init的时候传入准备裁剪的图片和按钮图片
-(id)initWIthFrame:(CGRect)frame andImage:(UIImage *) image withCornerImage:(UIImage *)cornerImage;
-(void)setImage:(UIImage *)image;
//开始裁剪，传入裁剪框的初始位置，大小
-(void)startCropImageFrom:(CGRect)cropRect;
//结束裁剪
-(void)stopCropImage;
//得到裁剪后的图片
-(UIImage *)getCroppedImage;

@end
