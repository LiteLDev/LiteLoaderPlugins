// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_BOUNDS
#include "Extra/BoundsAPI.hpp"
#undef EXTRA_INCLUDE_PART_BOUNDS
struct Bounds {
#include "Extra/BoundsAPI.hpp"
public:
    MCAPI bool contains(struct Bounds const&) const;

protected:

private:
};