// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DIRECTION
#include "Extra/DirectionAPI.hpp"
#undef EXTRA_INCLUDE_PART_DIRECTION
class Direction {
#include "Extra/DirectionAPI.hpp"

public:
    MCAPI static enum Direction::Type const* const const DIRECTION_CLOCKWISE;
    MCAPI static enum Direction::Type const* const const DIRECTION_COUNTER_CLOCKWISE;
    MCAPI static unsigned char const* const const DIRECTION_FACING;
    MCAPI static enum Direction::Type const* const const DIRECTION_OPPOSITE;
    MCAPI static enum Direction::Type const* const const FACING_DIRECTION;
    MCAPI static int const* const const STEP_X;
    MCAPI static int const* const const STEP_Z;
    MCAPI static enum Direction::Type convertFacingDirectionToDirection(unsigned char);
    MCAPI static enum Direction::Type getDirection(float, float);
};