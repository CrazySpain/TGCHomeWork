//
//  main.m
//  TGXProject
//
//  Created by Tora on 4/8/15.
//  Copyright (c) 2015 ___FULLUSERNAME___. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TGCreature.h"

static const NSInteger  kTGCreaturesCount   = 20;
static const NSInteger  kTGFemaleAge        = 25;
static const NSInteger  kTGMaleAge          = 24;
static const float      kTGFemaleWeight     = 40.0f;
static const float      kTGMaleWeight       = 65.0f;

static NSString * const kTGFemaleName       = @"Ivanka";
static NSString * const kTGMaleName         = @"Ivan";

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSMutableArray *creatures = [NSMutableArray array];
        for (NSInteger count = 0; count < kTGCreaturesCount; count++) {
//            TGCreature *creature = [TGCreature creature];
//            
//            if (count % 2 == 0) {
//                creature.gender = TGMale;
//                creature.name = kTGMaleName;
//                creature.age = kTGMaleAge;
//                creature.weight = kTGMaleWeight;
//            } else {
//                creature.gender = TGFemale;
//                creature.name = kTGFemaleName;
//                creature.age = kTGFemaleAge;
//                creature.weight = kTGFemaleWeight;
//            }
            
            TGCreature *creature = nil;
            if (count % 2 == 0) {
                creature = [TGCreature creatureWithGender:TGMale
                                                     name:kTGMaleName
                                                      age:kTGMaleAge
                                                   weight:kTGMaleWeight];
            } else {
                creature = [TGCreature creatureWithGender:TGFemale
                                                     name:kTGFemaleName
                                                      age:kTGFemaleAge
                                                   weight:kTGFemaleWeight];
            }
            
            [creatures addObject:creature];
        }
        
        for (TGCreature *creature in creatures) {
            [creature addKid:[creature babyWithGender:TGMale]];
            
            if (creature.gender == TGMale) {
                [creature goToWar];
            } else {
                [creature babyWithGender:TGFemale];
            }
        }
    }

    return 0;
}
