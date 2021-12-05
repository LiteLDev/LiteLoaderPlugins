// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BlockLegacy.hpp"
#define EXTRA_INCLUDE_PART_LIGHTBLOCK
#include "Extra/LightBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_LIGHTBLOCK
class LightBlock : public BlockLegacy {
#include "Extra/LightBlockAPI.hpp"
public:
    /*0*/ virtual ~LightBlock();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual bool getCollisionShape(class AABB&, class Block const&, class BlockSource const&, class BlockPos const&, class optional_ref<struct IActorMovementProxy>) const;
    /*3*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*4*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*5*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*6*/ virtual bool addCollisionShapes(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<struct IActorMovementProxy>) const;
    /*7*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*8*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*9*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const&)> const&, class BlockPos const&) const;
    /*10*/ virtual void __unk_vfn_0();
    /*11*/ virtual bool isStrippable(class Block const&) const;
    /*12*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*13*/ virtual bool canProvideSupport(class Block const&, unsigned char, int /*enum enum BlockSupportType*/) const;
    /*14*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*15*/ virtual void __unk_vfn_1();
    /*16*/ virtual void __unk_vfn_2();
    /*17*/ virtual void __unk_vfn_3();
    /*18*/ virtual void __unk_vfn_4();
    /*19*/ virtual void __unk_vfn_5();
    /*20*/ virtual void __unk_vfn_6();
    /*21*/ virtual void __unk_vfn_7();
    /*22*/ virtual void __unk_vfn_8();
    /*23*/ virtual void __unk_vfn_9();
    /*24*/ virtual void __unk_vfn_10();
    /*25*/ virtual bool isDoubleSlabBlock() const;
    /*26*/ virtual void __unk_vfn_11();
    /*27*/ virtual void __unk_vfn_12();
    /*28*/ virtual void __unk_vfn_13();
    /*29*/ virtual void __unk_vfn_14();
    /*30*/ virtual void __unk_vfn_15();
    /*31*/ virtual void __unk_vfn_16();
    /*32*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*33*/ virtual bool isValidAuxValue(int) const;
    /*34*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*35*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*36*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*37*/ virtual void __unk_vfn_17();
    /*38*/ virtual void __unk_vfn_18();
    /*39*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*40*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*41*/ virtual void __unk_vfn_19();
    /*42*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*43*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*44*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*45*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*46*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*47*/ virtual void __unk_vfn_20();
    /*48*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*51*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*52*/ virtual int /*enum enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*53*/ virtual void __unk_vfn_21();
    /*54*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*55*/ virtual void __unk_vfn_22();
    /*56*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*57*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*58*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*59*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*60*/ virtual bool mayPick() const;
    /*61*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*62*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;
    /*63*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*64*/ virtual bool tryToPlace(class BlockSource&, class BlockPos const&, class Block const&, struct ActorBlockSyncMessage const*) const;
    /*65*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*66*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*67*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*68*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*69*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*70*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*71*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*72*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const*>*, float, int) const;
    /*73*/ virtual void __unk_vfn_23();
    /*74*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*75*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*76*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*77*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*78*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*79*/ virtual int getExperienceDrop(class Random&) const;
    /*80*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*81*/ virtual void __unk_vfn_24();
    /*82*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*83*/ virtual void __unk_vfn_25();
    /*84*/ virtual void __unk_vfn_26();
    /*85*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*86*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*87*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*88*/ virtual void __unk_vfn_27();
    /*89*/ virtual int getIconYOffset() const;
    /*90*/ virtual bool isAuxValueRelevantForPicking() const;
    /*91*/ virtual int getColor(class Block const&) const;
    /*92*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*93*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*94*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*95*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*96*/ virtual void __unk_vfn_28();
    /*97*/ virtual class Block const& getRenderBlock() const;
    /*98*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*99*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*100*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*101*/ virtual class BlockLegacy& init();
    /*102*/ virtual void __unk_vfn_29();
    /*103*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*104*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*105*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*106*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*107*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*108*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*109*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*110*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*111*/ virtual void __unk_vfn_30();
    /*112*/ virtual void __unk_vfn_31();
    /*113*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*114*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*115*/ virtual void __unk_vfn_32();
    /*116*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*117*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*118*/ virtual void __unk_vfn_33();
    /*119*/ virtual struct Brightness getLightEmission(class Block const&) const;
    /*120*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*121*/ virtual void __unk_vfn_34();
    /*122*/ virtual void __unk_vfn_35();
    /*
    inline bool addCollisionShapes(class Block const& a0, class BlockSource& a1, class BlockPos const& a2, class AABB const* a3, std::vector<class AABB>& a4, class optional_ref<struct IActorMovementProxy> a5) const{
        bool (LightBlock::*rv)(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<struct IActorMovementProxy>) const;
        *((void**)&rv) = dlsym("?addCollisionShapes@LightBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@UIActorMovementProxy@@@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0), std::forward<class BlockSource&>(a1), std::forward<class BlockPos const&>(a2), std::forward<class AABB const*>(a3), std::forward<std::vector<class AABB>&>(a4), std::forward<class optional_ref<struct IActorMovementProxy>>(a5));
    }
    inline bool canProvideSupport(class Block const& a0, unsigned char a1, int \/*enum enum BlockSupportType*\/ a2) const{
        bool (LightBlock::*rv)(class Block const&, unsigned char, int \/*enum enum BlockSupportType*\/) const;
        *((void**)&rv) = dlsym("?canProvideSupport@LightBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0), std::forward<unsigned char>(a1), std::forward<int \/*enum enum BlockSupportType*\/>(a2));
    }
    inline bool getCollisionShape(class AABB& a0, class Block const& a1, class BlockSource const& a2, class BlockPos const& a3, class optional_ref<struct IActorMovementProxy> a4) const{
        bool (LightBlock::*rv)(class AABB&, class Block const&, class BlockSource const&, class BlockPos const&, class optional_ref<struct IActorMovementProxy>) const;
        *((void**)&rv) = dlsym("?getCollisionShape@LightBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@V?$optional_ref@UIActorMovementProxy@@@@@Z");
        return (this->*rv)(std::forward<class AABB&>(a0), std::forward<class Block const&>(a1), std::forward<class BlockSource const&>(a2), std::forward<class BlockPos const&>(a3), std::forward<class optional_ref<struct IActorMovementProxy>>(a4));
    }
    inline bool isAuxValueRelevantForPicking() const{
        bool (LightBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isAuxValueRelevantForPicking@LightBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline class AABB const& getAABB(class BlockSource const& a0, class BlockPos const& a1, class Block const& a2, class AABB& a3, bool a4) const{
        class AABB const& (LightBlock::*rv)(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
        *((void**)&rv) = dlsym("?getAABB@LightBlock@@UEBAAEBVAABB@@AEBVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z");
        return (this->*rv)(std::forward<class BlockSource const&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2), std::forward<class AABB&>(a3), std::forward<bool>(a4));
    }
    inline struct Brightness getLightEmission(class Block const& a0) const{
        struct Brightness (LightBlock::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?getLightEmission@LightBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0));
    }
    inline class Block const& getPlacementBlock(class Actor& a0, class BlockPos const& a1, unsigned char a2, class Vec3 const& a3, int a4) const{
        class Block const& (LightBlock::*rv)(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
        *((void**)&rv) = dlsym("?getPlacementBlock@LightBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z");
        return (this->*rv)(std::forward<class Actor&>(a0), std::forward<class BlockPos const&>(a1), std::forward<unsigned char>(a2), std::forward<class Vec3 const&>(a3), std::forward<int>(a4));
    }
    inline class BlockLegacy& init(){
        class BlockLegacy& (LightBlock::*rv)();
        *((void**)&rv) = dlsym("?init@LightBlock@@UEAAAEAVBlockLegacy@@XZ");
        return (this->*rv)();
    }
    inline bool isFilteredOut(int \/*enum enum BlockRenderLayer*\/ a0) const{
        bool (LightBlock::*rv)(int \/*enum enum BlockRenderLayer*\/) const;
        *((void**)&rv) = dlsym("?isFilteredOut@LightBlock@@UEBA_NW4BlockRenderLayer@@@Z");
        return (this->*rv)(std::forward<int \/*enum enum BlockRenderLayer*\/>(a0));
    }
    inline bool mayPlace(class BlockSource& a0, class BlockPos const& a1) const{
        bool (LightBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?mayPlace@LightBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline bool mayPlace(class BlockSource& a0, class BlockPos const& a1, unsigned char a2) const{
        bool (LightBlock::*rv)(class BlockSource&, class BlockPos const&, unsigned char) const;
        *((void**)&rv) = dlsym("?mayPlace@LightBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<unsigned char>(a2));
    }
    inline bool tryToPlace(class BlockSource& a0, class BlockPos const& a1, class Block const& a2, struct ActorBlockSyncMessage const* a3) const{
        bool (LightBlock::*rv)(class BlockSource&, class BlockPos const&, class Block const&, struct ActorBlockSyncMessage const*) const;
        *((void**)&rv) = dlsym("?tryToPlace@LightBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEBUActorBlockSyncMessage@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2), std::forward<struct ActorBlockSyncMessage const*>(a3));
    }
    inline bool use(class Player& a0, class BlockPos const& a1, unsigned char a2) const{
        bool (LightBlock::*rv)(class Player&, class BlockPos const&, unsigned char) const;
        *((void**)&rv) = dlsym("?use@LightBlock@@MEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z");
        return (this->*rv)(std::forward<class Player&>(a0), std::forward<class BlockPos const&>(a1), std::forward<unsigned char>(a2));
    }
    */

protected:

private:
};