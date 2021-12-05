// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BlockLegacy.hpp"
#define EXTRA_INCLUDE_PART_CORALFAN
#include "Extra/CoralFanAPI.hpp"
#undef EXTRA_INCLUDE_PART_CORALFAN
class CoralFan : public BlockLegacy {
#include "Extra/CoralFanAPI.hpp"
public:
    /*0*/ virtual ~CoralFan();
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
    /*15*/ virtual bool isWaterBlocking() const;
    /*16*/ virtual void __unk_vfn_4();
    /*17*/ virtual void __unk_vfn_5();
    /*18*/ virtual void __unk_vfn_6();
    /*19*/ virtual void __unk_vfn_7();
    /*20*/ virtual void __unk_vfn_8();
    /*21*/ virtual void __unk_vfn_9();
    /*22*/ virtual void __unk_vfn_10();
    /*23*/ virtual bool isDoubleSlabBlock() const;
    /*24*/ virtual void __unk_vfn_11();
    /*25*/ virtual void __unk_vfn_12();
    /*26*/ virtual void __unk_vfn_13();
    /*27*/ virtual void __unk_vfn_14();
    /*28*/ virtual void __unk_vfn_15();
    /*29*/ virtual void __unk_vfn_16();
    /*30*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*31*/ virtual bool isValidAuxValue(int) const;
    /*32*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*33*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*34*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*35*/ virtual void __unk_vfn_17();
    /*36*/ virtual void __unk_vfn_18();
    /*37*/ virtual bool canContainLiquid() const;
    /*38*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*39*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*40*/ virtual void __unk_vfn_19();
    /*41*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*42*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*43*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*44*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*45*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*46*/ virtual void __unk_vfn_20();
    /*47*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*51*/ virtual int /*enum enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*52*/ virtual void __unk_vfn_21();
    /*53*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*54*/ virtual void __unk_vfn_22();
    /*55*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*56*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*57*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*58*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*59*/ virtual bool mayPick() const;
    /*60*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*61*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*62*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*63*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*64*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*65*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*66*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*67*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*68*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*69*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*70*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const*>*, float, int) const;
    /*71*/ virtual void __unk_vfn_23();
    /*72*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*73*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*74*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*75*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*76*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*77*/ virtual int getExperienceDrop(class Random&) const;
    /*78*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*79*/ virtual void __unk_vfn_24();
    /*80*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*81*/ virtual void __unk_vfn_25();
    /*82*/ virtual void __unk_vfn_26();
    /*83*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*84*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*85*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*86*/ virtual void __unk_vfn_27();
    /*87*/ virtual int getIconYOffset() const;
    /*88*/ virtual std::string buildDescriptionId(class Block const&) const;
    /*89*/ virtual bool isAuxValueRelevantForPicking() const;
    /*90*/ virtual int getColor(class Block const&) const;
    /*91*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*92*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*93*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*94*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*95*/ virtual int getVariant(class Block const&) const;
    /*96*/ virtual void __unk_vfn_28();
    /*97*/ virtual class Block const& getRenderBlock() const;
    /*98*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*99*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*100*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*101*/ virtual void __unk_vfn_29();
    /*102*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;
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
    /*114*/ virtual void playerDestroy(class Player&, class BlockPos const&, class Block const&) const;
    /*115*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*116*/ virtual void __unk_vfn_32();
    /*117*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*118*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*119*/ virtual void __unk_vfn_33();
    /*120*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*121*/ virtual void __unk_vfn_34();
    /*122*/ virtual void __unk_vfn_35();
    /*123*/ virtual void checkAlive(class BlockSource&, class BlockPos const&) const;
    /*
    inline bool mayConsumeFertilizer(class BlockSource& a0) const{
        bool (CoralFan::*rv)(class BlockSource&) const;
        *((void**)&rv) = dlsym("?mayConsumeFertilizer@CoralFan@@UEBA_NAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0));
    }
    inline bool isWaterBlocking() const{
        bool (CoralFan::*rv)() const;
        *((void**)&rv) = dlsym("?isWaterBlocking@CoralFan@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline int getResourceCount(class Randomize& a0, class Block const& a1, int a2) const{
        int (CoralFan::*rv)(class Randomize&, class Block const&, int) const;
        *((void**)&rv) = dlsym("?getResourceCount@CoralFan@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z");
        return (this->*rv)(std::forward<class Randomize&>(a0), std::forward<class Block const&>(a1), std::forward<int>(a2));
    }
    inline bool canBeSilkTouched() const{
        bool (CoralFan::*rv)() const;
        *((void**)&rv) = dlsym("?canBeSilkTouched@CoralFan@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canContainLiquid() const{
        bool (CoralFan::*rv)() const;
        *((void**)&rv) = dlsym("?canContainLiquid@CoralFan@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isAuxValueRelevantForPicking() const{
        bool (CoralFan::*rv)() const;
        *((void**)&rv) = dlsym("?isAuxValueRelevantForPicking@CoralFan@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline int getColor(class Block const& a0) const{
        int (CoralFan::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?getColor@CoralFan@@UEBAHAEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0));
    }
    inline int getColor(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const{
        int (CoralFan::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?getColor@CoralFan@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline bool isValidAuxValue(int a0) const{
        bool (CoralFan::*rv)(int) const;
        *((void**)&rv) = dlsym("?isValidAuxValue@CoralFan@@UEBA_NH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline class AABB const& getAABB(class BlockSource const& a0, class BlockPos const& a1, class Block const& a2, class AABB& a3, bool a4) const{
        class AABB const& (CoralFan::*rv)(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
        *((void**)&rv) = dlsym("?getAABB@CoralFan@@UEBAAEBVAABB@@AEBVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z");
        return (this->*rv)(std::forward<class BlockSource const&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2), std::forward<class AABB&>(a3), std::forward<bool>(a4));
    }
    inline class ItemInstance asItemInstance(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const{
        class ItemInstance (CoralFan::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?asItemInstance@CoralFan@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline std::string buildDescriptionId(class Block const& a0) const{
        std::string (CoralFan::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?buildDescriptionId@CoralFan@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0));
    }
    inline void checkAlive(class BlockSource& a0, class BlockPos const& a1) const{
        void (CoralFan::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?checkAlive@CoralFan@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline class mce::Color getMapColor(class BlockSource& a0, class BlockPos const& a1) const{
        class mce::Color (CoralFan::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getMapColor@CoralFan@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline class ItemInstance getResourceItem(class Randomize& a0, class Block const& a1, int a2) const{
        class ItemInstance (CoralFan::*rv)(class Randomize&, class Block const&, int) const;
        *((void**)&rv) = dlsym("?getResourceItem@CoralFan@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z");
        return (this->*rv)(std::forward<class Randomize&>(a0), std::forward<class Block const&>(a1), std::forward<int>(a2));
    }
    inline class ItemInstance getSilkTouchItemInstance(class Block const& a0) const{
        class ItemInstance (CoralFan::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?getSilkTouchItemInstance@CoralFan@@UEBA?AVItemInstance@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0));
    }
    inline int getVariant(class Block const& a0) const{
        int (CoralFan::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?getVariant@CoralFan@@UEBAHAEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0));
    }
    inline bool mayPlaceOn(class BlockSource& a0, class BlockPos const& a1) const{
        bool (CoralFan::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?mayPlaceOn@CoralFan@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline void neighborChanged(class BlockSource& a0, class BlockPos const& a1, class BlockPos const& a2) const{
        void (CoralFan::*rv)(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?neighborChanged@CoralFan@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class BlockPos const&>(a2));
    }
    inline void onPlace(class BlockSource& a0, class BlockPos const& a1) const{
        void (CoralFan::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?onPlace@CoralFan@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline void playerDestroy(class Player& a0, class BlockPos const& a1, class Block const& a2) const{
        void (CoralFan::*rv)(class Player&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?playerDestroy@CoralFan@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Player&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline class Vec3 randomlyModifyPosition(class BlockPos const& a0) const{
        class Vec3 (CoralFan::*rv)(class BlockPos const&) const;
        *((void**)&rv) = dlsym("?randomlyModifyPosition@CoralFan@@UEBA?AVVec3@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0));
    }
    inline void spawnResources(class BlockSource& a0, class BlockPos const& a1, class Block const& a2, class Randomize& a3, std::vector<class Item const*>* a4, float a5, int a6) const{
        void (CoralFan::*rv)(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const*>*, float, int) const;
        *((void**)&rv) = dlsym("?spawnResources@CoralFan@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@MH@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2), std::forward<class Randomize&>(a3), std::forward<std::vector<class Item const*>*>(a4), std::forward<float>(a5), std::forward<int>(a6));
    }
    */
    MCAPI static std::string const* const const CORAL_FAN_NAMES;
    MCAPI static int const CORAL_FAN_NAMES_COUNT;

protected:

private:
};