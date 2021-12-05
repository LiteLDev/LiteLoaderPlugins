// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_HUGEMUSHROOMFEATURE
#include "Extra/HugeMushroomFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_HUGEMUSHROOMFEATURE
class HugeMushroomFeature : public Feature {
#include "Extra/HugeMushroomFeatureAPI.hpp"
public:
    /*0*/ virtual ~HugeMushroomFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /*
    inline bool place(class BlockSource& a0, class BlockPos const& a1, class Random& a2) const{
        bool (HugeMushroomFeature::*rv)(class BlockSource&, class BlockPos const&, class Random&) const;
        *((void**)&rv) = dlsym("?place@HugeMushroomFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Random&>(a2));
    }
    */
    MCAPI bool placeFixed(class BlockSource&, class BlockPos const&, int, int) const;

protected:

private:
    MCAPI bool _canSurvive(class Block const&) const;
};