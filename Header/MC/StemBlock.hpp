// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BushBlock.hpp"
#define EXTRA_INCLUDE_PART_STEMBLOCK
#include "Extra/StemBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_STEMBLOCK
class StemBlock : public BushBlock {
#include "Extra/StemBlockAPI.hpp"
public:
    /*0*/ virtual ~StemBlock();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*5*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*6*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const&)> const&, class BlockPos const&) const;
    /*7*/ virtual void __unk_vfn_0();
    /*8*/ virtual bool isStrippable(class Block const&) const;
    /*9*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*10*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*11*/ virtual void __unk_vfn_1();
    /*12*/ virtual void __unk_vfn_2();
    /*13*/ virtual void __unk_vfn_3();
    /*14*/ virtual void __unk_vfn_4();
    /*15*/ virtual void __unk_vfn_5();
    /*16*/ virtual void __unk_vfn_6();
    /*17*/ virtual void __unk_vfn_7();
    /*18*/ virtual void __unk_vfn_8();
    /*19*/ virtual void __unk_vfn_9();
    /*20*/ virtual void __unk_vfn_10();
    /*21*/ virtual bool isDoubleSlabBlock() const;
    /*22*/ virtual void __unk_vfn_11();
    /*23*/ virtual void __unk_vfn_12();
    /*24*/ virtual void __unk_vfn_13();
    /*25*/ virtual void __unk_vfn_14();
    /*26*/ virtual void __unk_vfn_15();
    /*27*/ virtual void __unk_vfn_16();
    /*28*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*29*/ virtual bool isValidAuxValue(int) const;
    /*30*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*31*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*32*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*33*/ virtual void __unk_vfn_17();
    /*34*/ virtual void __unk_vfn_18();
    /*35*/ virtual bool canContainLiquid() const;
    /*36*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*37*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*38*/ virtual void __unk_vfn_19();
    /*39*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*40*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*41*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*42*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*43*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*44*/ virtual void __unk_vfn_20();
    /*45*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*46*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*47*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual int /*enum enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void __unk_vfn_21();
    /*51*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*52*/ virtual void __unk_vfn_22();
    /*53*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*54*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*55*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*56*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*57*/ virtual bool mayPick() const;
    /*58*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*59*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*60*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*61*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*62*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*63*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*64*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*65*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*66*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*67*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*68*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const*>*, float, int) const;
    /*69*/ virtual void __unk_vfn_23();
    /*70*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*71*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*72*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*73*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*74*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*75*/ virtual int getExperienceDrop(class Random&) const;
    /*76*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*77*/ virtual void __unk_vfn_24();
    /*78*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*79*/ virtual void __unk_vfn_25();
    /*80*/ virtual void __unk_vfn_26();
    /*81*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*82*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*83*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*84*/ virtual void __unk_vfn_27();
    /*85*/ virtual int getIconYOffset() const;
    /*86*/ virtual bool isAuxValueRelevantForPicking() const;
    /*87*/ virtual int getColor(class Block const&) const;
    /*88*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*89*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*90*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*91*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*92*/ virtual void __unk_vfn_28();
    /*93*/ virtual class Block const& getRenderBlock() const;
    /*94*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*95*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*96*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*97*/ virtual void __unk_vfn_29();
    /*98*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*99*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*100*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*101*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*102*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*103*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*104*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*105*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*106*/ virtual void __unk_vfn_30();
    /*107*/ virtual void __unk_vfn_31();
    /*108*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*109*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*110*/ virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*111*/ virtual void __unk_vfn_32();
    /*112*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*113*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*114*/ virtual void __unk_vfn_33();
    /*115*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*116*/ virtual void __unk_vfn_34();
    /*117*/ virtual void __unk_vfn_35();
    /*
    inline bool canContainLiquid() const{
        bool (StemBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canContainLiquid@StemBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canBeSilkTouched() const{
        bool (StemBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canBeSilkTouched@StemBlock@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isStemBlock() const{
        bool (StemBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isStemBlock@StemBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canBeFertilized(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const{
        bool (StemBlock::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?canBeFertilized@StemBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline class ItemInstance asItemInstance(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const{
        class ItemInstance (StemBlock::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?asItemInstance@StemBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline int getColor(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const{
        int (StemBlock::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?getColor@StemBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline int getColor(class Block const& a0) const{
        int (StemBlock::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?getColor@StemBlock@@UEBAHAEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0));
    }
    inline int getColorAtPos(class BlockSource& a0, class BlockPos const& a1) const{
        int (StemBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getColorAtPos@StemBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline int getResourceCount(class Randomize& a0, class Block const& a1, int a2) const{
        int (StemBlock::*rv)(class Randomize&, class Block const&, int) const;
        *((void**)&rv) = dlsym("?getResourceCount@StemBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z");
        return (this->*rv)(std::forward<class Randomize&>(a0), std::forward<class Block const&>(a1), std::forward<int>(a2));
    }
    inline class ItemInstance getResourceItem(class Randomize& a0, class Block const& a1, int a2) const{
        class ItemInstance (StemBlock::*rv)(class Randomize&, class Block const&, int) const;
        *((void**)&rv) = dlsym("?getResourceItem@StemBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z");
        return (this->*rv)(std::forward<class Randomize&>(a0), std::forward<class Block const&>(a1), std::forward<int>(a2));
    }
    inline class AABB const& getVisualShape(class Block const& a0, class AABB& a1, bool a2) const{
        class AABB const& (StemBlock::*rv)(class Block const&, class AABB&, bool) const;
        *((void**)&rv) = dlsym("?getVisualShape@StemBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z");
        return (this->*rv)(std::forward<class Block const&>(a0), std::forward<class AABB&>(a1), std::forward<bool>(a2));
    }
    inline bool mayPlaceOn(class BlockSource& a0, class BlockPos const& a1) const{
        bool (StemBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?mayPlaceOn@StemBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline void neighborChanged(class BlockSource& a0, class BlockPos const& a1, class BlockPos const& a2) const{
        void (StemBlock::*rv)(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?neighborChanged@StemBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class BlockPos const&>(a2));
    }
    inline bool onFertilized(class BlockSource& a0, class BlockPos const& a1, class Actor* a2, int \/*enum enum FertilizerType*\/ a3) const{
        bool (StemBlock::*rv)(class BlockSource&, class BlockPos const&, class Actor*, int \/*enum enum FertilizerType*\/) const;
        *((void**)&rv) = dlsym("?onFertilized@StemBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Actor*>(a2), std::forward<int \/*enum enum FertilizerType*\/>(a3));
    }
    inline void randomTick(class BlockSource& a0, class BlockPos const& a1, class Random& a2) const{
        void (StemBlock::*rv)(class BlockSource&, class BlockPos const&, class Random&) const;
        *((void**)&rv) = dlsym("?randomTick@StemBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Random&>(a2));
    }
    */
    MCAPI class BlockLegacy const& getFruitBlock() const;

protected:

private:
    MCAPI float getGrowthSpeed(class BlockSource&, class BlockPos const&) const;
};