// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_STRUCTURETEMPLATEFEATURE
#include "Extra/StructureTemplateFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_STRUCTURETEMPLATEFEATURE
class StructureTemplateFeature {
#include "Extra/StructureTemplateFeatureAPI.hpp"
public:
    /*0*/ virtual ~StructureTemplateFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
};