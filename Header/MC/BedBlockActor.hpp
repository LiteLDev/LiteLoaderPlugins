// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BlockActor.hpp"
#define EXTRA_INCLUDE_PART_BEDBLOCKACTOR
#include "Extra/BedBlockActorAPI.hpp"
#undef EXTRA_INCLUDE_PART_BEDBLOCKACTOR
class BedBlockActor : public BlockActor {
#include "Extra/BedBlockActorAPI.hpp"
public:
    /*0*/ virtual ~BedBlockActor();
    /*1*/ virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /*2*/ virtual bool save(class CompoundTag&) const;
    /*3*/ virtual bool saveItemInstanceData(class CompoundTag&);
    /*4*/ virtual void saveBlockData(class CompoundTag&, class BlockSource&) const;
    /*5*/ virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);
    /*6*/ virtual void onCustomTagLoadDone(class BlockSource&);
    /*7*/ virtual void tick(class BlockSource&);
    /*8*/ virtual void onChanged(class BlockSource&);
    /*9*/ virtual void onPlace(class BlockSource&);
    /*10*/ virtual void __unk_vfn_0();
    /*11*/ virtual void onRemoved(class BlockSource&);
    /*12*/ virtual void triggerEvent(int, int);
    /*13*/ virtual void __unk_vfn_1();
    /*14*/ virtual void __unk_vfn_2();
    /*15*/ virtual void __unk_vfn_3();
    /*16*/ virtual void __unk_vfn_4();
    /*17*/ virtual class BlockActor* getCrackEntity(class BlockSource&, class BlockPos const&);
    /*18*/ virtual void __unk_vfn_5();
    /*19*/ virtual std::string getName() const;
    /*20*/ virtual std::string getImmersiveReaderText(class BlockSource&);
    /*21*/ virtual void __unk_vfn_6();
    /*22*/ virtual class PistonBlockActor* getOwningPiston(class BlockSource&);
    /*23*/ virtual void __unk_vfn_7();
    /*24*/ virtual void __unk_vfn_8();
    /*25*/ virtual void __unk_vfn_9();
    /*26*/ virtual void __unk_vfn_10();
    /*27*/ virtual void __unk_vfn_11();
    /*28*/ virtual void __unk_vfn_12();
    /*29*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /*30*/ virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /*31*/ virtual bool _playerCanUpdate(class Player const&) const;
    /*
    inline std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& a0){
        std::unique_ptr<class BlockActorDataPacket> (BedBlockActor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?_getUpdatePacket@BedBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0));
    }
    inline void _onUpdatePacket(class CompoundTag const& a0, class BlockSource& a1){
        void (BedBlockActor::*rv)(class CompoundTag const&, class BlockSource&);
        *((void**)&rv) = dlsym("?_onUpdatePacket@BedBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0), std::forward<class BlockSource&>(a1));
    }
    inline class BlockActor* getCrackEntity(class BlockSource& a0, class BlockPos const& a1){
        class BlockActor* (BedBlockActor::*rv)(class BlockSource&, class BlockPos const&);
        *((void**)&rv) = dlsym("?getCrackEntity@BedBlockActor@@UEAAPEAVBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline std::string getName() const{
        std::string (BedBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getName@BedBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline void load(class Level& a0, class CompoundTag const& a1, class DataLoadHelper& a2){
        void (BedBlockActor::*rv)(class Level&, class CompoundTag const&, class DataLoadHelper&);
        *((void**)&rv) = dlsym("?load@BedBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(std::forward<class Level&>(a0), std::forward<class CompoundTag const&>(a1), std::forward<class DataLoadHelper&>(a2));
    }
    inline void onPlace(class BlockSource& a0){
        void (BedBlockActor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?onPlace@BedBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0));
    }
    inline void onChanged(class BlockSource& a0){
        void (BedBlockActor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?onChanged@BedBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0));
    }
    inline bool save(class CompoundTag& a0) const{
        bool (BedBlockActor::*rv)(class CompoundTag&) const;
        *((void**)&rv) = dlsym("?save@BedBlockActor@@UEBA_NAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0));
    }
    inline bool saveItemInstanceData(class CompoundTag& a0){
        bool (BedBlockActor::*rv)(class CompoundTag&);
        *((void**)&rv) = dlsym("?saveItemInstanceData@BedBlockActor@@UEAA_NAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0));
    }
    inline void tick(class BlockSource& a0){
        void (BedBlockActor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?tick@BedBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0));
    }
    */
    MCAPI bool claimPetSleepOnBed(struct ActorUniqueID);
    MCAPI void startSleepingOn();
    MCAPI void stopSleepingOn(class BlockSource&, bool);

protected:

private:
};