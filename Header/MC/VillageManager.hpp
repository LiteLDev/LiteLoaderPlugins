// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_VILLAGEMANAGER
#include "Extra/VillageManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART_VILLAGEMANAGER
class VillageManager {
#include "Extra/VillageManagerAPI.hpp"
public:
    MCAPI class std::weak_ptr<class Village> fetchClosestVillage(class BlockPos const&, int, unsigned int) const;
    MCAPI class std::weak_ptr<class Village> fetchClosestVillageMostSuitableForDweller(class BlockPos const&, int, unsigned int) const;
    MCAPI class std::weak_ptr<class Village> getClosestVillageWithRaid(class BlockPos const&);
    MCAPI class std::weak_ptr<class POIInstance> getPOI(class BlockPos const&) const;
    MCAPI class HashedString getPOIInitEventFromName(class HashedString const&) const;
    MCAPI class std::weak_ptr<class Village> getVillageByID(class mce::UUID const&) const;
    MCAPI void insertPOI(class std::shared_ptr<class POIInstance>&&);
    MCAPI bool isValidPOIType(class BlockPos const&, class Block const&) const;
    MCAPI bool isWanderingTraderManagedByScheduler(class Actor const&);
    MCAPI void loadAllVillages();
    MCAPI void removePOI(class std::weak_ptr<class POIInstance>);
    MCAPI void saveAllVillages();
    MCAPI void submitFindPOIQuery(struct ActorUniqueID const&);
    MCAPI void tick(struct Tick const&);
    MCAPI void tickVillages(struct Tick const&, class Vec3 const&, class BlockSource&);
    MCAPI class std::shared_ptr<class POIInstance> tryCreatePOI(class BlockPos const&, class Block const&);
    MCAPI static int const MAX_POI_TOLERANCE_DIST;

protected:

private:
    MCAPI void _addPOIWithinRadius(class BlockPos const&, class BlockSource&);
    MCAPI void _assignPOIOnly(class std::shared_ptr<class POIInstance>&&);
    MCAPI float _calculateDistanceFromPositionToEdgeOfVillage(class BlockPos const&, class Village const&) const;
    MCAPI class std::shared_ptr<class Village> _createOrGetVillage(class mce::UUID const&, class BlockPos const&);
    MCAPI class std::unordered_map<class Village const*, enum VillageManager::BedAvailabilityState, struct std::hash<class Village const*>, struct std::equal_to<class Village const*>, class std::allocator<struct std::pair<class Village const* const, enum VillageManager::BedAvailabilityState> > > _getVillageWithBedsAvailableMap() const;
    MCAPI void _loadPOIBlueprints();
    MCAPI void _processNextUnclusteredPOIQuery();
    MCAPI void _removeVillage(class Village&);
    MCAPI void _tryAssignPOIOrCreateVillage(class std::shared_ptr<class POIInstance>&&);
    MCAPI void _unclusterDerelictPOIs(std::vector<class std::weak_ptr<class POIInstance>>&);
    MCAPI static unsigned __int64 const MAX_POI_QUERIES;
    MCAPI static int const MAX_QUERY_SCAN_ITERATIONS;
    MCAPI static int const VILLAGE_HERO_EFFECT_DURATION;
};