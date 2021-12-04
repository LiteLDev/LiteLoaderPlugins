// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_CHUNKLOADTELEMETRYDATA
#include "Extra/ChunkLoadTelemetryDataAPI.hpp"
#undef EXTRA_INCLUDE_PART_CHUNKLOADTELEMETRYDATA
struct ChunkLoadTelemetryData {
#include "Extra/ChunkLoadTelemetryDataAPI.hpp"

public:
    MCAPI void recordLoadedChunk(class LevelChunk const&);
    MCAPI class Json::Value toJson() const;
};