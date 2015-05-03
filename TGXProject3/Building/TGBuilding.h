//
//  TGBuilding.h
//  TGCHomeWork
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TGRoom.h"

@interface TGBuilding : NSObject
@property (nonatomic, readonly) Class roomClass;

+ (instancetype)buildingWithRoomsCount:(NSUInteger)count;

- (id)roomWithClass:(Class)roomClass;

@end
