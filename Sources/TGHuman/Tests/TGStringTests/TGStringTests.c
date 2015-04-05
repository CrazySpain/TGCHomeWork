//
//  TGStringTests.c
//  TGCHomeWork
//
//  Created by Tora on 3/29/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include "TGStringTests.h"

#include <stdlib.h>
#include <assert.h>

#include "TGString.h"

#pragma mark -
#pragma mark Private Declarations

static
void TGStringObjectTest();

static
void TGStringReferenceCountTest();

static
void TGStringMacroReferenceCountTest();

static
void TGStringReferenceCountChainingTest();

#pragma mark -
#pragma mark Public Implementetion

void TGTestString() {
    TGStringObjectTest();
    TGStringReferenceCountTest();
    TGStringMacroReferenceCountTest();
    TGStringReferenceCountChainingTest();
}

#pragma mark -
#pragma mark Private Implementetion

void TGStringObjectTest() {
    TGString *string = calloc(1, sizeof(*string));
    TGObject *object = (TGObject *)string;
    
    object->_referenceCount = 1;
    assert(string->_object._referenceCount == 1);
    
    free(string);
}

void TGStringReferenceCountTest() {
    TGString *string = __TGObjectCreate(sizeof(TGString), (TGDealloc)__TGStringDealloc);
    assert(string->_object._referenceCount == 1);
    
    TGObjectRetain(string);
    assert(string->_object._referenceCount == 2);
    
    TGObjectRelease(string);
    assert(string->_object._referenceCount == 1);
    
    TGObjectRelease(string);
}

void TGStringMacroReferenceCountTest() {
    TGString *string = TGObjectCreate(TGString);
    assert(string->_object._referenceCount == 1);
    
    TGObjectRetain(string);
    assert(string->_object._referenceCount == 2);
    
    TGObjectRelease(string);
    assert(string->_object._referenceCount == 1);
    
    TGObjectRelease(string);
}

void TGStringReferenceCountChainingTest() {
    TGString *string = TGObjectCreate(TGString);
    
    TGObjectRelease(TGObjectRetain(string));
    assert(string->_object._referenceCount == 1);
    
    TGObjectRelease(string);
}
