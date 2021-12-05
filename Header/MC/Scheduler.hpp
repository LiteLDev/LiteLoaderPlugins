// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SCHEDULER
#include "Extra/SchedulerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCHEDULER
class Scheduler {
#include "Extra/SchedulerAPI.hpp"
public:
    /*0*/ virtual ~Scheduler();

    MCAPI void changeThread(class std::thread::id);
    MCAPI class WorkerPool& getCoroutinePool();
    MCAPI void processCoroutines(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> >, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> >);
    MCAPI void queueCallback(class std::shared_ptr<class BackgroundTaskBase>);
    MCAPI void setTargetFPS(unsigned int);
    MCAPI static float const AVERAGE_TASK_TOLERANCE;

protected:

private:
};