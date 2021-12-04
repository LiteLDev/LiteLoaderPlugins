// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_GAMETYPECONV
#include "Extra/GameTypeConvAPI.hpp"
#undef EXTRA_INCLUDE_PART_GAMETYPECONV
namespace GameTypeConv {
#include "Extra/GameTypeConvAPI.hpp"

MCAPI std::string gameTypeToNonLocString(enum GameType);
MCAPI std::string gameTypeToString(enum GameType);
MCAPI enum GameType intToGameType(int);
MCAPI enum GameType stringToGameType(std::string const&);

} // namespace GameTypeConv