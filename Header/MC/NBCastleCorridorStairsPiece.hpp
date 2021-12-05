// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "NetherFortressPiece.hpp"
#define EXTRA_INCLUDE_PART_NBCASTLECORRIDORSTAIRSPIECE
#include "Extra/NBCastleCorridorStairsPieceAPI.hpp"
#undef EXTRA_INCLUDE_PART_NBCASTLECORRIDORSTAIRSPIECE
class NBCastleCorridorStairsPiece : public NetherFortressPiece {
#include "Extra/NBCastleCorridorStairsPieceAPI.hpp"
public:
    /*0*/ virtual ~NBCastleCorridorStairsPiece();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual int /*enum enum StructurePieceType*/ getType() const;
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*5*/ virtual void __unk_vfn_2();
    /*6*/ virtual void __unk_vfn_3();
    /*
    inline void addChildren(class StructurePiece& a0, std::vector<std::unique_ptr<class StructurePiece>>& a1, class Random& a2){
        void (NBCastleCorridorStairsPiece::*rv)(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
        *((void**)&rv) = dlsym("?addChildren@NBCastleCorridorStairsPiece@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class StructurePiece&>(a0), std::forward<std::vector<std::unique_ptr<class StructurePiece>>&>(a1), std::forward<class Random&>(a2));
    }
    inline int \/*enum enum StructurePieceType*\/ getType() const{
        int \/*enum enum StructurePieceType*\/ (NBCastleCorridorStairsPiece::*rv)() const;
        *((void**)&rv) = dlsym("?getType@NBCastleCorridorStairsPiece@@UEBA?AW4StructurePieceType@@XZ");
        return (this->*rv)();
    }
    inline bool postProcess(class BlockSource& a0, class Random& a1, class BoundingBox const& a2){
        bool (NBCastleCorridorStairsPiece::*rv)(class BlockSource&, class Random&, class BoundingBox const&);
        *((void**)&rv) = dlsym("?postProcess@NBCastleCorridorStairsPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class Random&>(a1), std::forward<class BoundingBox const&>(a2));
    }
    */

protected:

private:
};