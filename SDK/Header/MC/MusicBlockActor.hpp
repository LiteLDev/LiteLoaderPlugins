// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MusicBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MUSICBLOCKACTOR
public:
    class MusicBlockActor& operator=(class MusicBlockActor const&) = delete;
    MusicBlockActor(class MusicBlockActor const&) = delete;
    MusicBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~MusicBlockActor();
    /*1*/ virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /*2*/ virtual bool save(class CompoundTag&) const;
<<<<<<< HEAD
    /*3*/ virtual void saveBlockData(class CompoundTag&, class BlockSource&) const;
    /*4*/ virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);
    /*5*/ virtual void onCustomTagLoadDone(class BlockSource&);
    /*6*/ virtual void tick(class BlockSource&);
    /*7*/ virtual void onChanged(class BlockSource&);
    /*8*/ virtual void onPlace(class BlockSource&);
    /*9*/ virtual void __unk_vfn_0();
    /*10*/ virtual void onRemoved(class BlockSource&);
    /*11*/ virtual void triggerEvent(int, int);
    /*12*/ virtual void clearCache();
    /*13*/ virtual void __unk_vfn_1();
    /*14*/ virtual float getShadowRadius(class BlockSource&) const;
    /*15*/ virtual bool hasAlphaLayer() const;
    /*16*/ virtual void __unk_vfn_2();
    /*17*/ virtual std::string const& getCustomName() const;
    /*18*/ virtual std::string getName() const;
    /*19*/ virtual std::string getImmersiveReaderText(class BlockSource&);
    /*20*/ virtual int getRepairCost() const;
    /*21*/ virtual class PistonBlockActor* getOwningPiston(class BlockSource&);
    /*22*/ virtual void __unk_vfn_3();
    /*23*/ virtual void __unk_vfn_4();
    /*24*/ virtual float getDeletionDelayTimeSeconds() const;
    /*25*/ virtual void __unk_vfn_5();
    /*26*/ virtual void __unk_vfn_6();
    /*27*/ virtual void __unk_vfn_7();
    /*28*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /*29*/ virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /*30*/ virtual bool _playerCanUpdate(class Player const&) const;
=======
    /*4*/ virtual void saveBlockData(class CompoundTag&, class BlockSource&) const;
    /*5*/ virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);
    /*6*/ virtual void onCustomTagLoadDone(class BlockSource&);
    /*7*/ virtual void tick(class BlockSource&);
    /*8*/ virtual void onChanged(class BlockSource&);
    /*11*/ virtual void onPlace(class BlockSource&);
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void onRemoved(class BlockSource&);
    /*14*/ virtual void triggerEvent(int, int);
    /*15*/ virtual void clearCache();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual float getShadowRadius(class BlockSource&) const;
    /*18*/ virtual void __unk_vfn_18();
    /*19*/ virtual void __unk_vfn_19();
    /*21*/ virtual std::string const& getCustomName() const;
    /*23*/ virtual std::string getName() const;
    /*25*/ virtual std::string getImmersiveReaderText(class BlockSource&);
    /*26*/ virtual int getRepairCost() const;
    /*27*/ virtual class PistonBlockActor* getOwningPiston(class BlockSource&);
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual float getDeletionDelayTimeSeconds() const;
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /*35*/ virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /*36*/ virtual void __unk_vfn_36();
>>>>>>> 51d0529ff191cb743d7dd9047e8ce5e7edba226d
    MCAPI MusicBlockActor(class BlockPos const&);
    MCAPI void playNote(class BlockSource&, class BlockPos const&);
    MCAPI void tune();

protected:

private:

};