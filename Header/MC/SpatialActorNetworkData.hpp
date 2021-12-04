// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SPATIALACTORNETWORKDATA
#include "Extra/SpatialActorNetworkDataAPI.hpp"
#undef EXTRA_INCLUDE_PART_SPATIALACTORNETWORKDATA
class SpatialActorNetworkData {
#include "Extra/SpatialActorNetworkDataAPI.hpp"

public:
    MCAPI void enableAutoSend(bool);
    MCAPI void handleClientData(class MoveActorAbsoluteData const&);
    MCAPI bool isAutoSendEnabled() const;
    MCAPI bool isOptimizationsEnabled() const;
    MCAPI void sendUpdate(bool, bool, bool);
    MCAPI bool shouldSendMotionPredictionHintsPacket() const;
    MCAPI bool shouldSendUpdate(bool, bool) const;

    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers& getDebugSpatialPacketModifiers();

private:
    MCAPI std::vector<struct NetworkIdentifierWithSubId> _findRelevantPlayersToSendUpdate();
    MCAPI unsigned __int64 _getOptimizationScore(struct ActorUniqueID const&) const;
    MCAPI void _initializeLastSentValues();

    MCAPI static struct SpatialActorNetworkData::DebugSendRateModifiers mDebugSendRateModifiers;
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers mDebugSpatialPacketModifiers;
};