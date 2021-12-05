// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_WORLDPACKSHISTORYFILE
#include "Extra/WorldPacksHistoryFileAPI.hpp"
#undef EXTRA_INCLUDE_PART_WORLDPACKSHISTORYFILE
class WorldPacksHistoryFile {
#include "Extra/WorldPacksHistoryFileAPI.hpp"
public:
    MCAPI std::vector<class WorldPackHistory> const& getPacks() const;
    MCAPI enum WorldPacksHistoryFile::ParseResult initializeFromJson(class Json::Value const&);

protected:

private:
};