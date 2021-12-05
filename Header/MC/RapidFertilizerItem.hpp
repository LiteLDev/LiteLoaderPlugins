// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "FertilizerItem.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_RAPIDFERTILIZERITEM
#include "Extra/RapidFertilizerItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_RAPIDFERTILIZERITEM
class RapidFertilizerItem : public FertilizerItem {
#include "Extra/RapidFertilizerItemAPI.hpp"
public:
    /*0*/ virtual ~RapidFertilizerItem();
    /*1*/ virtual void tearDown();
    /*2*/ virtual int getMaxUseDuration(class ItemStack const*) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void __unk_vfn_2();
    /*6*/ virtual bool isArmor() const;
    /*7*/ virtual bool isBlockPlanterItem() const;
    /*8*/ virtual void __unk_vfn_3();
    /*9*/ virtual void __unk_vfn_4();
    /*10*/ virtual bool isDyeable() const;
    /*11*/ virtual bool isDye() const;
    /*12*/ virtual int /*enum enum ItemColor*/ getItemColor() const;
    /*13*/ virtual bool isFertilizer() const;
    /*14*/ virtual void __unk_vfn_5();
    /*15*/ virtual bool isThrowable() const;
    /*16*/ virtual bool isUseable() const;
    /*17*/ virtual class ItemComponent* getComponent(class HashedString const&) const;
    /*18*/ virtual class FuelItemComponent* getFuel() const;
    /*19*/ virtual void __unk_vfn_6();
    /*20*/ virtual bool canDestroySpecial(class Block const&) const;
    /*21*/ virtual int getLevelDataForAuxValue(int) const;
    /*22*/ virtual short getMaxDamage() const;
    /*23*/ virtual int getAttackDamage() const;
    /*24*/ virtual bool isGlint(class ItemStackBase const&) const;
    /*25*/ virtual void __unk_vfn_7();
    /*26*/ virtual void __unk_vfn_8();
    /*27*/ virtual void __unk_vfn_9();
    /*28*/ virtual bool isWearableThroughLootTable(class CompoundTag const*) const;
    /*29*/ virtual bool canDestroyInCreative() const;
    /*30*/ virtual bool isDestructive(int) const;
    /*31*/ virtual bool isLiquidClipItem(int) const;
    /*32*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;
    /*33*/ virtual bool requiresInteract() const;
    /*34*/ virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;
    /*35*/ virtual int getEnchantSlot() const;
    /*36*/ virtual int getEnchantValue() const;
    /*37*/ virtual int getArmorValue() const;
    /*38*/ virtual void __unk_vfn_10();
    /*39*/ virtual bool isValidAuxValue(int) const;
    /*40*/ virtual void __unk_vfn_11();
    /*41*/ virtual void __unk_vfn_12();
    /*42*/ virtual void __unk_vfn_13();
    /*43*/ virtual void __unk_vfn_14();
    /*44*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*45*/ virtual bool hasCustomColor(class CompoundTag const*) const;
    /*46*/ virtual void __unk_vfn_15();
    /*47*/ virtual void clearColor(class CompoundTag*) const;
    /*48*/ virtual void __unk_vfn_16();
    /*49*/ virtual void __unk_vfn_17();
    /*50*/ virtual void __unk_vfn_18();
    /*51*/ virtual void __unk_vfn_19();
    /*52*/ virtual void __unk_vfn_20();
    /*53*/ virtual void __unk_vfn_21();
    /*54*/ virtual bool canUseOnSimTick() const;
    /*55*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*56*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*57*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*58*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*59*/ virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /*60*/ virtual void __unk_vfn_22();
    /*61*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*62*/ virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;
    /*63*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*64*/ virtual void fixupCommon(class ItemStackBase&) const;
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
    /*
    inline void fixupCommon(class ItemStackBase& a0) const{
        void (RapidFertilizerItem::*rv)(class ItemStackBase&) const;
        *((void**)&rv) = dlsym("?fixupCommon@RapidFertilizerItem@@UEBAXAEAVItemStackBase@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase&>(a0));
    }
    */

protected:

private:
};