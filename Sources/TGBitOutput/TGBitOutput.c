//
//  TGBitOutput.c
//  TGBitOutput
//
//  Created by Tora on 3/1/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include <stdlib.h>

#include "TGBitOutput.h"

void TGBitOutput(void *value, size_t size, bool isReverse) {
    unsigned char *charValueRef = TGCharValueRef(value, size, isReverse);
    unsigned char charValue = 0;
    
    for (long int byteIter = size; byteIter > 0; byteIter--) {
        charValue = charValueRef[byteIter - 1];
        for (int bitIter = 0; bitIter < 8; bitIter++) {
            printf("%u", 0 != (charValue & 128));
            charValue <<= 1;
        }
        
        printf(" ");
    }
    
    printf("\n");
}

void* TGCharValueRef(void *value, size_t size, bool isReverse) {
    unsigned char *charValueRef = (unsigned char *)value;
    
    if (isReverse) {
        unsigned char *reversedCharValueRef = malloc(size);
        unsigned char charValue = 0;
        unsigned char reversedChar = 0;
        
        for (long int byteIter = size; byteIter > 0; byteIter--) {
            charValue = charValueRef[byteIter - 1];
            reversedChar = charValue;
            char bitSize = 7;
            for (charValue >>= 1; charValue; charValue >>= 1) {
                reversedChar <<= 1;
                reversedChar |= charValue & 1;
                bitSize--;
            }
            
            reversedChar <<= bitSize;
            reversedCharValueRef[size - byteIter] = reversedChar;
        }
        
        return reversedCharValueRef;
    }
    
    return charValueRef;
}
