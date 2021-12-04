// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_CORALCRUSTFEATURE
#include "Extra/CoralCrustFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_CORALCRUSTFEATURE
class CoralCrustFeature : public Feature {
#include "Extra/CoralCrustFeatureAPI.hpp"
public:
    /*0*/ virtual ~CoralCrustFeature();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

private:
    MCAPI class BlockPos _getCropOffsetFromRot(int, int) const;
    MCAPI class BlockPos _getOffsetFromRot(int, int) const;
    MCAPI void _placeCoral(class BlockSource&, class BlockPos const&, class Random&, std::vector<class BlockPos>&, std::vector<struct std::pair<class BlockPos, unsigned char>>&, int) const;
    MCAPI void _placeCoralBase(class BlockSource&, class BlockPos const&, class Random&, class LegacyStructureTemplate&, class LegacyStructureSettings&) const;
    MCAPI void _placeSideDecorations(class BlockSource&, class BlockPos const&, class Random&, unsigned char) const;
};