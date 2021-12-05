// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_CACTUSFEATURE
#include "Extra/CactusFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_CACTUSFEATURE
class CactusFeature : public Feature {
#include "Extra/CactusFeatureAPI.hpp"
public:
    /*0*/ virtual ~CactusFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /*
    inline bool place(class BlockSource& a0, class BlockPos const& a1, class Random& a2) const{
        bool (CactusFeature::*rv)(class BlockSource&, class BlockPos const&, class Random&) const;
        *((void**)&rv) = dlsym("?place@CactusFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Random&>(a2));
    }
    */

protected:

private:
};