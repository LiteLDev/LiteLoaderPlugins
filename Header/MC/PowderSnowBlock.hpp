// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BlockLegacy.hpp"
#define EXTRA_INCLUDE_PART_POWDERSNOWBLOCK
#include "Extra/PowderSnowBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_POWDERSNOWBLOCK
class PowderSnowBlock : public BlockLegacy {
#include "Extra/PowderSnowBlockAPI.hpp"
public:
    /*0*/ virtual ~PowderSnowBlock();
    /*4*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*5*/ virtual bool getCollisionShape(class AABB&, class Block const&, class BlockSource const&, class BlockPos const&, class optional_ref<struct IActorMovementProxy>) const;
    /*6*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*10*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*14*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*15*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*16*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const&(class BlockPos const&)> const&, class BlockPos const&) const;
    /*17*/ virtual void unk_vfn_17();
    /*18*/ virtual bool isStrippable(class Block const&) const;
    /*19*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*20*/ virtual bool canProvideSupport(class Block const&, unsigned char, int /*enum BlockSupportType*/) const;
    /*21*/ virtual bool canConnect(class Block const&, unsigned char, class Block const&) const;
    /*23*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*24*/ virtual bool isClimbable(struct IActorMovementProxy const&) const;
    /*25*/ virtual void unk_vfn_25();
    /*26*/ virtual void unk_vfn_26();
    /*27*/ virtual void unk_vfn_27();
    /*28*/ virtual bool isWaterBlocking() const;
    /*29*/ virtual void unk_vfn_29();
    /*30*/ virtual void unk_vfn_30();
    /*31*/ virtual void unk_vfn_31();
    /*32*/ virtual void unk_vfn_32();
    /*33*/ virtual void unk_vfn_33();
    /*34*/ virtual void unk_vfn_34();
    /*35*/ virtual void unk_vfn_35();
    /*36*/ virtual bool isDoubleSlabBlock() const;
    /*37*/ virtual void unk_vfn_37();
    /*38*/ virtual void unk_vfn_38();
    /*39*/ virtual void unk_vfn_39();
    /*40*/ virtual void unk_vfn_40();
    /*41*/ virtual void unk_vfn_41();
    /*43*/ virtual void unk_vfn_43();
    /*45*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*46*/ virtual bool isValidAuxValue(int) const;
    /*47*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*49*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*50*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*51*/ virtual void unk_vfn_51();
    /*52*/ virtual void unk_vfn_52();
    /*53*/ virtual bool canContainLiquid() const;
    /*54*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*55*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*58*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*60*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*61*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*62*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*63*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*64*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*65*/ virtual void unk_vfn_65();
    /*66*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*67*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*68*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*69*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*70*/ virtual int /*enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*72*/ virtual void unk_vfn_72();
    /*73*/ virtual bool isFilteredOut(int /*enum BlockRenderLayer*/) const;
    /*74*/ virtual void unk_vfn_74();
    /*75*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*76*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum FertilizerType*/) const;
    /*77*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*78*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*79*/ virtual bool mayPick() const;
    /*81*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*83*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*85*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*86*/ virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;
    /*87*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*89*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*90*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*91*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*92*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*93*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*94*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*95*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const*>*, float, int) const;
    /*96*/ virtual void trySpawnResourcesOnExplosion(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const*>*, float, int) const;
    /*97*/ virtual void unk_vfn_97();
    /*98*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*100*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*101*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*102*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*104*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*105*/ virtual int getExperienceDrop(class Random&) const;
    /*107*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*115*/ virtual void unk_vfn_115();
    /*116*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*117*/ virtual void unk_vfn_117();
    /*118*/ virtual void unk_vfn_118();
    /*119*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*121*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*122*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*123*/ virtual void unk_vfn_123();
    /*124*/ virtual int getIconYOffset() const;
    /*126*/ virtual bool isAuxValueRelevantForPicking() const;
    /*127*/ virtual int getColor(class Block const&) const;
    /*128*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*129*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*131*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*135*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*139*/ virtual void unk_vfn_139();
    /*140*/ virtual class Block const& getRenderBlock() const;
    /*141*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*142*/ virtual int /*enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*143*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*156*/ virtual void unk_vfn_156();
    /*160*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*161*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*162*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*163*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*164*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*165*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*167*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*168*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*169*/ virtual void unk_vfn_169();
    /*170*/ virtual void unk_vfn_170();
    /*171*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*172*/ virtual void onFallOn(class BlockSource&, class BlockPos const&, class Actor&, float) const;
    /*174*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*177*/ virtual void unk_vfn_177();
    /*179*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*180*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*183*/ virtual int getExtraRenderLayers() const;
    /*186*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*187*/ virtual void unk_vfn_187();
    /*188*/ virtual void unk_vfn_188();

public:
    MCAPI static bool canWalkOnTop(struct IActorMovementProxy const&);
    MCAPI static bool canWalkOnTop(class Actor const&);
};