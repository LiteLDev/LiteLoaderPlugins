// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_TARGETNEARBYSYSTEM
#include "Extra/TargetNearbySystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_TARGETNEARBYSYSTEM
class TargetNearbySystem {
#include "Extra/TargetNearbySystemAPI.hpp"
public:
    /*0*/ virtual ~TargetNearbySystem();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void tick(class EntityRegistry&);
    /*
    inline void tick(class EntityRegistry& a0){
        void (TargetNearbySystem::*rv)(class EntityRegistry&);
        *((void**)&rv) = dlsym("?tick@TargetNearbySystem@@UEAAXAEAVEntityRegistry@@@Z");
        return (this->*rv)(std::forward<class EntityRegistry&>(a0));
    }
    */

protected:

private:
};