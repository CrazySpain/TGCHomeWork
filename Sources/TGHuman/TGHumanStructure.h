//
//  TGHumanStructure.h
//  TGHuman
//
//  Created by Tora on 3/10/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef __TGHuman__TGHumanStructure__
#define __TGHuman__TGHumanStructure__

#include <stdio.h>
#include <stdbool.h> 

typedef enum {Female, Male} TGGenderHuman;
typedef struct TGHuman TGHuman;

struct TGHuman {
    char *_name;
    TGGenderHuman _gender;
    int _age;
    int _childQuantity;
    TGHuman *_partner;
    TGHuman *_father;
    TGHuman *_mother;
    TGHuman *_childrenArray[20];
    bool _isMarried;
};

#endif /* defined(__TGHuman__TGHumanStructure__) */
