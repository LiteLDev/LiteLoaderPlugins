// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_INTRANGE
#include "Extra/IntRangeAPI.hpp"
#undef EXTRA_INCLUDE_PART_INTRANGE
struct IntRange {
#include "Extra/IntRangeAPI.hpp"

public:
    MCAPI int getValue(class Random&) const;
    MCAPI int getValueInclusive(class Random&) const;
    MCAPI bool isInRangeInclusive(int) const;
    MCAPI bool parseJson(class Json::Value, int, int);

    MCAPI static struct IntRange const ZERO;
};