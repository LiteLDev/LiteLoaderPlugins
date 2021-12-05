// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_TAKEFLOWERGOAL
#include "Extra/TakeFlowerGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_TAKEFLOWERGOAL
class TakeFlowerGoal {
#include "Extra/TakeFlowerGoalAPI.hpp"
public:
    /*0*/ virtual ~TakeFlowerGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*
    inline void appendDebugInfo(std::string& a0) const{
        void (TakeFlowerGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@TakeFlowerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canContinueToUse(){
        bool (TakeFlowerGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@TakeFlowerGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (TakeFlowerGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@TakeFlowerGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void start(){
        void (TakeFlowerGoal::*rv)();
        *((void**)&rv) = dlsym("?start@TakeFlowerGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void stop(){
        void (TakeFlowerGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@TakeFlowerGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (TakeFlowerGoal::*rv)();
        *((void**)&rv) = dlsym("?tick@TakeFlowerGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};