// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SUBCHUNKBLOCKSTORAGEUTIL
#include "Extra/SubChunkBlockStorageUtilAPI.hpp"
#undef EXTRA_INCLUDE_PART_SUBCHUNKBLOCKSTORAGEUTIL
namespace SubChunkBlockStorageUtil {
#include "Extra/SubChunkBlockStorageUtilAPI.hpp"

MCAPI std::unique_ptr<class SubChunkStorage<class Block>> makeDeserialized(class IDataInput&, class BlockPalette const&, class std::function<class Block const*(unsigned __int64)> const&, class std::function<class Block const*(class CompoundTag const&)> const&, enum SubChunkFormat);

} // namespace SubChunkBlockStorageUtil