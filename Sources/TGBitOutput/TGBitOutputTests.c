//
//  TGBitOutputTests.c
//  TGCHomeWork
//
//  Created by Tora on 3/22/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include "TGBitOutputTests.h"

#include "TGBitOutput.h"

void TGBitOutputPerformTest() {
    char zero = '\0';
    char one = 1;
    int value = 1111;
    
    size_t zeroSize = sizeof(zero);
    size_t oneSize = sizeof(one);
    size_t valueSize = sizeof(valueSize);
    
    bool reverse = true;
    
    TGBitOutput(&zero, zeroSize, !reverse);
    TGBitOutput(&zero, zeroSize, reverse);
    
    TGBitOutput(&one, oneSize, !reverse);
    TGBitOutput(&one, oneSize, reverse);
    
    TGBitOutput(&value, valueSize, !reverse);
    TGBitOutput(&value, valueSize, reverse);
}
