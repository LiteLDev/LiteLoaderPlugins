// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "RandomStrollGoal.hpp"
#define EXTRA_INCLUDE_PART_RANDOMFLYINGGOAL
#include "Extra/RandomFlyingGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_RANDOMFLYINGGOAL
class RandomFlyingGoal : public RandomStrollGoal {
#include "Extra/RandomFlyingGoalAPI.hpp"
public:
    /*0*/ virtual ~RandomFlyingGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void appendDebugInfo(std::string&) const;
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void __unk_vfn_2();
    /*6*/ virtual bool _setWantedPosition();
    /*
    inline bool _setWantedPosition(){
        bool (RandomFlyingGoal::*rv)();
        *((void**)&rv) = dlsym("?_setWantedPosition@RandomFlyingGoal@@MEAA_NXZ");
        return (this->*rv)();
    }
    inline void appendDebugInfo(std::string& a0) const{
        void (RandomFlyingGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@RandomFlyingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canUse(){
        bool (RandomFlyingGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@RandomFlyingGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    */

protected:

private:
    MCAPI bool _getTreePos(class Vec3&) const;
};