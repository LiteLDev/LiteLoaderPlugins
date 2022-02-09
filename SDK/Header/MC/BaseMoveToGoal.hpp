// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEMOVETOGOAL
public:
    class BaseMoveToGoal& operator=(class BaseMoveToGoal const&) = delete;
    BaseMoveToGoal(class BaseMoveToGoal const&) = delete;
    BaseMoveToGoal() = delete;
#endif

public:
    /*0*/ virtual ~BaseMoveToGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const = 0;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual bool hasReachedTarget() const;
    /*11*/ virtual bool isValidTarget(class BlockSource&, class BlockPos const&) = 0;
    /*12*/ virtual int _nextStartTick();
    /*13*/ virtual bool _canReach(class BlockPos const&);
    /*14*/ virtual void _moveToBlock() = 0;
    /*15*/ virtual class Vec3 _getTargetPosition() const;
    /*16*/ virtual unsigned __int64 _getRepathTime() const;
    /*
    inline  ~BaseMoveToGoal(){
         (BaseMoveToGoal::*rv)();
        *((void**)&rv) = dlsym("??1BaseMoveToGoal@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI BaseMoveToGoal(class Mob&, float, float, float, int, int);
    MCAPI void setTargetPositionOffset(class Vec3 const&);

protected:
    MCAPI class BlockPos _blockAboveTarget() const;
    MCAPI void _checkIfStuck();
    MCAPI bool _isCooldownActive() const;
    MCAPI void setInterval(int);

private:

};