// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_DRAGONSCANNINGGOAL
#include "Extra/DragonScanningGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_DRAGONSCANNINGGOAL
class DragonScanningGoal {
#include "Extra/DragonScanningGoalAPI.hpp"
public:
    /*0*/ virtual ~DragonScanningGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*
    inline void appendDebugInfo(std::string& a0) const{
        void (DragonScanningGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@DragonScanningGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canContinueToUse(){
        bool (DragonScanningGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@DragonScanningGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (DragonScanningGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@DragonScanningGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void start(){
        void (DragonScanningGoal::*rv)();
        *((void**)&rv) = dlsym("?start@DragonScanningGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void stop(){
        void (DragonScanningGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@DragonScanningGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (DragonScanningGoal::*rv)();
        *((void**)&rv) = dlsym("?tick@DragonScanningGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:
    MCAPI static float SITTING_ATTACK_VIEW_RANGE;
    MCAPI static float SITTING_CHARGE_VIEW_RANGE;
    MCAPI static int SITTING_SCANNING_IDLE_TICKS;
};