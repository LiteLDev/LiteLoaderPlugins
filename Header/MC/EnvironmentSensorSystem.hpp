// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_ENVIRONMENTSENSORSYSTEM
#include "Extra/EnvironmentSensorSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENVIRONMENTSENSORSYSTEM
class EnvironmentSensorSystem {
#include "Extra/EnvironmentSensorSystemAPI.hpp"
public:
    /*0*/ virtual ~EnvironmentSensorSystem();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void tick(class EntityRegistry&);
    /*
    inline void tick(class EntityRegistry& a0){
        void (EnvironmentSensorSystem::*rv)(class EntityRegistry&);
        *((void**)&rv) = dlsym("?tick@EnvironmentSensorSystem@@UEAAXAEAVEntityRegistry@@@Z");
        return (this->*rv)(std::forward<class EntityRegistry&>(a0));
    }
    */

protected:

private:
};