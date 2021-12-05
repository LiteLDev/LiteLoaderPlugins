// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Item.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_CARROTONASTICKITEM
#include "Extra/CarrotOnAStickItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_CARROTONASTICKITEM
class CarrotOnAStickItem : public Item {
#include "Extra/CarrotOnAStickItemAPI.hpp"
public:
    /*0*/ virtual ~CarrotOnAStickItem();
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
    /*25*/ virtual bool isHandEquipped() const;
    /*26*/ virtual bool isGlint(class ItemStackBase const&) const;
    /*27*/ virtual void __unk_vfn_7();
    /*28*/ virtual void __unk_vfn_8();
    /*29*/ virtual void __unk_vfn_9();
    /*30*/ virtual bool isWearableThroughLootTable(class CompoundTag const*) const;
    /*31*/ virtual bool canDestroyInCreative() const;
    /*32*/ virtual bool isDestructive(int) const;
    /*33*/ virtual bool isLiquidClipItem(int) const;
    /*34*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;
    /*35*/ virtual bool requiresInteract() const;
    /*36*/ virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;
    /*37*/ virtual int getEnchantSlot() const;
    /*38*/ virtual int getEnchantValue() const;
    /*39*/ virtual int getArmorValue() const;
    /*40*/ virtual void __unk_vfn_10();
    /*41*/ virtual bool isValidAuxValue(int) const;
    /*42*/ virtual void __unk_vfn_11();
    /*43*/ virtual void __unk_vfn_12();
    /*44*/ virtual void __unk_vfn_13();
    /*45*/ virtual void __unk_vfn_14();
    /*46*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*47*/ virtual bool hasCustomColor(class CompoundTag const*) const;
    /*48*/ virtual void __unk_vfn_15();
    /*49*/ virtual void clearColor(class CompoundTag*) const;
    /*50*/ virtual void __unk_vfn_16();
    /*51*/ virtual void __unk_vfn_17();
    /*52*/ virtual void __unk_vfn_18();
    /*53*/ virtual void __unk_vfn_19();
    /*54*/ virtual void __unk_vfn_20();
    /*55*/ virtual void __unk_vfn_21();
    /*56*/ virtual bool canUseOnSimTick() const;
    /*57*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*58*/ virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;
    /*59*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*60*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*61*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*62*/ virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /*63*/ virtual void __unk_vfn_22();
    /*64*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*65*/ virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;
    /*66*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*67*/ virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    /*68*/ virtual void __unk_vfn_23();
    /*69*/ virtual void __unk_vfn_24();
    /*70*/ virtual bool validFishInteraction(int) const;
    /*71*/ virtual std::string getInteractText(class Player const&) const;
    /*72*/ virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /*73*/ virtual int getIconYOffset() const;
    /*74*/ virtual bool canBeCharged() const;
    /*75*/ virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    /*76*/ virtual void __unk_vfn_25();
    /*77*/ virtual std::string getAuxValuesDescription() const;
    /*78*/ virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const;
    /*
    inline void hurtActor(class ItemStack& a0, class Actor& a1, class Mob& a2) const{
        void (CarrotOnAStickItem::*rv)(class ItemStack&, class Actor&, class Mob&) const;
        *((void**)&rv) = dlsym("?hurtActor@CarrotOnAStickItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Actor&>(a1), std::forward<class Mob&>(a2));
    }
    inline bool mineBlock(class ItemStack& a0, class Block const& a1, int a2, int a3, int a4, class Actor* a5) const{
        bool (CarrotOnAStickItem::*rv)(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
        *((void**)&rv) = dlsym("?mineBlock@CarrotOnAStickItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Block const&>(a1), std::forward<int>(a2), std::forward<int>(a3), std::forward<int>(a4), std::forward<class Actor*>(a5));
    }
    inline bool isHandEquipped() const{
        bool (CarrotOnAStickItem::*rv)() const;
        *((void**)&rv) = dlsym("?isHandEquipped@CarrotOnAStickItem@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool requiresInteract() const{
        bool (CarrotOnAStickItem::*rv)() const;
        *((void**)&rv) = dlsym("?requiresInteract@CarrotOnAStickItem@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline int getEnchantValue() const{
        int (CarrotOnAStickItem::*rv)() const;
        *((void**)&rv) = dlsym("?getEnchantValue@CarrotOnAStickItem@@UEBAHXZ");
        return (this->*rv)();
    }
    inline int getEnchantSlot() const{
        int (CarrotOnAStickItem::*rv)() const;
        *((void**)&rv) = dlsym("?getEnchantSlot@CarrotOnAStickItem@@UEBAHXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};