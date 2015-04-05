//
//  TGNode.h
//  TGCHomeWork
//
//  Created by Tora on 4/5/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef __TGCHomeWork__TGNode__
#define __TGCHomeWork__TGNode__

#include <stdio.h>

#include "TGObject.h"

typedef struct TGNode TGNode;

struct TGNode {
    TGObject _object;
    
    TGNode *_nextNode;
    TGObject *_data;
};

extern
TGNode *TGNodeGetNextNode(TGNode *node);

extern
void TGNodeSetNextNode(TGNode *node, TGNode *nextNode);

extern
TGObject *TGNodeGetData(TGNode *node);

extern
void TGNodeSetData(TGNode *node, TGObject *data);

extern
TGNode *TGNodeCreateWithData(TGObject *data);

extern
TGNode *TGNodeCreateWithDataAndNextNode(TGObject *data, TGNode *nextNode);

extern
TGNode *TGNodeWithDataAndNextNode(TGObject *data, TGNode *nextNode);

extern
void __TGNodeDealloc(TGNode *node);

#endif /* defined(__TGCHomeWork__TGNode__) */
