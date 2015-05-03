//
//  main.m
//  TGXProject3
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 ___FULLUSERNAME___. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TGCarwashingBuilding.h"
#import "TGAdministrativeBuiding.h"

#import "TGCarwashingRoom.h"
#import "TGAdministrativeRoom.h"

#import "TGCar.h"

#import "NSObject+TGExtensions.h"

static const NSUInteger kTGRoomsCount       = 1;
static const NSUInteger kTGMoneyForWashing  = 100500;

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        TGCarwashingBuilding *carwashingBuilding = [TGCarwashingBuilding
                                                    buildingWithRoomsCount:kTGRoomsCount];
        TGAdministrativeBuiding *administrativeBuilding = [TGAdministrativeBuiding
                                                           buildingWithRoomsCount:kTGRoomsCount];
        
        TGCar *car = [TGCar object];
        car.money = kTGMoneyForWashing;
        
        TGCarwashingRoom *carwashingRoom = [carwashingBuilding
                                            roomWithClass:[TGCarwashingRoom class]];
        TGAdministrativeRoom *administrativeRoom = [administrativeBuilding
                                                    roomWithClass:[TGAdministrativeRoom class]];
        
        [carwashingRoom addCar:car];
        
        TGWasher *washer = [carwashingRoom availableWasher];
        TGBooker *booker = [administrativeRoom availableBooker];
        TGDirector *director = [administrativeRoom availableDirector];
        TGCar *dirtyCar = [carwashingRoom availableCar];
        
        [washer washCar:dirtyCar];
        [washer giveMoneyToPerson:booker];
        [booker countMoney];
        [booker giveMoneyToPerson:director];
        [director profit];
    }
    
    return 0;
}
