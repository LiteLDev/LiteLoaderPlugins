// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_MINECRAFTSCHEDULER
#include "Extra/MinecraftSchedulerAPI.hpp"
#undef EXTRA_INCLUDE_PART_MINECRAFTSCHEDULER
class MinecraftScheduler {
#include "Extra/MinecraftSchedulerAPI.hpp"
public:
    MCAPI static class Scheduler& client();
    MCAPI static void destroyClientSingleton();

protected:

private:
    MCAPI static std::unique_ptr<class Scheduler> mInstance;
};