// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_ICESPIKEFEATURE
#include "Extra/IceSpikeFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_ICESPIKEFEATURE
class IceSpikeFeature : public Feature {
#include "Extra/IceSpikeFeatureAPI.hpp"
public:
    /*0*/ virtual ~IceSpikeFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /*
    inline bool place(class BlockSource& a0, class BlockPos const& a1, class Random& a2) const{
        bool (IceSpikeFeature::*rv)(class BlockSource&, class BlockPos const&, class Random&) const;
        *((void**)&rv) = dlsym("?place@IceSpikeFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Random&>(a2));
    }
    */

protected:

private:
};