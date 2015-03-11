//
//  TGMamaPapa.h
//  TGMamaPapa
//
//  Created by Tora on 2/18/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef TGMamaPapa_TGMamaPapa_h
#define TGMamaPapa_TGMamaPapa_h

typedef enum {
    TGMamaPapaResultNone,
    TGMamaPapaResultMama,
    TGMamaPapaResultPapa,
    TGMamaPapaResultMamaPapa
} TGMamaPapaResult;

extern
TGMamaPapaResult TGMamaPapa(int value);

#endif
