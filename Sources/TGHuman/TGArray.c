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
#pragma mark Private Declaration

static
void TGArraySetCount(TGArray *array, size_t count);

static
void TGArraySetObjectAtIndex(TGArray *array, void *object, uint32_t index);

#pragma mark -
#pragma mark Accessors

size_t TGArrayGetLength(TGArray *array) {
    if (NULL != array) {
        return array->_length;
    }
    
    return 0;
}

void TGArraySetLength(TGArray *array, size_t length) {
    size_t currentLength = TGArrayGetLength(array);
    for (uint32_t index = (uint32_t)length; index < currentLength; index++) {
        TGObjectRelease(TGArrayGetObjectAtIndex(array, index));
    }
    
    if (0 == length) {
        free(array->_array);
        array->_array = NULL;
        array->_length = 0;
        
        return;
    }
    
    if (currentLength != length) {
        array->_array = realloc(array->_array, length * sizeof(*array));
        
        assert(array->_array != NULL);
        
        if (currentLength < length) {
            memset(array->_array + currentLength, 0, length - currentLength);
        }
        
        array->_length = length;
    }
}

size_t TGArrayGetCount(TGArray *array) {
    if (NULL != array) {
        return array->_count;
    }
    
    return 0;
}

void TGArraySetCount(TGArray *array, size_t count) {
    if (NULL != array) {
        array->_count = count;
    }
}

#pragma mark -
#pragma mark Public Implementation

TGArray *TGArrayCreate() {
    TGArray *array = TGObjectCreate(TGArray);
    array->_array = (void **)calloc(1, sizeof(TGArray));
    
    return array;
}

void __TGArrayDealloc(TGArray *array) {
    if (NULL != array->_array) {
        TGArraySetLength(array, 0);
    }
    
    __TGObjectDealloc(array);
}

void *TGArrayGetObjectAtIndex(TGArray *array, uint32_t index) {
    if ((NULL == array) || (index >= TGArrayGetCount(array)) || (NULL == array->_array)) {
        return NULL;
    }
    
    return array->_array[index];
}

void TGArrayAddObject(TGArray *array, void *object) {
    if (NULL == array) {
        return;
    }
    
    size_t length = TGArrayGetLength(array) + 1;
    
    TGArraySetLength(array, length);
    TGArraySetObjectAtIndex(array, object, (uint32_t)(length - 1));
}

uint32_t TGArrayIndexOfObject(TGArray *array, void *object) {
    if ((NULL != array) && (NULL != array->_array)) {
        size_t count = TGArrayGetCount(array);
        for (int index = 0; index < count; index++) {
            if (TGArrayGetObjectAtIndex(array, index) == object) {
                return index;
            }
        }
    }
    
    return 0;
}

void TGArrayRemoveObject(TGArray *array, void *object) {
    TGArrayRemoveObjectAtIndex(array, TGArrayIndexOfObject(array, object));
}

void TGArrayRemoveObjectAtIndex(TGArray *array, uint32_t index) {
    size_t count = TGArrayGetCount(array);
    if ((NULL != array) && (NULL != array->_array) && (index < count)) {
        TGObjectRelease(array->_array[index]);
        for (int iterator = index; iterator < (count - 1); iterator++) {
            array->_array[iterator] = array->_array[iterator + 1];
        }
        
        TGArraySetLength(array, (TGArrayGetLength(array) - 1));
        TGArraySetCount(array, (TGArrayGetCount(array) - 1));
    }
}

#pragma mark -
#pragma mark Private Implementation

void TGArraySetObjectAtIndex(TGArray *array, void *object, uint32_t index) {
    size_t count = TGArrayGetLength(array);
    
    if ((NULL != array) && (NULL != object) && (index < count)) {
        TGObjectRelease(TGArrayGetObjectAtIndex(array, index));
        array->_array[array->_length - 1] = TGObjectRetain(object);
        TGArraySetCount(array, (TGArrayGetCount(array) + 1));
    }
}
