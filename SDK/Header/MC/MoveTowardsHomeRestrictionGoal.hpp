// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MoveTowardsHomeRestrictionGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSHOMERESTRICTIONGOAL
public:
    class MoveTowardsHomeRestrictionGoal& operator=(class MoveTowardsHomeRestrictionGoal const&) = delete;
    MoveTowardsHomeRestrictionGoal(class MoveTowardsHomeRestrictionGoal const&) = delete;
    MoveTowardsHomeRestrictionGoal() = delete;
#endif

public:
    /*0*/ virtual ~MoveTowardsHomeRestrictionGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    MCAPI MoveTowardsHomeRestrictionGoal(class Mob&);

protected:

private:

};