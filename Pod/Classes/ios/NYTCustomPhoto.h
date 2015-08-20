//
//  NYTCustomPhoto.h
//  PlanStalk
//
//  Created by Cs on 2015. 8. 18..
//  Copyright (c) 2015년 Cs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NYTPhoto.h"

@interface NYTCustomPhoto : NSObject <NYTPhoto>

// Redeclare all the properties as readwrite for sample/testing purposes.
@property (nonatomic) UIImage *image;
@property (nonatomic) UIImageView *imageView;
@property (nonatomic) UIImage *placeholderImage;
@property (nonatomic) NSAttributedString *attributedCaptionTitle;
@property (nonatomic) NSAttributedString *attributedCaptionSummary;
@property (nonatomic) NSAttributedString *attributedCaptionCredit;

@end
