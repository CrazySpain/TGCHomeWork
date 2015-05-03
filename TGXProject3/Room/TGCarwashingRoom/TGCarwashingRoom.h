//
//  TGCarwashingRoom.h
//  TGCHomeWork
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import "TGRoom.h"

#import "TGWasher.h"
#import "TGCar.h"

@interface TGCarwashingRoom : TGRoom

- (TGWasher *)availableWasher;
- (TGCar *)availableCar;

- (void)addCar:(TGCar *)car;
- (void)removeCar:(TGCar *)car;

@end
