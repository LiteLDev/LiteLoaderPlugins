// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_TELEPORTSYSTEM
#include "Extra/TeleportSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_TELEPORTSYSTEM
class TeleportSystem {
#include "Extra/TeleportSystemAPI.hpp"
public:
    /*0*/ virtual ~TeleportSystem();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void tick(class EntityRegistry&);
    /*
    inline void tick(class EntityRegistry& a0){
        void (TeleportSystem::*rv)(class EntityRegistry&);
        *((void**)&rv) = dlsym("?tick@TeleportSystem@@UEAAXAEAVEntityRegistry@@@Z");
        return (this->*rv)(std::forward<class EntityRegistry&>(a0));
    }
    */

protected:

private:
};