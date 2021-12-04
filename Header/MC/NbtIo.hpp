// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_NBTIO
#include "Extra/NbtIoAPI.hpp"
#undef EXTRA_INCLUDE_PART_NBTIO
class NbtIo {
#include "Extra/NbtIoAPI.hpp"

public:
    MCAPI static std::unique_ptr<class CompoundTag> read(class IDataInput&);
    MCAPI static void write(class CompoundTag const*, class IDataOutput&);
};