// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "RakNet.hpp"
#define EXTRA_INCLUDE_PART_REGIONFILE
#include "Extra/RegionFileAPI.hpp"
#undef EXTRA_INCLUDE_PART_REGIONFILE
class RegionFile {
#include "Extra/RegionFileAPI.hpp"
public:
    /*0*/ virtual ~RegionFile();

public:
    MCAPI bool open();
    MCAPI bool readChunk(int, int, class RakNet::BitStream**);
};