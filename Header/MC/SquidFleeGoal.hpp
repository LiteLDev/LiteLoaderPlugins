// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SQUIDFLEEGOAL
#include "Extra/SquidFleeGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_SQUIDFLEEGOAL
class SquidFleeGoal {
#include "Extra/SquidFleeGoalAPI.hpp"
public:
    /*0*/ virtual ~SquidFleeGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual void __unk_vfn_3();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*
    inline void stop(){
        void (SquidFleeGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@SquidFleeGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline bool canContinueToUse(){
        bool (SquidFleeGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@SquidFleeGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void start(){
        void (SquidFleeGoal::*rv)();
        *((void**)&rv) = dlsym("?start@SquidFleeGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void appendDebugInfo(std::string& a0) const{
        void (SquidFleeGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@SquidFleeGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canUse(){
        bool (SquidFleeGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@SquidFleeGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (SquidFleeGoal::*rv)();
        *((void**)&rv) = dlsym("?tick@SquidFleeGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};