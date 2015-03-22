//
//  TGBitOutput.h
//  TGBitOutput
//
//  Created by Tora on 3/1/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef __TGBitOutput__TGBitOutput__
#define __TGBitOutput__TGBitOutput__

#include <stdio.h>
#include <stdbool.h>

#define TGReversedValueBitOutput(value) \
    TGBitOutput(&value, sizeof(value), true)

#define TGValueBitOutput(value) \
    TGBitOutput(&value, sizeof(value), false)

extern
void TGBitOutput(void *value, size_t size, bool isReverse);

extern
void *TGCharValueRef(void *value, size_t size, bool isReverse);

#endif /* defined(__TGBitOutput__TGBitOutput__) */
