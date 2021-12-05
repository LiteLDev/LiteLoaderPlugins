// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "OceanMonumentPiece.hpp"
#define EXTRA_INCLUDE_PART_MONUMENTBUILDING
#include "Extra/MonumentBuildingAPI.hpp"
#undef EXTRA_INCLUDE_PART_MONUMENTBUILDING
class MonumentBuilding : public OceanMonumentPiece {
#include "Extra/MonumentBuildingAPI.hpp"
public:
    /*0*/ virtual ~MonumentBuilding();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual int /*enum enum StructurePieceType*/ getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*5*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*
    inline int \/*enum enum StructurePieceType*\/ getType() const{
        int \/*enum enum StructurePieceType*\/ (MonumentBuilding::*rv)() const;
        *((void**)&rv) = dlsym("?getType@MonumentBuilding@@UEBA?AW4StructurePieceType@@XZ");
        return (this->*rv)();
    }
    inline bool postProcess(class BlockSource& a0, class Random& a1, class BoundingBox const& a2){
        bool (MonumentBuilding::*rv)(class BlockSource&, class Random&, class BoundingBox const&);
        *((void**)&rv) = dlsym("?postProcess@MonumentBuilding@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class Random&>(a1), std::forward<class BoundingBox const&>(a2));
    }
    inline void postProcessMobsAt(class BlockSource& a0, class Random& a1, class BoundingBox const& a2){
        void (MonumentBuilding::*rv)(class BlockSource&, class Random&, class BoundingBox const&);
        *((void**)&rv) = dlsym("?postProcessMobsAt@MonumentBuilding@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class Random&>(a1), std::forward<class BoundingBox const&>(a2));
    }
    */

protected:

private:
    MCAPI void generateEntranceArchs(class BlockSource&, class Random&, class BoundingBox const&);
    MCAPI void generateEntranceWall(class BlockSource&, class Random&, class BoundingBox const&);
    MCAPI void generateLowerWall(class BlockSource&, class Random&, class BoundingBox const&);
    MCAPI void generateMiddleWall(class BlockSource&, class Random&, class BoundingBox const&);
    MCAPI void generateRoofPiece(class BlockSource&, class Random&, class BoundingBox const&);
    MCAPI std::vector<class std::shared_ptr<class RoomDefinition>> generateRoomGraph(class Random&);
    MCAPI void generateUpperWall(class BlockSource&, class Random&, class BoundingBox const&);
    MCAPI void generateWing(bool, int, class BlockSource&, class Random&, class BoundingBox const&);
};