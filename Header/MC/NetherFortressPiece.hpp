// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_NETHERFORTRESSPIECE
#include "Extra/NetherFortressPieceAPI.hpp"
#undef EXTRA_INCLUDE_PART_NETHERFORTRESSPIECE
class NetherFortressPiece {
#include "Extra/NetherFortressPieceAPI.hpp"
public:    /*
    inline void addHardcodedSpawnAreas(class LevelChunk& a0) const{
        void (NetherFortressPiece::*rv)(class LevelChunk&) const;
        *((void**)&rv) = dlsym("?addHardcodedSpawnAreas@NetherFortressPiece@@UEBAXAEAVLevelChunk@@@Z");
        return (this->*rv)(std::forward<class LevelChunk&>(a0));
    }
    inline bool postProcess(class BlockSource& a0, class Random& a1, class BoundingBox const& a2){
        bool (NetherFortressPiece::*rv)(class BlockSource&, class Random&, class BoundingBox const&);
        *((void**)&rv) = dlsym("?postProcess@NetherFortressPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class Random&>(a1), std::forward<class BoundingBox const&>(a2));
    }
    */
    MCAPI std::unique_ptr<class NetherFortressPiece> findAndCreateBridgePieceFactory(std::string const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, int, int, int, int, int);
    MCAPI class StructurePiece* generateAndAddPiece(class NBStartPiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, int, int, int, int, int, bool);
    MCAPI class StructurePiece* generateChildForward(class NBStartPiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, int, int, bool);
    MCAPI class StructurePiece* generateChildLeft(class NBStartPiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, int, int, bool);
    MCAPI class StructurePiece* generateChildRight(class NBStartPiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, int, int, bool);
    MCAPI std::unique_ptr<class NetherFortressPiece> generatePiece(class NBStartPiece&, std::vector<class PieceWeight>&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, int, int, int, int, int);

protected:

private:
};