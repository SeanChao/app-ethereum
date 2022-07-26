/*******************************************************************************
 *   Ledger Ethereum App
 *   (c) 2016-2019 Ledger
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ********************************************************************************/

#ifdef HAVE_TOKENS_EXTRA_LIST

#include "tokens.h"

const tokenDefinition_t const TOKENS_EXTRA[NUM_TOKENS_EXTRA] = {

    // Ropsten DeversiFi tokens
    {{0x4c, 0x5f, 0x66, 0x59, 0x61, 0x97, 0xa8, 0x6f, 0xb3, 0x0a,
      0x24, 0x35, 0xe2, 0xef, 0x4d, 0xdc, 0xb3, 0x93, 0x42, 0xc9},
     "tUSDT ",
     6},
    {{0x1c, 0x0f, 0x17, 0x43, 0x67, 0x40, 0xbf, 0xb9, 0x2c, 0x10,
      0x70, 0xee, 0x86, 0x32, 0x2d, 0xe8, 0x90, 0x83, 0x7c, 0x6a},
     "tUSDT ",
     6},
    {{0xcd, 0x07, 0x7a, 0xbe, 0xdd, 0x83, 0x1a, 0x34, 0x43, 0xff,
      0xbe, 0x24, 0xfb, 0x76, 0x66, 0x1b, 0xbb, 0x17, 0xeb, 0x69},
     "tZRX ",
     18},
    {{0x40, 0xd8, 0x97, 0x85, 0x00, 0xbf, 0x68, 0x32, 0x4a, 0x51,
      0x53, 0x3c, 0xd6, 0xa2, 0x1e, 0x3e, 0x59, 0xbe, 0x32, 0x4a},
     "tBTC ",
     18},
    // Goerli DeversiFi tokens
    {{0xd9, 0x97, 0xa8, 0x63, 0x46, 0xe7, 0x65, 0x18, 0xe6, 0x92,
      0x25, 0x56, 0xf3, 0x4d, 0x76, 0x61, 0x30, 0xc0, 0xbb, 0xfd},
     "tUSDT ",
     6},
    {{0xc1, 0xd5, 0x79, 0xeb, 0xff, 0x7c, 0x0f, 0x6c, 0xfd, 0x9a,
      0xd5, 0xfb, 0x26, 0x7f, 0xec, 0x73, 0xbe, 0x70, 0xc8, 0xf7},
     "tBTC ",
     18},
    {{0xa8, 0xf3, 0x14, 0x4f, 0xea, 0x2c, 0x37, 0x5a, 0xd0, 0x58,
      0xec, 0x12, 0x09, 0x9a, 0x5a, 0x21, 0xa2, 0x6f, 0xe9, 0x96},
     "tDVF ",
     18},
    {{0x4c, 0xda, 0xbe, 0xc1, 0x2a, 0x39, 0x7f, 0xb6, 0xef, 0xaf,
      0x46, 0x13, 0xd5, 0xdf, 0xd7, 0x9b, 0x30, 0x9a, 0xe9, 0xfa},
     "tXDVF ",
     18},

};

#endif

#ifdef HAVE_TOKENS_LIST

#include "tokens.h"

// Example of custom tokens (not actually used by the main ethereum app).
// Format of a token is: `{address, ticker, decimals}`.
const tokenDefinition_t const TOKENS_ETHEREUM[NUM_TOKENS_ETHEREUM] = {
    {{0xdb, 0x25, 0xf2, 0x11, 0xab, 0x05, 0xb1, 0xc9, 0x7d, 0x59,
      0x55, 0x16, 0xf4, 0x57, 0x94, 0x52, 0x8a, 0x80, 0x7a, 0xd8},
     "EURS ",
     2},
    {{0xa7, 0x44, 0x76, 0x44, 0x31, 0x19, 0xA9, 0x42, 0xdE, 0x49,
      0x85, 0x90, 0xFe, 0x1f, 0x24, 0x54, 0xd7, 0xD4, 0xaC, 0x0d},
     "GNT ",
     18},
};

const tokenDefinition_t const TOKENS_AKROMA[NUM_TOKENS_AKROMA] = {};

const tokenDefinition_t const TOKENS_ELLAISM[NUM_TOKENS_ELLAISM] = {
    {{0x99, 0x1e, 0x7f, 0xe4, 0xb0, 0x5f, 0x2b, 0x3d, 0xb1, 0xd7,
      0x88, 0xe7, 0x05, 0x96, 0x3f, 0x5d, 0x64, 0x7b, 0x00, 0x44},
     "MINING",
     18},
};

const tokenDefinition_t const TOKENS_ETHEREUM_CLASSIC[NUM_TOKENS_ETHEREUM_CLASSIC] = {
    {{0x6F, 0x6D, 0xEb, 0x5d, 0xb0, 0xC4, 0x99, 0x4A, 0x82, 0x83,
      0xA0, 0x1D, 0x6C, 0xFe, 0xEB, 0x27, 0xFc, 0x3b, 0xBe, 0x9C},
     "Smart ",
     0},
    {{0x08, 0x5f, 0xb4, 0xf2, 0x40, 0x31, 0xea, 0xed, 0xbc, 0x2b,
      0x61, 0x1a, 0xa5, 0x28, 0xf2, 0x23, 0x43, 0xeb, 0x52, 0xdb},
     "BEC ",
     8},
    {{0x5a, 0xce, 0x17, 0xf8, 0x7c, 0x73, 0x91, 0xe5, 0x79, 0x2a,
      0x76, 0x83, 0x06, 0x9a, 0x80, 0x25, 0xb8, 0x3b, 0xbd, 0x85},
     "PLAY ",
     0},
    {{0x6A, 0xDa, 0x6F, 0x48, 0xC8, 0x15, 0x68, 0x95, 0x02, 0xC4,
      0x3e, 0xC1, 0xa5, 0x9F, 0x1b, 0x5D, 0xD3, 0xC0, 0x4E, 0x1F},
     "UNV ",
     18},
};

const tokenDefinition_t const TOKENS_ETHERSOCIAL[NUM_TOKENS_ETHERSOCIAL] = {};

const tokenDefinition_t const TOKENS_ETHER1[NUM_TOKENS_ETHER1] = {};

const tokenDefinition_t const TOKENS_PIRL[NUM_TOKENS_PIRL] = {};

const tokenDefinition_t const TOKENS_POA[NUM_TOKENS_POA] = {};

const tokenDefinition_t const TOKENS_RSK[NUM_TOKENS_RSK] = {};

const tokenDefinition_t const TOKENS_UBIQ[NUM_TOKENS_UBIQ] = {
    {{0xd2, 0x45, 0x20, 0x7c, 0xfb, 0xf6, 0xeb, 0x6f, 0x34, 0x97,
      0x0d, 0xb2, 0xa8, 0x07, 0xab, 0x1d, 0x17, 0x8f, 0xde, 0x6c},
     "APX ",
     8},
    {{0xff, 0x3b, 0xf0, 0x57, 0xad, 0xf3, 0xb0, 0xe0, 0x15, 0xb6,
      0x46, 0x53, 0x31, 0xa6, 0x23, 0x6e, 0x55, 0x68, 0x82, 0x74},
     "BEER ",
     0},
    {{0x08, 0x53, 0x3d, 0x6a, 0x06, 0xce, 0x36, 0x52, 0x98, 0xb1,
      0x2e, 0xf9, 0x2e, 0xb4, 0x07, 0xcb, 0xa8, 0xaa, 0x82, 0x73},
     "CEFS ",
     8},
    {{0x94, 0xad, 0x7e, 0x41, 0xc1, 0xd4, 0x40, 0x22, 0xc4, 0xf4,
      0x7c, 0xb1, 0xba, 0x01, 0x9f, 0xd1, 0xa0, 0x22, 0xc5, 0x36},
     "DOT ",
     8},
    {{0x4b, 0x48, 0x99, 0xa1, 0x0f, 0x3e, 0x50, 0x7d, 0xb2, 0x07,
      0xb0, 0xee, 0x24, 0x26, 0x02, 0x9e, 0xfa, 0x16, 0x8a, 0x67},
     "QWARK ",
     8},
    {{0x5e, 0x17, 0x15, 0xbb, 0x79, 0x80, 0x5b, 0xd6, 0x72, 0x72,
      0x97, 0x60, 0xb3, 0xf7, 0xf3, 0x4d, 0x6f, 0x48, 0x50, 0x98},
     "RICKS ",
     8},
};

const tokenDefinition_t const TOKENS_EXPANSE[NUM_TOKENS_EXPANSE] = {};

const tokenDefinition_t const TOKENS_WANCHAIN[NUM_TOKENS_WANCHAIN] = {};

const tokenDefinition_t const TOKENS_KUSD[NUM_TOKENS_KUSD] = {};

const tokenDefinition_t const TOKENS_MUSICOIN[NUM_TOKENS_MUSICOIN] = {};

const tokenDefinition_t const TOKENS_CALLISTO[NUM_TOKENS_CALLISTO] = {};

const tokenDefinition_t const TOKENS_ETHERGEM[NUM_TOKENS_ETHERGEM] = {};

const tokenDefinition_t const TOKENS_ATHEIOS[NUM_TOKENS_ATHEIOS] = {};

const tokenDefinition_t const TOKENS_GOCHAIN[NUM_TOKENS_GOCHAIN] = {};

const tokenDefinition_t const TOKENS_MIX[NUM_TOKENS_MIX] = {};

const tokenDefinition_t const TOKENS_REOSC[NUM_TOKENS_REOSC] = {};

const tokenDefinition_t const TOKENS_HPB[NUM_TOKENS_HPB] = {};

const tokenDefinition_t const TOKENS_TOMOCHAIN[NUM_TOKENS_TOMOCHAIN] = {};

const tokenDefinition_t const TOKENS_TOBALABA[NUM_TOKENS_TOBALABA] = {};

const tokenDefinition_t const TOKENS_DEXON[NUM_TOKENS_DEXON] = {};

const tokenDefinition_t const TOKENS_VOLTA[NUM_TOKENS_VOLTA] = {};

const tokenDefinition_t const TOKENS_EWC[NUM_TOKENS_EWC] = {};

const tokenDefinition_t const TOKENS_ARTIS_SIGMA1[NUM_TOKENS_ARTIS_SIGMA1] = {};

const tokenDefinition_t const TOKENS_ARTIS_TAU1[NUM_TOKENS_ARTIS_TAU1] = {};

const tokenDefinition_t const TOKENS_WEBCHAIN[NUM_TOKENS_WEBCHAIN] = {};

const tokenDefinition_t const TOKENS_THUNDERCORE[NUM_TOKENS_THUNDERCORE] = {};

const tokenDefinition_t const TOKENS_FLARE[NUM_TOKENS_FLARE] = {};

const tokenDefinition_t const TOKENS_BSC[NUM_TOKENS_BSC] = {};

const tokenDefinition_t const TOKENS_SONGBIRD[NUM_TOKENS_SONGBIRD] = {};

const tokenDefinition_t const TOKENS_MOONRIVER[NUM_TOKENS_MOONRIVER] = {};

const tokenDefinition_t const TOKENS_POLYGON[NUM_TOKENS_POLYGON] = {};

const tokenDefinition_t const TOKENS_SHYFT[NUM_TOKENS_SHYFT] = {};

const tokenDefinition_t const TOKENS_CONFLUX_ESPACE[NUM_TOKENS_CONFLUX_ESPACE] = {};

const tokenDefinition_t const TOKENS_MOONBEAM[NUM_TOKENS_MOONBEAM] = {};

const tokenDefinition_t const TOKENS_BTTC[NUM_TOKENS_BTTC] = {};

const tokenDefinition_t const TOKENS_KARDIACHAIN[NUM_TOKENS_KARDIACHAIN] = {};

const tokenDefinition_t const TOKENS_WETHIO[NUM_TOKENS_WETHIO] = {};

const tokenDefinition_t const TOKENS_METER[NUM_TOKENS_METER] = {};

#endif
