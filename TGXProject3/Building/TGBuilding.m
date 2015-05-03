//
//  TGBuilding.m
//  TGCHomeWork
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import "TGBuilding.h"

#import "NSObject+TGExtensions.h"

@interface TGBuilding ()
@property (nonatomic, retain) NSMutableArray *mutableRooms;

- (instancetype)initWithRoomsCount:(NSUInteger)count;

@end

@implementation TGBuilding

@dynamic roomClass;

#pragma mark -
#pragma mark Class Methods

+ (instancetype)buildingWithRoomsCount:(NSUInteger)count {
    return [[[self alloc] initWithRoomsCount:count] autorelease];
}

#pragma mark -
#pragma mark Initialisations and Deallocations

- (instancetype)initWithRoomsCount:(NSUInteger)count {
    if (self = [super init]) {
        NSMutableArray *mutableRooms = [NSMutableArray arrayWithCapacity:count];
        for (NSUInteger index = 0; index < count; index++) {
            [mutableRooms addObject:[self.roomClass object]];
        }
    }
    
    return self;
}

#pragma mark -
#pragma mark Accessors

- (Class)roomClass {
    return nil;
}

@end
