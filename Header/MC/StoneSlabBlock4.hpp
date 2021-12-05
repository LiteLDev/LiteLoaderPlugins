// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "SlabBlock.hpp"
#define EXTRA_INCLUDE_PART_STONESLABBLOCK4
#include "Extra/StoneSlabBlock4API.hpp"
#undef EXTRA_INCLUDE_PART_STONESLABBLOCK4
class StoneSlabBlock4 : public SlabBlock {
#include "Extra/StoneSlabBlock4API.hpp"
public:
    /*0*/ virtual ~StoneSlabBlock4();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*3*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*4*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*5*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*6*/ virtual void __unk_vfn_0();
    /*7*/ virtual bool isStrippable(class Block const&) const;
    /*8*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*9*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*10*/ virtual void __unk_vfn_1();
    /*11*/ virtual void __unk_vfn_2();
    /*12*/ virtual void __unk_vfn_3();
    /*13*/ virtual void __unk_vfn_4();
    /*14*/ virtual void __unk_vfn_5();
    /*15*/ virtual void __unk_vfn_6();
    /*16*/ virtual void __unk_vfn_7();
    /*17*/ virtual void __unk_vfn_8();
    /*18*/ virtual void __unk_vfn_9();
    /*19*/ virtual void __unk_vfn_10();
    /*20*/ virtual void __unk_vfn_11();
    /*21*/ virtual void __unk_vfn_12();
    /*22*/ virtual void __unk_vfn_13();
    /*23*/ virtual void __unk_vfn_14();
    /*24*/ virtual void __unk_vfn_15();
    /*25*/ virtual void __unk_vfn_16();
    /*26*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*27*/ virtual bool isValidAuxValue(int) const;
    /*28*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*29*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*30*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*31*/ virtual void __unk_vfn_17();
    /*32*/ virtual void __unk_vfn_18();
    /*33*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*34*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*35*/ virtual void __unk_vfn_19();
    /*36*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*37*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*38*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*39*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*40*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*41*/ virtual void __unk_vfn_20();
    /*42*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*43*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*44*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*45*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*46*/ virtual void __unk_vfn_21();
    /*47*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*48*/ virtual void __unk_vfn_22();
    /*49*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*50*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*51*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*52*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*53*/ virtual bool mayPick() const;
    /*54*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*55*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*56*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*57*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*58*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*59*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*60*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*61*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*62*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*63*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const*>*, float, int) const;
    /*64*/ virtual void __unk_vfn_23();
    /*65*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*66*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*67*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*68*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*69*/ virtual int getExperienceDrop(class Random&) const;
    /*70*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*71*/ virtual void __unk_vfn_24();
    /*72*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*73*/ virtual void __unk_vfn_25();
    /*74*/ virtual void __unk_vfn_26();
    /*75*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*76*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*77*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*78*/ virtual void __unk_vfn_27();
    /*79*/ virtual int getIconYOffset() const;
    /*80*/ virtual std::string buildDescriptionId(class Block const&) const;
    /*81*/ virtual bool isAuxValueRelevantForPicking() const;
    /*82*/ virtual int getColor(class Block const&) const;
    /*83*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*84*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*85*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*86*/ virtual int getVariant(class Block const&) const;
    /*87*/ virtual void __unk_vfn_28();
    /*88*/ virtual class Block const& getRenderBlock() const;
    /*89*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*90*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*91*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*92*/ virtual void __unk_vfn_29();
    /*93*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;
    /*94*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*95*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*96*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*97*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*98*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*99*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*100*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*101*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*102*/ virtual void __unk_vfn_30();
    /*103*/ virtual void __unk_vfn_31();
    /*104*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*105*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*106*/ virtual void __unk_vfn_32();
    /*107*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*108*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*109*/ virtual void __unk_vfn_33();
    /*110*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*111*/ virtual void __unk_vfn_34();
    /*112*/ virtual void __unk_vfn_35();
    /*
    inline class ItemInstance asItemInstance(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const{
        class ItemInstance (StoneSlabBlock4::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?asItemInstance@StoneSlabBlock4@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline std::string buildDescriptionId(class Block const& a0) const{
        std::string (StoneSlabBlock4::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?buildDescriptionId@StoneSlabBlock4@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0));
    }
    inline class mce::Color getMapColor(class BlockSource& a0, class BlockPos const& a1) const{
        class mce::Color (StoneSlabBlock4::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getMapColor@StoneSlabBlock4@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline class ItemInstance getResourceItem(class Randomize& a0, class Block const& a1, int a2) const{
        class ItemInstance (StoneSlabBlock4::*rv)(class Randomize&, class Block const&, int) const;
        *((void**)&rv) = dlsym("?getResourceItem@StoneSlabBlock4@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z");
        return (this->*rv)(std::forward<class Randomize&>(a0), std::forward<class Block const&>(a1), std::forward<int>(a2));
    }
    inline class ItemInstance getSilkTouchItemInstance(class Block const& a0) const{
        class ItemInstance (StoneSlabBlock4::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?getSilkTouchItemInstance@StoneSlabBlock4@@UEBA?AVItemInstance@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0));
    }
    inline int getVariant(class Block const& a0) const{
        int (StoneSlabBlock4::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?getVariant@StoneSlabBlock4@@UEBAHAEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0));
    }
    inline bool isValidAuxValue(int a0) const{
        bool (StoneSlabBlock4::*rv)(int) const;
        *((void**)&rv) = dlsym("?isValidAuxValue@StoneSlabBlock4@@UEBA_NH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    */
    MCAPI static class std::array<std::string, 5> const SLAB_NAMES;

protected:

private:
};