// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "OceanMonumentPiece.hpp"
#define EXTRA_INCLUDE_PART_OCEANMONUMENTCOREROOM
#include "Extra/OceanMonumentCoreRoomAPI.hpp"
#undef EXTRA_INCLUDE_PART_OCEANMONUMENTCOREROOM
class OceanMonumentCoreRoom : public OceanMonumentPiece {
#include "Extra/OceanMonumentCoreRoomAPI.hpp"
public:
    /*0*/ virtual ~OceanMonumentCoreRoom();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual int /*enum enum StructurePieceType*/ getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*5*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*
    inline int \/*enum enum StructurePieceType*\/ getType() const{
        int \/*enum enum StructurePieceType*\/ (OceanMonumentCoreRoom::*rv)() const;
        *((void**)&rv) = dlsym("?getType@OceanMonumentCoreRoom@@UEBA?AW4StructurePieceType@@XZ");
        return (this->*rv)();
    }
    inline bool postProcess(class BlockSource& a0, class Random& a1, class BoundingBox const& a2){
        bool (OceanMonumentCoreRoom::*rv)(class BlockSource&, class Random&, class BoundingBox const&);
        *((void**)&rv) = dlsym("?postProcess@OceanMonumentCoreRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class Random&>(a1), std::forward<class BoundingBox const&>(a2));
    }
    */

protected:

private:
};