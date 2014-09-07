//
//  UIView+Frame.m
//  DZNCategories
//
//  Created by Ignacio Romero Zurbuchen on 10/28/11.
//  Copyright (c) 2013 DZN Labs. All rights reserved.
//  Licence: MIT-Licence
//  http://opensource.org/licenses/MIT
//

#import "UIView+Frame.h"

@implementation UIView (Frame)

#pragma mark - Getters

- (CGFloat)x
{
    return self.origin.x;
}

- (CGFloat)y
{
    return self.origin.y;
}

- (CGFloat)width
{
    return self.size.width;
}

- (CGFloat)height
{
    return self.size.height;
}

- (CGSize)size
{
    return self.frame.size;
}

- (CGPoint)origin
{
    return self.frame.origin;
}


#pragma mark - Setters

- (void)setX:(CGFloat)x
{
    CGPoint point = self.origin;
    point.x = x;
    self.origin = point;
}

- (void)setY:(CGFloat)y
{
    CGPoint point = self.origin;
    point.y = y;
    self.origin = point;
}

- (void)setWidth:(CGFloat)width
{
    CGSize size = self.size;
    size.width = width;
    self.size = size;
}

- (void)setHeight:(CGFloat)height
{
    CGSize size = self.size;
    size.height = height;
    self.size = size;
}

- (void)setOrigin:(CGPoint)origin
{
    CGRect rect = self.frame;
    rect.origin = origin;
    self.frame = rect;
}

- (void)setSize:(CGSize)size
{
    CGRect rect = self.frame;
    rect.size = size;
    self.frame = rect;
}


#pragma mark - Sum

- (void)addToX:(CGFloat)value
{
    self.x = self.x + value;
}

- (void)addToY:(CGFloat)value
{
    self.y = self.y + value;
}

- (void)addToWidth:(CGFloat)value
{
    self.width = self.width + value;
}

- (void)addToHeight:(CGFloat)value
{
    self.height = self.height + value;
}

@end
