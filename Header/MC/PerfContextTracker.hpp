// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_PERFCONTEXTTRACKER
#include "Extra/PerfContextTrackerAPI.hpp"
#undef EXTRA_INCLUDE_PART_PERFCONTEXTTRACKER
class PerfContextTracker {
#include "Extra/PerfContextTrackerAPI.hpp"
public:
    MCAPI void incrementPacketReceivedInfo(unsigned int);
    MCAPI void incrementPacketSentInfo(unsigned int);
    MCAPI static class PerfContextTracker& getInstance();

protected:

private:
};