/*
 Copyright (C) 2011- 2012  Reetu Raj (reetu.raj@gmail.com)
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software 
 and associated documentation files (the “Software”), to deal in the Software without 
 restriction, including without limitation the rights to use, copy, modify, merge, publish, 
 distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom
 the Software is furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all copies or 
 substantial portions of the Software.

 THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT 
 NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY 
 CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
 ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *///
//  WallGraph.h
//  MIM2D Library
//
//  Created by Reetu Raj on 07/07/11.
//  Copyright (c) 2012 __MIM 2D__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "Anchor.h"
#import "WallGraphDelegate.h"
#import "MIM_MathClass.h"
#import "Constant.h"
#import "WallLongGraph.h"
#import "LineScrollView.h"

@interface WallGraph : UIView<AnchorDelegate> {
    
    
    BOOL fitsToScreenWidth;
    BOOL nonInteractiveAnchorPoints;
    
    X_TITLES_STYLE xTitleStyle;
    WALL_PATTERN_STYLE patternStyle;
    
    
    
    
    @private
    
    id<WallGraphDelegate>delegate;
    
    BOOL needStyleSetter;
    UIButton *styleButton;
    UILabel *styleLabel;
    int style;
    
    float pixelsPerTile;
    int numOfHLines;
    NSMutableArray *_yElements;
    NSMutableArray *_xElements;
    NSArray *_xTitles;
    
    float _gridWidth;
    float _gridHeight;
    float _scalingX;
    float _scalingY;
    float _tileWidth;
    float _tileHeight;
    BOOL xIsString;
    BOOL isGradient;
    BOOL isShadow;
    UIImage *patternImage;
    ANCHORTYPE anchorType;
    
    BOOL _verticalLinesVisible;
    BOOL _horizontalLinesVisible;
    MIMColorClass *colorOfGraphBgLine;
    
    float widthOfWallBorder;

}
@property(nonatomic,assign)X_TITLES_STYLE xTitleStyle;
@property(nonatomic,assign)WALL_PATTERN_STYLE patternStyle;

@property(nonatomic,assign)BOOL nonInteractiveAnchorPoints;



@property(nonatomic,retain)id<WallGraphDelegate>delegate;
@property(nonatomic,assign)BOOL isShadow;
@property(nonatomic,assign) int style;


//Public Methods
-(void)drawWallGraph;



@end
