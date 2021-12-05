// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BlockItem.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_PUMPKINBLOCKITEM
#include "Extra/PumpkinBlockItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_PUMPKINBLOCKITEM
class PumpkinBlockItem : public BlockItem {
#include "Extra/PumpkinBlockItemAPI.hpp"
public:
    /*0*/ virtual ~PumpkinBlockItem();
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
    /*31*/ virtual bool isLiquidClipItem(int) const;
    /*32*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;
    /*33*/ virtual bool requiresInteract() const;
    /*34*/ virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;
    /*35*/ virtual int getEnchantSlot() const;
    /*36*/ virtual int getEnchantValue() const;
    /*37*/ virtual int getArmorValue() const;
    /*38*/ virtual void __unk_vfn_10();
    /*39*/ virtual void __unk_vfn_11();
    /*40*/ virtual void __unk_vfn_12();
    /*41*/ virtual void __unk_vfn_13();
    /*42*/ virtual void __unk_vfn_14();
    /*43*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*44*/ virtual bool hasCustomColor(class CompoundTag const*) const;
    /*45*/ virtual void __unk_vfn_15();
    /*46*/ virtual void clearColor(class CompoundTag*) const;
    /*47*/ virtual void __unk_vfn_16();
    /*48*/ virtual void __unk_vfn_17();
    /*49*/ virtual void __unk_vfn_18();
    /*50*/ virtual void __unk_vfn_19();
    /*51*/ virtual void __unk_vfn_20();
    /*52*/ virtual void __unk_vfn_21();
    /*53*/ virtual bool canUseOnSimTick() const;
    /*54*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*55*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*56*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*57*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*58*/ virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /*59*/ virtual void __unk_vfn_22();
    /*60*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*61*/ virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;
    /*62*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*63*/ virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    /*64*/ virtual void __unk_vfn_23();
    /*65*/ virtual void __unk_vfn_24();
    /*66*/ virtual bool validFishInteraction(int) const;
    /*67*/ virtual std::string getInteractText(class Player const&) const;
    /*68*/ virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /*69*/ virtual bool canBeCharged() const;
    /*70*/ virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    /*71*/ virtual void __unk_vfn_25();
    /*72*/ virtual std::string getAuxValuesDescription() const;
    /*
    inline int getEnchantSlot() const{
        int (PumpkinBlockItem::*rv)() const;
        *((void**)&rv) = dlsym("?getEnchantSlot@PumpkinBlockItem@@UEBAHXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};