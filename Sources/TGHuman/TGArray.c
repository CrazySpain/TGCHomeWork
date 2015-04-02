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

void *TGArrayGetObjectAtIndex(TGArray *array, uint32_t index) {
    if ((NULL == array) || (index >= array->_length) || (NULL == array->_array)) {
        return NULL;
    }
    
    return array->_array[index];
}

void TGArraySetObject(TGArray *array, void *object) {
    if (NULL == array) {
        return;
    }
    
    TGArraySetLength(array, (array->_length + 1));
    
    array->_array[array->_length - 1] = TGObjectRetain(object);
}

size_t TGArrayGetLength(TGArray *array) {
    return array->_length;
}

void TGArraySetLength(TGArray *array, size_t length) {
    if (0 == length) {
        for (int index = 0; index < array->_length; index++) {
            TGObjectRelease(array->_array[index]);
        }
        
        free(array->_array);
        array->_array = NULL;
        array->_length = 0;
        
        return;
    }
    
    if (array->_length != length) {
        if (array->_length > length) {
            for (size_t index = length; index < array->_length; index++) {
                TGObjectRelease(array->_array[index]);
            }
        }
        
        array->_array = realloc(array->_array, length * sizeof(*array));
        
        assert(array->_array != NULL);
        
        if (array->_length < length) {
            memset(array->_array + array->_length, 0, length - array->_length);
        }
        
        array->_length = length;
    }
}

#pragma mark -
#pragma mark Public Implementation

TGArray *TGArrayCreateWithObject(void *object) {
    if (NULL == object) {
        return NULL;
    }
    
    TGArray *array = TGObjectCreate(TGArray);
    array->_array = (void **)calloc(1, sizeof(object));
    
    TGArraySetObject(array, object);
    
    return array;
}

void __TGArrayDealloc(TGArray *array) {
    if (NULL != array->_array) {
        TGArraySetLength(array, 0);
    }
    
    __TGObjectDealloc(array);
}

void TGArrayRemoveObject(TGArray *array, void *object) {
    if ((NULL != array) && (NULL != array->_array)) {
        for (int index = 0; index < array->_length; index++) {
            if (array->_array[index] == object) {
                TGArrayRemoveObjectAtIndex(array, index);
            }
        }
    }
}

void TGArrayRemoveObjectAtIndex(TGArray *array, uint32_t index) {
    if ((NULL != array) && (NULL != array->_array) && (index < array->_length)) {
        TGObjectRelease(array->_array[index]);
        for (int iterator = index; iterator < (array->_length - 1); iterator++) {
            array->_array[iterator] = array->_array[iterator + 1];
        }
        
        TGArraySetLength(array, (array->_length - 1));
    }
}
