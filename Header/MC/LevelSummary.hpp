// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_LEVELSUMMARY
#include "Extra/LevelSummaryAPI.hpp"
#undef EXTRA_INCLUDE_PART_LEVELSUMMARY
class LevelSummary {
#include "Extra/LevelSummaryAPI.hpp"
public:
    MCAPI static class Core::PathBuffer<std::string > const CUSTOM_ICON_FILENAME;
    MCAPI static std::string const DEFAULT_WORLD_ICON_FILENAME;
    MCAPI static std::string const INVALID_LEVEL_ID;
    MCAPI static class Core::PathBuffer<std::string > const WORLD_ICON_FILENAME;
    MCAPI static class Core::PathBuffer<std::string > buildCustomIconPath(class Core::Path const&);
    MCAPI static class Core::PathBuffer<std::string > buildWorldIconPath(class Core::Path const&);

protected:

private:
};