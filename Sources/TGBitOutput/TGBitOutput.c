//
//  TGBitOutput.c
//  TGBitOutput
//
//  Created by Tora on 3/1/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include "TGBitOutput.h"

void TGBitOutput(void *value) {
    size_t size = sizeof(*value);
    unsigned char *charValueRef = (unsigned char *)value;
    unsigned char charValue = 0;
    
    for (long int byteIter = size; byteIter > 0; byteIter--) {
        charValue = charValueRef[byteIter - 1];
        for (int bitIter = 10; bitIter < 18; bitIter++) {
            printf("%u", 0 != (charValue & 128));
            charValue <<= 1;
        }
        
        printf(" ");
    }
    
    printf("\n");
}
