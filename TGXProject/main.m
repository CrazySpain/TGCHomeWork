//
//  main.m
//  TGXProject
//
//  Created by Tora on 4/8/15.
//  Copyright (c) 2015 ___FULLUSERNAME___. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TGCreature.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSMutableArray *creatures = [NSMutableArray array];
        for (NSInteger count = 0; count < 20; count++) {
            TGCreature *creature = [TGCreature creature];
            creature.gender = (count % 2 == 0) ? TGMale : TGFemale;
            [creatures addObject:creature];
        }
        
    }

    return 0;
}
