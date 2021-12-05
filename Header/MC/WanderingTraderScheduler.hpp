// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_WANDERINGTRADERSCHEDULER
#include "Extra/WanderingTraderSchedulerAPI.hpp"
#undef EXTRA_INCLUDE_PART_WANDERINGTRADERSCHEDULER
class WanderingTraderScheduler {
#include "Extra/WanderingTraderSchedulerAPI.hpp"
public:
    MCAPI void readSaveData();
    MCAPI void tick();
    MCAPI void writeSaveData() const;

protected:

private:
    MCAPI bool _doesWanderingTraderExist() const;
    MCAPI class std::optional<class BlockPos> _findClosestSpawnablePositionInColumn(class BlockPos const&, class BlockSource&);
    MCAPI class Actor* _getRandomPlayerInOverworld() const;
    MCAPI class BlockPos _getRandomXZAroundPos(class BlockPos const&, int, bool);
    MCAPI class std::optional<class BlockPos> _getSpawnPosFromNearestVillageToPlayerPos(class BlockPos const&, class BlockSource&);
    MCAPI bool _isPosSafeForSpawning(class BlockPos const&, class BlockSource&);
    MCAPI static float const CHANCE_TO_SPAWN_IN_WILDERNESS;
    MCAPI static std::vector<float> const CHANCE_TO_SPAWN_PER_DAY;
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_MEETING_AREA;
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_PLAYER;
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE;
    MCAPI static int const LENGTH_OF_DAY_IN_TICKS;
};