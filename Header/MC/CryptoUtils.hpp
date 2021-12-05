// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_CRYPTOUTILS
#include "Extra/CryptoUtilsAPI.hpp"
#undef EXTRA_INCLUDE_PART_CRYPTOUTILS
namespace CryptoUtils {
#include "Extra/CryptoUtilsAPI.hpp"
    MCAPI std::string getDirectroyChecksum(class Core::Path const&);
    MCAPI std::string getFileChecksum(class Core::Path const&);
};