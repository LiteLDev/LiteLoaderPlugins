// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ActorBlock.hpp"
#define EXTRA_INCLUDE_PART_DISPENSERBLOCK
#include "Extra/DispenserBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_DISPENSERBLOCK
class DispenserBlock : public ActorBlock {
#include "Extra/DispenserBlockAPI.hpp"
public:
    /*0*/ virtual ~DispenserBlock();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*5*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*6*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*7*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const&)> const&, class BlockPos const&) const;
    /*8*/ virtual void __unk_vfn_0();
    /*9*/ virtual bool isStrippable(class Block const&) const;
    /*10*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*11*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*12*/ virtual void __unk_vfn_1();
    /*13*/ virtual void __unk_vfn_2();
    /*14*/ virtual void __unk_vfn_3();
    /*15*/ virtual void __unk_vfn_4();
    /*16*/ virtual void __unk_vfn_5();
    /*17*/ virtual void __unk_vfn_6();
    /*18*/ virtual void __unk_vfn_7();
    /*19*/ virtual void __unk_vfn_8();
    /*20*/ virtual void __unk_vfn_9();
    /*21*/ virtual void __unk_vfn_10();
    /*22*/ virtual bool isDoubleSlabBlock() const;
    /*23*/ virtual void __unk_vfn_11();
    /*24*/ virtual void __unk_vfn_12();
    /*25*/ virtual void __unk_vfn_13();
    /*26*/ virtual void __unk_vfn_14();
    /*27*/ virtual void __unk_vfn_15();
    /*28*/ virtual void __unk_vfn_16();
    /*29*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*30*/ virtual bool isValidAuxValue(int) const;
    /*31*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*32*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*33*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*34*/ virtual void __unk_vfn_17();
    /*35*/ virtual void __unk_vfn_18();
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
    /*63*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*64*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*65*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*66*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*67*/ virtual void __unk_vfn_23();
    /*68*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*69*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*70*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*71*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*72*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*73*/ virtual int getExperienceDrop(class Random&) const;
    /*74*/ virtual void __unk_vfn_24();
    /*75*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*76*/ virtual void __unk_vfn_25();
    /*77*/ virtual void __unk_vfn_26();
    /*78*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*79*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*80*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*81*/ virtual void __unk_vfn_27();
    /*82*/ virtual int getIconYOffset() const;
    /*83*/ virtual bool isAuxValueRelevantForPicking() const;
    /*84*/ virtual int getColor(class Block const&) const;
    /*85*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*86*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*87*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*88*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*89*/ virtual int getVariant(class Block const&) const;
    /*90*/ virtual void __unk_vfn_28();
    /*91*/ virtual class Block const& getRenderBlock() const;
    /*92*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*93*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*94*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*95*/ virtual void __unk_vfn_29();
    /*96*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;
    /*97*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*98*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*99*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*100*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*101*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*102*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*103*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*104*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*105*/ virtual void __unk_vfn_30();
    /*106*/ virtual void __unk_vfn_31();
    /*107*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*108*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*109*/ virtual void __unk_vfn_32();
    /*110*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*111*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*112*/ virtual void __unk_vfn_33();
    /*113*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*114*/ virtual void __unk_vfn_34();
    /*115*/ virtual void __unk_vfn_35();
    /*116*/ virtual void __unk_vfn_36();
    /*117*/ virtual void dispenseFrom(class BlockSource&, class BlockPos const&) const;
    /*
    inline bool isContainerBlock() const{
        bool (DispenserBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isContainerBlock@DispenserBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isInteractiveBlock() const{
        bool (DispenserBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isInteractiveBlock@DispenserBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool hasComparatorSignal() const{
        bool (DispenserBlock::*rv)() const;
        *((void**)&rv) = dlsym("?hasComparatorSignal@DispenserBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline int getTickDelay() const{
        int (DispenserBlock::*rv)() const;
        *((void**)&rv) = dlsym("?getTickDelay@DispenserBlock@@UEBAHXZ");
        return (this->*rv)();
    }
    inline void onPlace(class BlockSource& a0, class BlockPos const& a1) const{
        void (DispenserBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?onPlace@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline class ItemInstance asItemInstance(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const{
        class ItemInstance (DispenserBlock::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?asItemInstance@DispenserBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline class ItemInstance getSilkTouchItemInstance(class Block const& a0) const{
        class ItemInstance (DispenserBlock::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?getSilkTouchItemInstance@DispenserBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0));
    }
    inline class ItemInstance getResourceItem(class Randomize& a0, class Block const& a1, int a2) const{
        class ItemInstance (DispenserBlock::*rv)(class Randomize&, class Block const&, int) const;
        *((void**)&rv) = dlsym("?getResourceItem@DispenserBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z");
        return (this->*rv)(std::forward<class Randomize&>(a0), std::forward<class Block const&>(a1), std::forward<int>(a2));
    }
    inline void dispenseFrom(class BlockSource& a0, class BlockPos const& a1) const{
        void (DispenserBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?dispenseFrom@DispenserBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline int getComparatorSignal(class BlockSource& a0, class BlockPos const& a1, class Block const& a2, unsigned char a3) const{
        int (DispenserBlock::*rv)(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
        *((void**)&rv) = dlsym("?getComparatorSignal@DispenserBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2), std::forward<unsigned char>(a3));
    }
    inline unsigned char getMappedFace(unsigned char a0, class Block const& a1) const{
        unsigned char (DispenserBlock::*rv)(unsigned char, class Block const&) const;
        *((void**)&rv) = dlsym("?getMappedFace@DispenserBlock@@UEBAEEAEBVBlock@@@Z");
        return (this->*rv)(std::forward<unsigned char>(a0), std::forward<class Block const&>(a1));
    }
    inline class Block const& getPlacementBlock(class Actor& a0, class BlockPos const& a1, unsigned char a2, class Vec3 const& a3, int a4) const{
        class Block const& (DispenserBlock::*rv)(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
        *((void**)&rv) = dlsym("?getPlacementBlock@DispenserBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z");
        return (this->*rv)(std::forward<class Actor&>(a0), std::forward<class BlockPos const&>(a1), std::forward<unsigned char>(a2), std::forward<class Vec3 const&>(a3), std::forward<int>(a4));
    }
    inline int getVariant(class Block const& a0) const{
        int (DispenserBlock::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?getVariant@DispenserBlock@@UEBAHAEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0));
    }
    inline void onRedstoneUpdate(class BlockSource& a0, class BlockPos const& a1, int a2, bool a3) const{
        void (DispenserBlock::*rv)(class BlockSource&, class BlockPos const&, int, bool) const;
        *((void**)&rv) = dlsym("?onRedstoneUpdate@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<int>(a2), std::forward<bool>(a3));
    }
    inline void onRemove(class BlockSource& a0, class BlockPos const& a1) const{
        void (DispenserBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?onRemove@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline void setupRedstoneComponent(class BlockSource& a0, class BlockPos const& a1) const{
        void (DispenserBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?setupRedstoneComponent@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline void tick(class BlockSource& a0, class BlockPos const& a1, class Random& a2) const{
        void (DispenserBlock::*rv)(class BlockSource&, class BlockPos const&, class Random&) const;
        *((void**)&rv) = dlsym("?tick@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Random&>(a2));
    }
    inline bool use(class Player& a0, class BlockPos const& a1, unsigned char a2) const{
        bool (DispenserBlock::*rv)(class Player&, class BlockPos const&, unsigned char) const;
        *((void**)&rv) = dlsym("?use@DispenserBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z");
        return (this->*rv)(std::forward<class Player&>(a0), std::forward<class BlockPos const&>(a1), std::forward<unsigned char>(a2));
    }
    */
    MCAPI static void ejectItem(class BlockSource&, class Vec3 const&, unsigned char, class ItemStack const&);

protected:
    MCAPI void ejectItem(class BlockSource&, class Vec3 const&, unsigned char, class ItemStack const&, class Container&, int) const;
    MCAPI class Vec3 getDispensePosition(class BlockSource&, class Vec3 const&) const;
    MCAPI unsigned char getFacing(class Block const&) const;

private:
};