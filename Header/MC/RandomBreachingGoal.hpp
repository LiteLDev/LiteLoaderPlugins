// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "RandomStrollGoal.hpp"
#define EXTRA_INCLUDE_PART_RANDOMBREACHINGGOAL
#include "Extra/RandomBreachingGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_RANDOMBREACHINGGOAL
class RandomBreachingGoal : public RandomStrollGoal {
#include "Extra/RandomBreachingGoalAPI.hpp"
public:
    /*0*/ virtual ~RandomBreachingGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual bool canBeInterrupted();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual void unk_vfn_8();
    /*9*/ virtual void unk_vfn_9();
    /*10*/ virtual bool _setWantedPosition();
};