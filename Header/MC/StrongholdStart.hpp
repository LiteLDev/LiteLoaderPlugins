// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StructureStart.hpp"
#define EXTRA_INCLUDE_PART_STRONGHOLDSTART
#include "Extra/StrongholdStartAPI.hpp"
#undef EXTRA_INCLUDE_PART_STRONGHOLDSTART
class StrongholdStart : public StructureStart {
#include "Extra/StrongholdStartAPI.hpp"
public:
    /*0*/ virtual ~StrongholdStart();
    /*2*/ virtual bool isValid() const;
    /*3*/ virtual int /*enum StructureFeatureType*/ getType() const;

private:
    MCAPI void _initializePieceSet(class Random&);
};