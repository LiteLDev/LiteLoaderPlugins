// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_GAMESESSION
#include "Extra/GameSessionAPI.hpp"
#undef EXTRA_INCLUDE_PART_GAMESESSION
class GameSession {
#include "Extra/GameSessionAPI.hpp"
public:
    MCAPI void setLevel(struct std::pair<std::unique_ptr<class Level>, class OwnerPtrT<struct EntityRefTraits> >);

protected:

private:
};