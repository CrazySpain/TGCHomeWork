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
#include <assert.h>

#pragma mark -
#pragma mark Accessors

char *TGStringGetString(TGString *string) {
    if (NULL == string) {
        return NULL;
    }
    
    return string->_string;
}

void TGStringSetString(TGString *string, char *charArray) {
    if ((NULL != string) && (string->_string != charArray)) {
        if (NULL != string->_string && NULL == charArray) {
            TGStringSetLength(string, 0);
        } else if (NULL != charArray) {
            size_t length = strlen(charArray) + 1;
            TGStringSetLength(string, length);
            memcpy(string->_string, charArray, length);
        }
    }
}

size_t TGStringGetLength(TGString *string) {
    return string->_length;
}

void TGStringSetLength(TGString *string, size_t length) {
    if (0 == length) {
        free(string->_string);
        string->_string = NULL;
        string->_length = 0;
    } else if (string->_length != length) {
        string->_string = realloc(string->_string, length * sizeof(*string));
        
        assert(string->_string != NULL);
        memset(string->_string, 0, length);
        
        string->_length = length;
    }
}

#pragma mark -
#pragma mark Public Implementation

void __TGStringDealloc(TGString *string) {
    if (NULL != string->_string) {
        TGStringSetString(string, NULL);
    }
    
    __TGObjectDealloc(string);
}
