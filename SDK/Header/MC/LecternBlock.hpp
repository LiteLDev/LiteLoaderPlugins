// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LecternBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LECTERNBLOCK
public:
    class LecternBlock& operator=(class LecternBlock const&) = delete;
    LecternBlock(class LecternBlock const&) = delete;
    LecternBlock() = delete;
#endif

public:
    /*0*/ virtual ~LecternBlock();
    /*4*/ virtual void __unk_vfn_4();
    /*6*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*10*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*15*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*16*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*17*/ virtual void __unk_vfn_17();
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*25*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*27*/ virtual void __unk_vfn_27();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void __unk_vfn_42();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*46*/ virtual void __unk_vfn_46();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual void __unk_vfn_50();
    /*52*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*53*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*54*/ virtual void __unk_vfn_54();
    /*55*/ virtual void __unk_vfn_55();
    /*56*/ virtual void __unk_vfn_56();
    /*57*/ virtual void __unk_vfn_57();
    /*58*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*61*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*62*/ virtual void __unk_vfn_62();
    /*63*/ virtual void __unk_vfn_63();
    /*64*/ virtual void __unk_vfn_64();
    /*65*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*66*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*67*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*68*/ virtual void __unk_vfn_68();
    /*69*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*70*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*71*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*72*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*77*/ virtual void __unk_vfn_77();
    /*78*/ virtual void __unk_vfn_78();
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*83*/ virtual void __unk_vfn_83();
    /*84*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*86*/ virtual void __unk_vfn_86();
    /*88*/ virtual void __unk_vfn_88();
    /*90*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*91*/ virtual bool playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const;
    /*92*/ virtual void __unk_vfn_92();
    /*94*/ virtual void __unk_vfn_94();
    /*95*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*97*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*103*/ virtual void __unk_vfn_103();
    /*104*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*105*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*108*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*109*/ virtual int getExperienceDrop(class Random&) const;
    /*120*/ virtual void __unk_vfn_120();
    /*121*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*122*/ virtual void __unk_vfn_122();
    /*123*/ virtual void __unk_vfn_123();
    /*124*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*128*/ virtual void __unk_vfn_128();
    /*129*/ virtual int getIconYOffset() const;
    /*131*/ virtual void __unk_vfn_131();
    /*132*/ virtual int getColor(class Block const&) const;
    /*133*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*134*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*136*/ virtual void __unk_vfn_136();
    /*140*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*144*/ virtual void __unk_vfn_144();
    /*145*/ virtual class Block const& getRenderBlock() const;
    /*146*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*147*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*148*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*161*/ virtual void __unk_vfn_161();
    /*165*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*166*/ virtual void __unk_vfn_166();
    /*167*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*168*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*169*/ virtual void _addHardCodedBlockComponents();
    /*170*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*171*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*172*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*173*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*174*/ virtual void __unk_vfn_174();
    /*175*/ virtual void __unk_vfn_175();
    /*176*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*179*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*182*/ virtual void __unk_vfn_182();
    /*184*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*185*/ virtual void __unk_vfn_185();
    /*188*/ virtual int getExtraRenderLayers() const;
    /*191*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*192*/ virtual void __unk_vfn_192();
    /*193*/ virtual void __unk_vfn_193();
    /*
    inline bool checkIsPathable(class Actor& a0, class BlockPos const& a1, class BlockPos const& a2) const{
        bool (LecternBlock::*rv)(class Actor&, class BlockPos const&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?checkIsPathable@LecternBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z");
        return (this->*rv)(std::forward<class Actor&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class BlockPos const&>(a2));
    }
    inline bool isAuxValueRelevantForPicking() const{
        bool (LecternBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isAuxValueRelevantForPicking@LecternBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isSignalSource() const{
        bool (LecternBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isSignalSource@LecternBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool shouldConnectToRedstone(class BlockSource& a0, class BlockPos const& a1, int a2) const{
        bool (LecternBlock::*rv)(class BlockSource&, class BlockPos const&, int) const;
        *((void**)&rv) = dlsym("?shouldConnectToRedstone@LecternBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<int>(a2));
    }
    inline bool canContainLiquid() const{
        bool (LecternBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canContainLiquid@LecternBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool hasComparatorSignal() const{
        bool (LecternBlock::*rv)() const;
        *((void**)&rv) = dlsym("?hasComparatorSignal@LecternBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isInteractiveBlock() const{
        bool (LecternBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isInteractiveBlock@LecternBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI LecternBlock(std::string const&, int);
    MCAPI void emitRedstonePulse(class BlockSource&, class BlockPos const&) const;

protected:

private:
    MCAPI bool _dropBook(class Player&, class BlockPos const&) const;

};