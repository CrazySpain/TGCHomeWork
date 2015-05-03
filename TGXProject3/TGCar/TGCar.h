//
//  TGCar.h
//  TGCHomeWork
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TGCar : NSObject
@property (nonatomic, assign) NSUInteger money;

@property (nonatomic, assign, getter=isClean) BOOL clean;

@end
