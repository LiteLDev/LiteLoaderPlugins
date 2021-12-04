// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "RandomStrollGoal.hpp"
#define EXTRA_INCLUDE_PART_SILVERFISHMERGEWITHSTONEGOAL
#include "Extra/SilverfishMergeWithStoneGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_SILVERFISHMERGEWITHSTONEGOAL
class SilverfishMergeWithStoneGoal : public RandomStrollGoal {
#include "Extra/SilverfishMergeWithStoneGoalAPI.hpp"
public:
    /*0*/ virtual ~SilverfishMergeWithStoneGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual bool canBeInterrupted();
    /*4*/ virtual void start();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual void unk_vfn_8();
    /*9*/ virtual void unk_vfn_9();
};