//
//  TGMamaPapa_Test.c
//  TGMamaPapa
//
//  Created by Tora on 2/18/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include "TGMamaPapa_Test.h"
#include "TGMamaPapa.h"
#include <assert.h>

void TGMamaPapa_Test() {
    assert(TGMamaPapa(0) == TGMamaPapaResultNone);
    assert(TGMamaPapa(2) == TGMamaPapaResultNone);
    assert(TGMamaPapa(336) == TGMamaPapaResultMama);
    assert(TGMamaPapa(500) == TGMamaPapaResultPapa);
    assert(TGMamaPapa(600) == TGMamaPapaResultMamaPapa);
}