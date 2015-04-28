//
//  NSObject+TGExtensions.m
//  TGCHomeWork
//
//  Created by Tora on 4/28/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import "NSObject+TGExtensions.h"

@implementation NSObject (TGExtensions)

#pragma mark -
#pragma mark Class Methods

+ (instancetype)object {
    return [[[self alloc] init] autorelease];
}

@end
