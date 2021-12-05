// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_TARGETGOAL
#include "Extra/TargetGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_TARGETGOAL
class TargetGoal {
#include "Extra/TargetGoalAPI.hpp"
public:
    /*0*/ virtual ~TargetGoal();
    /*1*/ virtual bool canUse() = 0;
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual void __unk_vfn_2();
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual bool _canAttack(class Mob*, class Actor*, bool, bool, struct MobDescriptor const**);
    /*
    inline void stop(){
        void (TargetGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@TargetGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline bool isTargetGoal() const{
        bool (TargetGoal::*rv)() const;
        *((void**)&rv) = dlsym("?isTargetGoal@TargetGoal@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool _canAttack(class Mob* a0, class Actor* a1, bool a2, bool a3, struct MobDescriptor const** a4){
        bool (TargetGoal::*rv)(class Mob*, class Actor*, bool, bool, struct MobDescriptor const**);
        *((void**)&rv) = dlsym("?_canAttack@TargetGoal@@MEAA_NPEAVMob@@PEAVActor@@_N2PEAPEBUMobDescriptor@@@Z");
        return (this->*rv)(std::forward<class Mob*>(a0), std::forward<class Actor*>(a1), std::forward<bool>(a2), std::forward<bool>(a3), std::forward<struct MobDescriptor const**>(a4));
    }
    inline void appendDebugInfo(std::string& a0) const{
        void (TargetGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@TargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canContinueToUse(){
        bool (TargetGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@TargetGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void start(){
        void (TargetGoal::*rv)();
        *((void**)&rv) = dlsym("?start@TargetGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (TargetGoal::*rv)();
        *((void**)&rv) = dlsym("?tick@TargetGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:
    MCAPI bool _canAttack(class Actor*, bool, struct MobDescriptor const**);
    MCAPI bool _canReachAfterDelay(class Actor&);
    MCAPI bool _withinRange(class Actor const&);

private:
};