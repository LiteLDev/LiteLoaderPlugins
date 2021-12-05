// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "StructureFeature.hpp"
#define EXTRA_INCLUDE_PART_SHIPWRECKFEATURE
#include "Extra/ShipwreckFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHIPWRECKFEATURE
class ShipwreckFeature : public StructureFeature {
#include "Extra/ShipwreckFeatureAPI.hpp"
public:
    /*0*/ virtual ~ShipwreckFeature();
    /*1*/ virtual bool getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool);
    /*2*/ virtual bool isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&);
    /*3*/ virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);
    /*
    inline std::unique_ptr<class StructureStart> createStructureStart(class Dimension& a0, class BiomeSource const& a1, class Random& a2, class ChunkPos const& a3, class IPreliminarySurfaceProvider const& a4){
        std::unique_ptr<class StructureStart> (ShipwreckFeature::*rv)(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);
        *((void**)&rv) = dlsym("?createStructureStart@ShipwreckFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z");
        return (this->*rv)(std::forward<class Dimension&>(a0), std::forward<class BiomeSource const&>(a1), std::forward<class Random&>(a2), std::forward<class ChunkPos const&>(a3), std::forward<class IPreliminarySurfaceProvider const&>(a4));
    }
    inline bool getNearestGeneratedFeature(class Dimension& a0, class BiomeSource const& a1, class BlockPos const& a2, class BlockPos& a3, class IPreliminarySurfaceProvider const& a4, bool a5){
        bool (ShipwreckFeature::*rv)(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool);
        *((void**)&rv) = dlsym("?getNearestGeneratedFeature@ShipwreckFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z");
        return (this->*rv)(std::forward<class Dimension&>(a0), std::forward<class BiomeSource const&>(a1), std::forward<class BlockPos const&>(a2), std::forward<class BlockPos&>(a3), std::forward<class IPreliminarySurfaceProvider const&>(a4), std::forward<bool>(a5));
    }
    inline bool isFeatureChunk(class BiomeSource const& a0, class Random& a1, class ChunkPos const& a2, unsigned int a3, class IPreliminarySurfaceProvider const& a4){
        bool (ShipwreckFeature::*rv)(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&);
        *((void**)&rv) = dlsym("?isFeatureChunk@ShipwreckFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@@Z");
        return (this->*rv)(std::forward<class BiomeSource const&>(a0), std::forward<class Random&>(a1), std::forward<class ChunkPos const&>(a2), std::forward<unsigned int>(a3), std::forward<class IPreliminarySurfaceProvider const&>(a4));
    }
    */

protected:

private:
};