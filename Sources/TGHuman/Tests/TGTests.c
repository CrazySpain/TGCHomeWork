//
//  TGTests.c
//  TGCHomeWork
//
//  Created by Tora on 4/5/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include "TGTests.h"

#include "TGStringTests.h"
#include "TGArrayTests.h"

#pragma mark -
#pragma mark Public Implementation

void TGPerformTests() {
    TGTestString();
    TGTestArray();
}
