// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SAVESURROUNDINGCHUNKSSYSTEM
#include "Extra/SaveSurroundingChunksSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_SAVESURROUNDINGCHUNKSSYSTEM
class SaveSurroundingChunksSystem {
#include "Extra/SaveSurroundingChunksSystemAPI.hpp"
public:
    /*0*/ virtual ~SaveSurroundingChunksSystem();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void tick(class EntityRegistry&);
    /*3*/ virtual ~SaveSurroundingChunksSystem();
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual ~SaveSurroundingChunksSystem();
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual ~SaveSurroundingChunksSystem();
    /*8*/ virtual void __unk_vfn_3();
    /*
    inline void tick(class EntityRegistry& a0){
        void (SaveSurroundingChunksSystem::*rv)(class EntityRegistry&);
        *((void**)&rv) = dlsym("?tick@SaveSurroundingChunksSystem@@UEAAXAEAVEntityRegistry@@@Z");
        return (this->*rv)(std::forward<class EntityRegistry&>(a0));
    }
    */

protected:

private:
    MCAPI static void _tickSaveSurroundingChunks(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class FlagComponent<struct SaveSurroundingChunksFlag> >&);
};