// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PLAYERRESPAWNBLOCKRADIUSRANDOMIZER
#include "Extra/PlayerRespawnBlockRadiusRandomizerAPI.hpp"
#undef EXTRA_INCLUDE_PART_PLAYERRESPAWNBLOCKRADIUSRANDOMIZER
class PlayerRespawnBlockRadiusRandomizer {
#include "Extra/PlayerRespawnBlockRadiusRandomizerAPI.hpp"

public:
    MCAPI bool getNextPosition(class Vec3&, bool);
    MCAPI void init(unsigned int, class Random&);
};