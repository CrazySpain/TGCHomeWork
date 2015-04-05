//
//  TGNode.c
//  TGCHomeWork
//
//  Created by Tora on 4/5/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include "TGNode.h"

#include <assert.h>

#include "TGPropertyAccessors.h"

#pragma mark -
#pragma mark Accessors

TGNode *TGNodeGetNextNode(TGNode *node) {
    if (NULL != node) {
        return node->_nextNode;
    }
    
    return NULL;
}

void TGNodeSetNextNode(TGNode *node, TGNode *nextNode) {
    assert(node != nextNode);
    
    TGRetainPropertySetter(node, &node->_nextNode, nextNode);
}

TGObject *TGNodeGetData(TGNode *node) {
    if (NULL != node) {
        return node->_data;
    }
    
    return NULL;
}

void TGNodeSetData(TGNode *node, TGObject *data) {
    TGRetainPropertySetter(node, &node->_data, data);
}

#pragma mark -
#pragma mark Public Implementation

TGNode *TGNodeCreateWithData(TGObject *data) {
    return TGNodeCreateWithDataAndNextNode(data, NULL);
}

TGNode *TGNodeCreateWithDataAndNextNode(TGObject *data, TGNode *nextNode) {
    TGNode *node = TGObjectCreate(TGNode);
    TGNodeSetData(node, data);
    TGNodeSetNextNode(node, nextNode);
    
    return node;
}

TGNode *TGNodeWithDataAndNextNode(TGObject *data, TGNode *nextNode) {
#warning Method without implementation. Don't use it!
    return NULL;
}

void __TGNodeDealloc(TGNode *node) {
    TGNodeSetData(node, NULL);
    TGNodeSetNextNode(node, NULL);
    
    __TGObjectDealloc(node);
}
