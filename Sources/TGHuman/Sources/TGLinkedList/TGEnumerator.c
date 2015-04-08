//
//  TGEnumerator.c
//  TGCHomeWork
//
//  Created by Tora on 4/6/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include "TGEnumerator.h"

#include "TGNode.h"
#include "TGPropertyAccessors.h"

#pragma mark -
#pragma mark Private Declaration

static
TGNode *TGEnumeratorGetNode(TGEnumerator *enumerator);

static
void TGEnumeratorSetNode(TGEnumerator *enumerator, TGNode *node);

static
uint64_t TGEnumeratorGetMutationsCount(TGEnumerator *enumerator);

static
void TGEnumeratorSetMutationsCount(TGEnumerator *enumerator, uint64_t count);

static
void TGEnumeratorSetValid(TGEnumerator *enumerator, bool isValid);

static
TGLinkedList *TGEnumeratorGetLinkedList(TGEnumerator *enumerator);

static
void TGEnumeratorSetLinkedList(TGEnumerator *enumerator, TGLinkedList *list);

static
TGNode *TGEnumeratorGetNextNode(TGEnumerator *enumerator);

static
void TGEnumeratorCheckMutationsCount(TGEnumerator *enumerator);

#pragma mark -
#pragma mark Accessors

void *TGEnumeratorGetNextObject(TGEnumerator *enumerator) {
    TGNode *node = TGEnumeratorGetNextNode(enumerator);
    
    return TGNodeGetData(node);
}

bool TGEnumeratorIsValid(TGEnumerator *enumerator) {
    if (NULL != enumerator) {
        return enumerator->_isValid;
    }
    
    return false;
}

void TGEnumeratorSetValid(TGEnumerator *enumerator, bool isValid) {
    if ((NULL != enumerator) && (enumerator->_isValid != isValid)) {
        enumerator->_isValid = isValid;
    }
}

TGNode *TGEnumeratorGetNode(TGEnumerator *enumerator) {
    if (NULL != enumerator) {
        return enumerator->_node;
    }
    
    return NULL;
}

void TGEnumeratorSetNode(TGEnumerator *enumerator, TGNode *node) {
    TGRetainPropertySetter(enumerator, &enumerator->_node, node);
}

uint64_t TGEnumeratorGetMutationsCount(TGEnumerator *enumerator) {
    if (NULL != enumerator) {
        return enumerator->_mutationsCount;
    }
    
    return 0;
}

void TGEnumeratorSetMutationCount(TGEnumerator *enumerator, uint64_t count) {
    if ((NULL != enumerator) && (enumerator->_mutationsCount != count)) {
        enumerator->_mutationsCount = count;
    }
}

TGLinkedList *TGEnumeratorGetLinkedList(TGEnumerator *enumerator) {
    if (NULL != enumerator) {
        return enumerator->_list;
    }
    
    return NULL;
}

void TGEnumeratorSetLinkedList(TGEnumerator *enumerator, TGLinkedList *list) {
    TGRetainPropertySetter(enumerator, &enumerator->_list, list);
}

#pragma mark -
#pragma mark Public Implementation

TGEnumerator *TGEnumeratorCreateWithLinkedList(TGLinkedList *list) {
    return NULL;
}

void __TGEnumeratorDealloc(TGEnumerator *enumerator) {
    
}

#pragma mark -
#pragma mark Private Implementation

TGNode *TGEnumeratorGetNextNode(TGEnumerator *enumerator) {
    return NULL;
}

void TGEnumeratorCheckMutationsCount(TGEnumerator *enumerator) {
    
}
