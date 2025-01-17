// Copyright (c) 2016-2020 The CryptoCoderz Team / Espers
// Copyright (c) 2018-2020 The CryptoCoderz Team / INSaNe project
// Copyright (c) 2018-2020 The Rubix project
// Copyright (c) 2018-2020 The CampusCash project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_MINING_H
#define BITCOIN_MINING_H

#include "bignum.h"

/** Minimum nCoinAge required to stake PoS */
static const unsigned int nStakeMinAge = 2 / 60; // 30 minutes
/** Time to elapse before new modifier is computed */
static const unsigned int nModifierInterval = 2 * 60;
/** Genesis block subsidy */
static const int64_t nGenesisBlockReward = 1 * COIN;
/** Reserve block subsidy */
static const int64_t nBlockRewardReserve = 2000000 * COIN; // premine 200,000,000 CCASH
/** Standard block subsidy */
static const int64_t nBlockStandardReward = 125 * COIN; // older for chain
/** Standard PoW Reward **/
static const int64_t nBlockStandardPoWReward = 83 * COIN;
/** Standard PoS Rewards **/
static const int64_t nBasePoSReward2 = 5 * COIN;
static const int64_t nBasePoSReward3 = 10 * COIN;
static const int64_t nBasePoSReward4 = 15 * COIN;
/** Standard Fees **/
static const int64_t nBaseDevOpsFees = 28.5 * COIN; // Tier 1 fees + DevOpS, Tier 2 masternodes will add on 118 coins to pay Tier 2
static const int64_t nBaseMasternodeFees = 42 * COIN; // Tier 1 fees + DevOpS, Tier 2 masternodes will add on 118 coins to pay Tier 2
static const int64_t nTier2MasternodeBonusFees = 118 * COIN; // Tier 1 fees + DevOpS, Tier 2 masternodes will add on 118 coins to pay Tier 2
static const int64_t nBaseFees = nBaseMasternodeFees + nBaseDevOpsFees; // Tier 1 fees + DevOpS, Tier 2 masternodes will add on 118 coins to pay Tier 2
/** Block spacing preferred */
static const int64_t BLOCK_SPACING = (1 * 60); // One Minute
/** Block spacing minimum */
static const int64_t BLOCK_SPACING_MIN = (1 * 30); // Half a minute (30sec)
/** Block spacing maximum */
static const int64_t BLOCK_SPACING_MAX = (1 * 90); // One minute and a half (1.5min)
/** Desired block times/spacing */
static const int64_t GetTargetSpacing = BLOCK_SPACING;
/** MNengine collateral */
static const int64_t MNengine_COLLATERAL = (1 * COIN);
/** MNengine pool values */
static const int64_t MNengine_POOL_MAX = (999 * COIN);
/** MasterNode required collateral */
inline int64_t MasternodeCollateral(int nHeight) { return 250000; } // .25 Million CCASH required as collateral
/** MasterNode required collateral */
inline int64_t MasternodeCollateral_Tier_2(int nHeight) { return 1000000; } // 1 Million CCASH required as collateral (Tier 2)
/** Coinbase transaction outputs can only be staked after this number of new blocks (network rule) */
static const int nStakeMinConfirmations = 5;
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int nCoinbaseMaturity = 15; // 15-TXs | 90-Mined


#endif // BITCOIN_MINING_H
