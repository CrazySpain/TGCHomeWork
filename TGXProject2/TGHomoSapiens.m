//
//  TGCreature.m
//  TGCHomeWork
//
//  Created by Tora on 4/28/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import "TGHomoSapiens.h"

@interface TGHomoSapiens ()
@property (nonatomic, retain) NSMutableArray *mutableKids;

@end

@implementation TGHomoSapiens

@dynamic kids;

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
    for (TGHomoSapiens *kid in self.mutableKids) {
        [kid sayHi];
    }
}

- (void)addKid:(TGHomoSapiens *)kid {
    if (![self.mutableKids containsObject:kid]) {
        [self.mutableKids addObject:kid];
    }
}

- (void)killKid:(TGHomoSapiens *)kid {
    [self.mutableKids removeObject:kid];
}

- (void)performGenderSpecificOperation {
    
}

@end
