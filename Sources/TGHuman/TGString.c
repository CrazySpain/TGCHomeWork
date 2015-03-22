//
//  TGString.c
//  TGCHomeWork
//
//  Created by Tora on 3/22/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include "TGString.h"

#include <stdlib.h>
#include <string.h>

#pragma mark -
#pragma mark Accessors

char *TGStringGetString(TGString *string) {
    return string->_string;
}

void TGStringSetString(TGString *string, char *charArray) {
    if (string->_string != charArray) {
        free(string->_string);
        string->_string = charArray;
    }
}

uint64_t TGStringGetLength(TGString *string) {
    return string->_length;
}

void TGStringSetLength(TGString *string, uint64_t length) {
    if (string->_length != length) {
        string->_string = realloc(string->_string, length * sizeof(*string));
        memset(string->_string + string->_length, 0, length - string->_length);
        
        string->_length = length;
    }
}

#pragma mark -
#pragma mark Public Implementation

void TGStringDealloc(TGString *string) {
    if (NULL != string->_string) {
        free(string->_string);
    }
    
    __TGObjectDealloc(string);
}
