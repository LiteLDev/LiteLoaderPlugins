// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_STRUCTUREHELPERS
#include "Extra/StructureHelpersAPI.hpp"
#undef EXTRA_INCLUDE_PART_STRUCTUREHELPERS
class StructureHelpers {
#include "Extra/StructureHelpersAPI.hpp"
public:
    MCAPI static bool createChest(class StructurePiece&, class BlockSource&, class BoundingBox const&, class Random&, int, int, int, unsigned char, std::string const&);
    MCAPI static bool createDispenser(class StructurePiece&, class BlockSource&, class BoundingBox const&, class Random&, int, int, int, int, std::string const&);
    MCAPI static bool createMinecartChest(class StructurePiece&, class BlockSource&, class BoundingBox const&, class Random&, int, int, int, int, std::string const&);
    MCAPI static void fillColumnDown(class StructurePiece&, class BlockSource&, class Block const&, int, int, int, class BoundingBox const&);
    MCAPI static int getTorchRotation(int, unsigned short);

protected:

private:
};