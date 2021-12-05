// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_THEENDDIMENSION
#include "Extra/TheEndDimensionAPI.hpp"
#undef EXTRA_INCLUDE_PART_THEENDDIMENSION
class TheEndDimension {
#include "Extra/TheEndDimensionAPI.hpp"
public:    /*
    inline bool isValidSpawn(int a0, int a1) const{
        bool (TheEndDimension::*rv)(int, int) const;
        *((void**)&rv) = dlsym("?isValidSpawn@TheEndDimension@@UEBA_NHH@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1));
    }
    inline bool isDay() const{
        bool (TheEndDimension::*rv)() const;
        *((void**)&rv) = dlsym("?isDay@TheEndDimension@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool hasGround() const{
        bool (TheEndDimension::*rv)() const;
        *((void**)&rv) = dlsym("?hasGround@TheEndDimension@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isFoggyAt(int a0, int a1) const{
        bool (TheEndDimension::*rv)(int, int) const;
        *((void**)&rv) = dlsym("?isFoggyAt@TheEndDimension@@UEBA_NHH@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1));
    }
    inline bool isNaturalDimension() const{
        bool (TheEndDimension::*rv)() const;
        *((void**)&rv) = dlsym("?isNaturalDimension@TheEndDimension@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool mayRespawnViaBed() const{
        bool (TheEndDimension::*rv)() const;
        *((void**)&rv) = dlsym("?mayRespawnViaBed@TheEndDimension@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void _upgradeOldLimboEntity(class CompoundTag& a0, int \/*enum enum LimboEntitiesVersion*\/ a1){
        void (TheEndDimension::*rv)(class CompoundTag&, int \/*enum enum LimboEntitiesVersion*\/);
        *((void**)&rv) = dlsym("?_upgradeOldLimboEntity@TheEndDimension@@EEAAXAEAVCompoundTag@@W4LimboEntitiesVersion@@@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0), std::forward<int \/*enum enum LimboEntitiesVersion*\/>(a1));
    }
    inline std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource> a0, int \/*enum enum StorageVersion*\/ a1){
        std::unique_ptr<class ChunkSource> (TheEndDimension::*rv)(std::unique_ptr<class ChunkSource>, int \/*enum enum StorageVersion*\/);
        *((void**)&rv) = dlsym("?_wrapStorageForVersionCompatibility@TheEndDimension@@EEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z");
        return (this->*rv)(std::forward<std::unique_ptr<class ChunkSource>>(a0), std::forward<int \/*enum enum StorageVersion*\/>(a1));
    }
    inline class std::tuple<std::unique_ptr<class ChunkSource>, class WorldGenerator*> createGenerator(){
        class std::tuple<std::unique_ptr<class ChunkSource>, class WorldGenerator*> (TheEndDimension::*rv)();
        *((void**)&rv) = dlsym("?createGenerator@TheEndDimension@@UEAA?AV?$tuple@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@PEAVWorldGenerator@@@std@@XZ");
        return (this->*rv)();
    }
    inline void deserialize(class CompoundTag const& a0){
        void (TheEndDimension::*rv)(class CompoundTag const&);
        *((void**)&rv) = dlsym("?deserialize@TheEndDimension@@UEAAXAEBVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0));
    }
    inline void fixWallChunk(class ChunkSource& a0, class LevelChunk& a1){
        void (TheEndDimension::*rv)(class ChunkSource&, class LevelChunk&);
        *((void**)&rv) = dlsym("?fixWallChunk@TheEndDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z");
        return (this->*rv)(std::forward<class ChunkSource&>(a0), std::forward<class LevelChunk&>(a1));
    }
    inline short getCloudHeight() const{
        short (TheEndDimension::*rv)() const;
        *((void**)&rv) = dlsym("?getCloudHeight@TheEndDimension@@UEBAFXZ");
        return (this->*rv)();
    }
    inline int getDefaultBiome() const{
        int (TheEndDimension::*rv)() const;
        *((void**)&rv) = dlsym("?getDefaultBiome@TheEndDimension@@UEBAHXZ");
        return (this->*rv)();
    }
    inline float getTimeOfDay(int a0, float a1) const{
        float (TheEndDimension::*rv)(int, float) const;
        *((void**)&rv) = dlsym("?getTimeOfDay@TheEndDimension@@UEBAMHM@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<float>(a1));
    }
    inline float getSunIntensity(float a0, class Vec3 const& a1, float a2) const{
        float (TheEndDimension::*rv)(float, class Vec3 const&, float) const;
        *((void**)&rv) = dlsym("?getSunIntensity@TheEndDimension@@UEBAMMAEBVVec3@@M@Z");
        return (this->*rv)(std::forward<float>(a0), std::forward<class Vec3 const&>(a1), std::forward<float>(a2));
    }
    inline class BlockPos getSpawnPos() const{
        class BlockPos (TheEndDimension::*rv)() const;
        *((void**)&rv) = dlsym("?getSpawnPos@TheEndDimension@@UEBA?AVBlockPos@@XZ");
        return (this->*rv)();
    }
    inline int getSpawnYPosition() const{
        int (TheEndDimension::*rv)() const;
        *((void**)&rv) = dlsym("?getSpawnYPosition@TheEndDimension@@UEBAHXZ");
        return (this->*rv)();
    }
    inline void init(){
        void (TheEndDimension::*rv)();
        *((void**)&rv) = dlsym("?init@TheEndDimension@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void serialize(class CompoundTag& a0) const{
        void (TheEndDimension::*rv)(class CompoundTag&) const;
        *((void**)&rv) = dlsym("?serialize@TheEndDimension@@UEBAXAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0));
    }
    inline void startLeaveGame(){
        void (TheEndDimension::*rv)();
        *((void**)&rv) = dlsym("?startLeaveGame@TheEndDimension@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (TheEndDimension::*rv)();
        *((void**)&rv) = dlsym("?tick@TheEndDimension@@UEAAXXZ");
        return (this->*rv)();
    }
    inline class Vec3 translatePosAcrossDimension(class Vec3 const& a0, class AutomaticID<class Dimension, int> a1) const{
        class Vec3 (TheEndDimension::*rv)(class Vec3 const&, class AutomaticID<class Dimension, int>) const;
        *((void**)&rv) = dlsym("?translatePosAcrossDimension@TheEndDimension@@UEBA?AVVec3@@AEBV2@V?$AutomaticID@VDimension@@H@@@Z");
        return (this->*rv)(std::forward<class Vec3 const&>(a0), std::forward<class AutomaticID<class Dimension, int>>(a1));
    }
    inline void upgradeLevelChunk(class ChunkSource& a0, class LevelChunk& a1, class LevelChunk& a2){
        void (TheEndDimension::*rv)(class ChunkSource&, class LevelChunk&, class LevelChunk&);
        *((void**)&rv) = dlsym("?upgradeLevelChunk@TheEndDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@1@Z");
        return (this->*rv)(std::forward<class ChunkSource&>(a0), std::forward<class LevelChunk&>(a1), std::forward<class LevelChunk&>(a2));
    }
    */
    MCAPI static float const AMBIENT_MULTIPLIER;

protected:

private:
};