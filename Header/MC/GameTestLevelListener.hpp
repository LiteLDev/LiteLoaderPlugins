// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_GAMETESTLEVELLISTENER
#include "Extra/GameTestLevelListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_GAMETESTLEVELLISTENER
class GameTestLevelListener {
#include "Extra/GameTestLevelListenerAPI.hpp"
public:
    /*0*/ virtual ~GameTestLevelListener();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_3();
    /*5*/ virtual void __unk_vfn_4();
    /*6*/ virtual void __unk_vfn_5();
    /*7*/ virtual int /*enum enum EventResult*/ onLevelTick();
    /*
    inline int \/*enum enum EventResult*\/ onLevelTick(){
        int \/*enum enum EventResult*\/ (GameTestLevelListener::*rv)();
        *((void**)&rv) = dlsym("?onLevelTick@GameTestLevelListener@@UEAA?AW4EventResult@@XZ");
        return (this->*rv)();
    }
    */

protected:

private:
};