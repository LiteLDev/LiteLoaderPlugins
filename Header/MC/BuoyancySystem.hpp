// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_BUOYANCYSYSTEM
#include "Extra/BuoyancySystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_BUOYANCYSYSTEM
class BuoyancySystem {
#include "Extra/BuoyancySystemAPI.hpp"
public:
    /*0*/ virtual ~BuoyancySystem();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void tick(class EntityRegistry&);
    /*
    inline void tick(class EntityRegistry& a0){
        void (BuoyancySystem::*rv)(class EntityRegistry&);
        *((void**)&rv) = dlsym("?tick@BuoyancySystem@@UEAAXAEAVEntityRegistry@@@Z");
        return (this->*rv)(std::forward<class EntityRegistry&>(a0));
    }
    */

protected:

private:
};