// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_FLOATGOAL
#include "Extra/FloatGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_FLOATGOAL
class FloatGoal {
#include "Extra/FloatGoalAPI.hpp"
public:
    /*0*/ virtual ~FloatGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
};