// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_RAILACTIVATORSYSTEM
#include "Extra/RailActivatorSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_RAILACTIVATORSYSTEM
class RailActivatorSystem {
#include "Extra/RailActivatorSystemAPI.hpp"
public:
    /*0*/ virtual ~RailActivatorSystem();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void tick(class EntityRegistry&);
    /*
    inline void tick(class EntityRegistry& a0){
        void (RailActivatorSystem::*rv)(class EntityRegistry&);
        *((void**)&rv) = dlsym("?tick@RailActivatorSystem@@UEAAXAEAVEntityRegistry@@@Z");
        return (this->*rv)(std::forward<class EntityRegistry&>(a0));
    }
    */

protected:

private:
    MCAPI void _tickComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class RailActivatorComponent>&);
};