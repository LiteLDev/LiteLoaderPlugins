// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlueIceFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLUEICEFEATURE
public:
    class BlueIceFeature& operator=(class BlueIceFeature const&) = delete;
    BlueIceFeature(class BlueIceFeature const&) = delete;
    BlueIceFeature() = delete;
#endif

public:
    /*0*/ virtual ~BlueIceFeature();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

protected:

private:

};