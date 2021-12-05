// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_DRIPSTONECLUSTERFEATURE
#include "Extra/DripstoneClusterFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_DRIPSTONECLUSTERFEATURE
class DripstoneClusterFeature {
#include "Extra/DripstoneClusterFeatureAPI.hpp"
public:
    /*0*/ virtual ~DripstoneClusterFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /*
    inline class std::optional<class BlockPos> place(class IBlockWorldGenAPI& a0, class BlockPos const& a1, class Random& a2, class RenderParams& a3) const{
        class std::optional<class BlockPos> (DripstoneClusterFeature::*rv)(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
        *((void**)&rv) = dlsym("?place@DripstoneClusterFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z");
        return (this->*rv)(std::forward<class IBlockWorldGenAPI&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Random&>(a2), std::forward<class RenderParams&>(a3));
    }
    */

protected:

private:
    MCAPI static bool _placeColumn(class IBlockWorldGenAPI&, class Random&, class BlockPos const&, int, int, float, double, int, float);
    MCAPI static void _replaceBlocksWithDripstoneBlocks(class IBlockWorldGenAPI&, class BlockPos const&, int, unsigned char);
};