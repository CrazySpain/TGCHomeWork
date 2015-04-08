//
//  TGCreature.m
//  TGCHomeWork
//
//  Created by Tora on 4/8/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import "TGCreature.h"

@interface TGCreature ()
@property (nonatomic, retain) NSMutableArray *mutableKids;

@end

@implementation TGCreature

@dynamic kids;

#pragma mark -
#pragma mark Class Methods

+ (instancetype)creature {
    return [[[self alloc] init] autorelease];
}

#pragma mark -
#pragma mark Accessors

- (NSArray *)kids {
    return [[self.mutableKids copy] autorelease];
}

@end
