//
//  TGArray.c
//  TGCHomeWork
//
//  Created by Tora on 3/29/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include "TGArray.h"

#include <stdlib.h>
#include <string.h>
#include <assert.h>

#pragma mark -
#pragma mark Accessors

void *TGArrayGetArray(TGArray *array) {
    return array->_array;
}

void TGArraySetArray(TGArray *array, void *dataArray, size_t length) {
    if (array->_array != dataArray) {
        if (NULL != array->_array && NULL == dataArray) {
            TGArraySetLength(array, 0);
        }
        
        if (NULL != dataArray) {
            TGArraySetLength(array, length);
            memcpy(array->_array, dataArray, length * sizeof(*array));
        }
    }
}

size_t TGArrayGetLength(TGArray *array) {
    return array->_length;
}

void TGArraySetLength(TGArray *array, size_t length) {
    if (0 == length) {
        free(array->_array);
        array->_array = NULL;
        array->_length = 0;
        
        return;
    }
    
    if (array->_length != length) {
        array->_array = realloc(array->_array, length * sizeof(*array));
        
        assert(array->_array != NULL);
        memset(array->_array, 0, length);
        
        array->_length = length;
    }
}

#pragma mark -
#pragma mark Public Implementation

void __TGArrayDealloc(TGArray *array) {
    if (NULL != array->_array) {
        TGArraySetArray(array, NULL, 0);
    }
    
    __TGObjectDealloc(array);
}
