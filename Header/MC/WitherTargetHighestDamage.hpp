// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "TargetGoal.hpp"
#define EXTRA_INCLUDE_PART_WITHERTARGETHIGHESTDAMAGE
#include "Extra/WitherTargetHighestDamageAPI.hpp"
#undef EXTRA_INCLUDE_PART_WITHERTARGETHIGHESTDAMAGE
class WitherTargetHighestDamage : public TargetGoal {
#include "Extra/WitherTargetHighestDamageAPI.hpp"
public:
    /*0*/ virtual ~WitherTargetHighestDamage();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual bool isTargetGoal() const;
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual bool isTargetGoal() const;
    /*9*/ virtual void stop();
    /*10*/ virtual bool _canAttack(class Mob*, class Actor*, bool, bool, struct MobDescriptor const**);

private:
    MCAPI class Player* getHighestDamageTarget();
};