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

- (instancetype)initWithGender:(TGGender)gender
                          name:(NSString *)name
                           age:(NSInteger)age
                        weight:(float)weight;

@end

@implementation TGCreature

@dynamic kids;

#pragma mark -
#pragma mark Class Methods

+ (instancetype)creature {
    return [[[self alloc] init] autorelease];
}

+ (instancetype)creatureWithGender:(TGGender)gender
                              name:(NSString *)name
                               age:(NSInteger)age
                            weight:(float)weight
{
    return [[[self alloc] initWithGender:gender name:name age:age weight:weight] autorelease];
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

- (instancetype)initWithGender:(TGGender)gender
                          name:(NSString *)name
                           age:(NSInteger)age
                        weight:(float)weight
{
    if (self = [super init]) {
        self.mutableKids = [NSMutableArray array];
        self.gender = gender;
        self.name = name;
        self.age = age;
        self.weight = weight;
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
