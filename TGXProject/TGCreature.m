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

#pragma mark -
#pragma mark Public Methods

- (void)sayHi {
    NSLog(@"Слава нацiї!\n-Смерть ворогам!");
    for (TGCreature *kid in self.mutableKids) {
        [kid sayHi];
    }
}

- (void)goToWar {
    NSLog(@"Отримав повістку");
}

- (TGCreature *)babyWithGender:(TGGender)gender {
    NSLog(@"BabyBoom");
    TGCreature *kid = [TGCreature creature];
    kid.gender = gender;
    
    return kid;
}

- (void)addKid:(TGCreature *)kid {
    if (![self.mutableKids containsObject:kid]) {
        [self.mutableKids addObject:kid];
    }
}

- (void)killKid:(TGCreature *)kid {
    [self.mutableKids removeObject:kid];
}

@end
