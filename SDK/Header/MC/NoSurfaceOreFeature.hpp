// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NoSurfaceOreFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NOSURFACEOREFEATURE
public:
    class NoSurfaceOreFeature& operator=(class NoSurfaceOreFeature const&) = delete;
    NoSurfaceOreFeature(class NoSurfaceOreFeature const&) = delete;
    NoSurfaceOreFeature() = delete;
#endif

public:
    /*0*/ virtual ~NoSurfaceOreFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    MCAPI NoSurfaceOreFeature(struct IntRange, class BlockDescriptor const&, class BlockDescriptor const&, class BlockDescriptor const&);

protected:

private:

};