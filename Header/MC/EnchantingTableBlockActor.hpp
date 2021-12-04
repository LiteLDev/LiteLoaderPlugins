// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BlockActor.hpp"
#define EXTRA_INCLUDE_PART_ENCHANTINGTABLEBLOCKACTOR
#include "Extra/EnchantingTableBlockActorAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENCHANTINGTABLEBLOCKACTOR
class EnchantingTableBlockActor : public BlockActor {
#include "Extra/EnchantingTableBlockActorAPI.hpp"
public:
    /*0*/ virtual ~EnchantingTableBlockActor();
    /*1*/ virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /*2*/ virtual bool save(class CompoundTag&) const;
    /*4*/ virtual void saveBlockData(class CompoundTag&, class BlockSource&) const;
    /*5*/ virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);
    /*6*/ virtual void onCustomTagLoadDone(class BlockSource&);
    /*7*/ virtual void tick(class BlockSource&);
    /*8*/ virtual void onChanged(class BlockSource&);
    /*11*/ virtual void onPlace(class BlockSource&);
    /*12*/ virtual void unk_vfn_12();
    /*13*/ virtual void onRemoved(class BlockSource&);
    /*14*/ virtual void triggerEvent(int, int);
    /*15*/ virtual void clearCache();
    /*16*/ virtual void unk_vfn_16();
    /*17*/ virtual float getShadowRadius(class BlockSource&) const;
    /*18*/ virtual bool hasAlphaLayer() const;
    /*19*/ virtual class BlockActor* getCrackEntity(class BlockSource&, class BlockPos const&);
    /*21*/ virtual std::string const& getCustomName() const;
    /*23*/ virtual std::string getName() const;
    /*25*/ virtual std::string getImmersiveReaderText(class BlockSource&);
    /*26*/ virtual int getRepairCost() const;
    /*27*/ virtual class PistonBlockActor* getOwningPiston(class BlockSource&);
    /*28*/ virtual void unk_vfn_28();
    /*29*/ virtual void unk_vfn_29();
    /*30*/ virtual float getDeletionDelayTimeSeconds() const;
    /*31*/ virtual void unk_vfn_31();
    /*32*/ virtual void unk_vfn_32();
    /*33*/ virtual void unk_vfn_33();
    /*34*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /*35*/ virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /*36*/ virtual bool _playerCanUpdate(class Player const&) const;
};