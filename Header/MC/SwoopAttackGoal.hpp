// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SWOOPATTACKGOAL
#include "Extra/SwoopAttackGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_SWOOPATTACKGOAL
class SwoopAttackGoal {
#include "Extra/SwoopAttackGoalAPI.hpp"
public:
    /*0*/ virtual ~SwoopAttackGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*
    inline void appendDebugInfo(std::string& a0) const{
        void (SwoopAttackGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@SwoopAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canContinueToUse(){
        bool (SwoopAttackGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@SwoopAttackGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (SwoopAttackGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@SwoopAttackGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void start(){
        void (SwoopAttackGoal::*rv)();
        *((void**)&rv) = dlsym("?start@SwoopAttackGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void stop(){
        void (SwoopAttackGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@SwoopAttackGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (SwoopAttackGoal::*rv)();
        *((void**)&rv) = dlsym("?tick@SwoopAttackGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};