// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_FLOCKINGSYSTEM
#include "Extra/FlockingSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_FLOCKINGSYSTEM
class FlockingSystem {
#include "Extra/FlockingSystemAPI.hpp"
public:
    /*0*/ virtual ~FlockingSystem();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry&);
};