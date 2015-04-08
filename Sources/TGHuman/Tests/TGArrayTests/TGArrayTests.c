//
//  TGArrayTests.c
//  TGCHomeWork
//
//  Created by Tora on 4/5/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include "TGArrayTests.h"

#include <stdlib.h>
#include <assert.h>

#include "TGArray.h"
#include "TGString.h"

#pragma mark -
#pragma mark Private Declaration

static
void TGArrayObjectTest();

static
void TGArrayReferenceCountTest();

static
void TGArrayMacroReferenceCountTest();

static
void TGArrayReferenceCountChainingTest();

static
void TGArrayWorkWithObjectsTest();

#pragma mark -
#pragma mark Public Implementation

void TGTestArray() {
    TGArrayObjectTest();
    TGArrayReferenceCountTest();
    TGArrayMacroReferenceCountTest();
    TGArrayReferenceCountChainingTest();
    TGArrayWorkWithObjectsTest();
}

#pragma mark -
#pragma mark Private Implementation

void TGArrayObjectTest() {
    TGArray *array = calloc(1, sizeof(*array));
    TGObject *object = (TGObject *)array;
    
    object->_referenceCount = 1;
    assert(array->_object._referenceCount == 1);
    
    free(array);
}

void TGArrayReferenceCountTest() {
    TGArray *array = __TGObjectCreate(sizeof(TGArray), (TGDealloc)__TGArrayDealloc);
    assert(array->_object._referenceCount == 1);
    
    TGObjectRetain(array);
    assert(array->_object._referenceCount == 2);
    
    TGObjectRelease(array);
    assert(array->_object._referenceCount == 1);
    
    TGObjectRelease(array);
}

void TGArrayMacroReferenceCountTest() {
    TGArray *array = TGObjectCreate(TGArray);
    assert(array->_object._referenceCount == 1);
    
    TGObjectRetain(array);
    assert(array->_object._referenceCount == 2);
    
    TGObjectRelease(array);
    assert(array->_object._referenceCount == 1);
    
    TGObjectRelease(array);
}

void TGArrayReferenceCountChainingTest() {
    TGArray *array = TGObjectCreate(TGArray);
    
    TGObjectRelease(TGObjectRetain(array));
    assert(array->_object._referenceCount == 1);
    
    TGObjectRelease(array);
}

void TGArrayWorkWithObjectsTest() {
    TGArray *array = TGArrayCreate();
    
    for (int index = 'A'; index <= 'Z'; index++) {
        char symbols[] = {index, '\0'};
        
        TGString *string = TGObjectCreate(TGString);
        TGStringSetString(string, symbols);
        TGArrayAddObject(array, string);
        
        printf("%s\n", TGStringGetString(string));
    }
    
    assert(TGArrayGetLength(array) == 26);
    assert(TGArrayGetCount(array) == 26);
    
    TGArrayRemoveObject(array, TGArrayGetObjectAtIndex(array, 0));
    
    assert(TGArrayGetLength(array) == 25);
    assert(TGArrayGetCount(array) == 25);
    
    TGString *stringZ = TGArrayGetObjectAtIndex(array, 24);
    
    assert(TGArrayIndexOfObject(array, stringZ) == 24);
    
    printf("%s\n", TGStringGetString(stringZ));
    
    TGObjectRelease(array);
}
