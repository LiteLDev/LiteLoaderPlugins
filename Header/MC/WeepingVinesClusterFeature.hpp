// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_WEEPINGVINESCLUSTERFEATURE
#include "Extra/WeepingVinesClusterFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_WEEPINGVINESCLUSTERFEATURE
class WeepingVinesClusterFeature : public Feature {
#include "Extra/WeepingVinesClusterFeatureAPI.hpp"
public:
    /*0*/ virtual ~WeepingVinesClusterFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /*
    inline bool place(class BlockSource& a0, class BlockPos const& a1, class Random& a2) const{
        bool (WeepingVinesClusterFeature::*rv)(class BlockSource&, class BlockPos const&, class Random&) const;
        *((void**)&rv) = dlsym("?place@WeepingVinesClusterFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Random&>(a2));
    }
    */

protected:

private:
    MCAPI bool _isInvalidPlacementLocation(class BlockSource&, class BlockPos const&) const;
    MCAPI void _placeRoofNetherWart(class BlockSource&, class BlockPos const&, class Random&) const;
    MCAPI void _placeRoofWeepingVines(class BlockSource&, class BlockPos const&, class Random&) const;
};