// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_MOVETOWARDSDWELLINGRESTRICTIONGOAL
#include "Extra/MoveTowardsDwellingRestrictionGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVETOWARDSDWELLINGRESTRICTIONGOAL
class MoveTowardsDwellingRestrictionGoal {
#include "Extra/MoveTowardsDwellingRestrictionGoalAPI.hpp"
public:
    /*0*/ virtual ~MoveTowardsDwellingRestrictionGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual void __unk_vfn_3();
    /*6*/ virtual void __unk_vfn_4();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*
    inline void appendDebugInfo(std::string& a0) const{
        void (MoveTowardsDwellingRestrictionGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@MoveTowardsDwellingRestrictionGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canUse(){
        bool (MoveTowardsDwellingRestrictionGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@MoveTowardsDwellingRestrictionGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};