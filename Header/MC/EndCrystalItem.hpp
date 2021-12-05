// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Item.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_ENDCRYSTALITEM
#include "Extra/EndCrystalItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENDCRYSTALITEM
class EndCrystalItem : public Item {
#include "Extra/EndCrystalItemAPI.hpp"
public:
    /*0*/ virtual ~EndCrystalItem();
    /*1*/ virtual void tearDown();
    /*2*/ virtual int getMaxUseDuration(class ItemStack const*) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&) const;
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual bool isArmor() const;
    /*8*/ virtual bool isBlockPlanterItem() const;
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual void __unk_vfn_4();
    /*11*/ virtual bool isDyeable() const;
    /*12*/ virtual bool isDye() const;
    /*13*/ virtual int /*enum enum ItemColor*/ getItemColor() const;
    /*14*/ virtual bool isFertilizer() const;
    /*15*/ virtual void __unk_vfn_5();
    /*16*/ virtual bool isThrowable() const;
    /*17*/ virtual bool isUseable() const;
    /*18*/ virtual class ItemComponent* getComponent(class HashedString const&) const;
    /*19*/ virtual class FuelItemComponent* getFuel() const;
    /*20*/ virtual void __unk_vfn_6();
    /*21*/ virtual bool canDestroySpecial(class Block const&) const;
    /*22*/ virtual int getLevelDataForAuxValue(int) const;
    /*23*/ virtual short getMaxDamage() const;
    /*24*/ virtual int getAttackDamage() const;
    /*25*/ virtual bool isGlint(class ItemStackBase const&) const;
    /*26*/ virtual void __unk_vfn_7();
    /*27*/ virtual void __unk_vfn_8();
    /*28*/ virtual void __unk_vfn_9();
    /*29*/ virtual bool isWearableThroughLootTable(class CompoundTag const*) const;
    /*30*/ virtual bool canDestroyInCreative() const;
    /*31*/ virtual bool isDestructive(int) const;
    /*32*/ virtual bool isLiquidClipItem(int) const;
    /*33*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;
    /*34*/ virtual bool requiresInteract() const;
    /*35*/ virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;
    /*36*/ virtual int getEnchantSlot() const;
    /*37*/ virtual int getEnchantValue() const;
    /*38*/ virtual int getArmorValue() const;
    /*39*/ virtual void __unk_vfn_10();
    /*40*/ virtual bool isValidAuxValue(int) const;
    /*41*/ virtual void __unk_vfn_11();
    /*42*/ virtual void __unk_vfn_12();
    /*43*/ virtual void __unk_vfn_13();
    /*44*/ virtual void __unk_vfn_14();
    /*45*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*46*/ virtual bool hasCustomColor(class CompoundTag const*) const;
    /*47*/ virtual void __unk_vfn_15();
    /*48*/ virtual void clearColor(class CompoundTag*) const;
    /*49*/ virtual void __unk_vfn_16();
    /*50*/ virtual void __unk_vfn_17();
    /*51*/ virtual void __unk_vfn_18();
    /*52*/ virtual void __unk_vfn_19();
    /*53*/ virtual void __unk_vfn_20();
    /*54*/ virtual void __unk_vfn_21();
    /*55*/ virtual bool canUseOnSimTick() const;
    /*56*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*57*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*58*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*59*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*60*/ virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /*61*/ virtual void __unk_vfn_22();
    /*62*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*63*/ virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;
    /*64*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*65*/ virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    /*66*/ virtual void __unk_vfn_23();
    /*67*/ virtual void __unk_vfn_24();
    /*68*/ virtual bool validFishInteraction(int) const;
    /*69*/ virtual std::string getInteractText(class Player const&) const;
    /*70*/ virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /*71*/ virtual int getIconYOffset() const;
    /*72*/ virtual bool canBeCharged() const;
    /*73*/ virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    /*74*/ virtual void __unk_vfn_25();
    /*75*/ virtual std::string getAuxValuesDescription() const;
    /*76*/ virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const;
    /*77*/ virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos, unsigned char, float, float, float) const;
    /*
    inline bool isDestructive(int a0) const{
        bool (EndCrystalItem::*rv)(int) const;
        *((void**)&rv) = dlsym("?isDestructive@EndCrystalItem@@UEBA_NH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline bool isGlint(class ItemStackBase const& a0) const{
        bool (EndCrystalItem::*rv)(class ItemStackBase const&) const;
        *((void**)&rv) = dlsym("?isGlint@EndCrystalItem@@UEBA_NAEBVItemStackBase@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase const&>(a0));
    }
    inline bool _useOn(class ItemStack& a0, class Actor& a1, class BlockPos a2, unsigned char a3, float a4, float a5, float a6) const{
        bool (EndCrystalItem::*rv)(class ItemStack&, class Actor&, class BlockPos, unsigned char, float, float, float) const;
        *((void**)&rv) = dlsym("?_useOn@EndCrystalItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EMMM@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Actor&>(a1), std::forward<class BlockPos>(a2), std::forward<unsigned char>(a3), std::forward<float>(a4), std::forward<float>(a5), std::forward<float>(a6));
    }
    */

protected:

private:
};