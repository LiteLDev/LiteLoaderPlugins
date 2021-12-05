// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_FOLLOWOWNERGOAL
#include "Extra/FollowOwnerGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_FOLLOWOWNERGOAL
class FollowOwnerGoal {
#include "Extra/FollowOwnerGoalAPI.hpp"
public:
    /*0*/ virtual ~FollowOwnerGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual void __unk_vfn_1();
    /*9*/ virtual void onPlayerDimensionChanged(class Player*, class AutomaticID<class Dimension, int>);
    /*
    inline void appendDebugInfo(std::string& a0) const{
        void (FollowOwnerGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@FollowOwnerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canContinueToUse(){
        bool (FollowOwnerGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@FollowOwnerGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (FollowOwnerGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@FollowOwnerGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void onPlayerDimensionChanged(class Player* a0, class AutomaticID<class Dimension, int> a1){
        void (FollowOwnerGoal::*rv)(class Player*, class AutomaticID<class Dimension, int>);
        *((void**)&rv) = dlsym("?onPlayerDimensionChanged@FollowOwnerGoal@@UEAAXPEAVPlayer@@V?$AutomaticID@VDimension@@H@@@Z");
        return (this->*rv)(std::forward<class Player*>(a0), std::forward<class AutomaticID<class Dimension, int>>(a1));
    }
    inline void start(){
        void (FollowOwnerGoal::*rv)();
        *((void**)&rv) = dlsym("?start@FollowOwnerGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void stop(){
        void (FollowOwnerGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@FollowOwnerGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (FollowOwnerGoal::*rv)();
        *((void**)&rv) = dlsym("?tick@FollowOwnerGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};