// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_RECTLAYOUTFEATURE
#include "Extra/RectLayoutFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_RECTLAYOUTFEATURE
class RectLayoutFeature {
#include "Extra/RectLayoutFeatureAPI.hpp"
public:
    /*0*/ virtual ~RectLayoutFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /*
    inline class std::optional<class BlockPos> place(class IBlockWorldGenAPI& a0, class BlockPos const& a1, class Random& a2, class RenderParams& a3) const{
        class std::optional<class BlockPos> (RectLayoutFeature::*rv)(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
        *((void**)&rv) = dlsym("?place@RectLayoutFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z");
        return (this->*rv)(std::forward<class IBlockWorldGenAPI&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Random&>(a2), std::forward<class RenderParams&>(a3));
    }
    */

protected:

private:
    MCAPI class std::optional<struct RectLayoutFeature::FeatureArea> _tryPlaceFeature(class Vec2 const&, int, class std::array<class std::array<unsigned char, 16>, 16> const&) const;
};