// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CORE
#include "Extra/CoreAPI.hpp"
#undef EXTRA_INCLUDE_PART_CORE
namespace Core {
#include "Extra/CoreAPI.hpp"

MCAPI unsigned __int64 operator&(enum Core::DirectoryIterationFlags, enum Core::DirectoryIterationFlags);
MCAPI std::string const sLockBlobName;
MCAPI std::string const sMultiChunkTag;
MCAPI class std::shared_ptr<class Core::FileStorageArea> sRootStorageArea;
MCAPI bool starts_with(class Core::StringSpan, class Core::StringSpan);
MCAPI class Core::Result transferDirectory(class Core::FileSystemImpl*, class Core::Path const&, class Core::FileSystemImpl*, class Core::Path const&, class std::function<class Core::Result(class Core::Path const&, class Core::Path const&)> const&);

} // namespace Core