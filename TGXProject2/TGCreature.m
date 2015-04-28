//
//  TGCreature.m
//  TGCHomeWork
//
//  Created by Tora on 4/28/15.
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
#pragma mark Initialisations and Deallocations

- (void)dealloc {
    self.mutableKids = nil;
    self.name = nil;
    
    [super dealloc];
}

- (instancetype)init {
    if (self = [super init]) {
        self.mutableKids = [NSMutableArray array];
    }
    
    return self;
}

#pragma mark -
#pragma mark Accessors

- (NSArray *)kids {
    return [[self.mutableKids copy] autorelease];
}

#pragma mark -
#pragma mark Public Methods

- (void)sayHi {
    NSLog(@"Слава нацiї!\n-Смерть ворогам!");
    for (TGCreature *kid in self.mutableKids) {
        [kid sayHi];
    }
}

- (void)addKid:(TGCreature *)kid {
    if (![self.mutableKids containsObject:kid]) {
        [self.mutableKids addObject:kid];
    }
}

- (void)killKid:(TGCreature *)kid {
    [self.mutableKids removeObject:kid];
}

- (void)performGenderSpecificOperation {
    
}

@end
