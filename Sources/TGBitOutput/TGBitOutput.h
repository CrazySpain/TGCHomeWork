//
//  TGBitOutput.h
//  TGBitOutput
//
//  Created by Tora on 3/1/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef __TGBitOutput__TGBitOutput__
#define __TGBitOutput__TGBitOutput__

#include <stdbool.h>

void TGBitOutput(void *value, size_t size, bool isReverse);
void* TGReversedVaue(void *value, size_t size);

#endif /* defined(__TGBitOutput__TGBitOutput__) */
