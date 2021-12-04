// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Actor.hpp"
#define EXTRA_INCLUDE_PART_MINECART
#include "Extra/MinecartAPI.hpp"
#undef EXTRA_INCLUDE_PART_MINECART
class Minecart : public Actor {
#include "Extra/MinecartAPI.hpp"
public:
    /*8*/ virtual void reloadHardcoded(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*9*/ virtual void reloadHardcodedClient(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*14*/ virtual ~Minecart();
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*22*/ virtual void unk_vfn_22();
    /*32*/ virtual float getInterpolatedHeadRot(float) const;
    /*33*/ virtual float getInterpolatedBodyYaw(float) const;
    /*36*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*41*/ virtual void unk_vfn_41();
    /*48*/ virtual void normalTick();
    /*52*/ virtual float getRidingHeight();
    /*61*/ virtual void unk_vfn_61();
    /*68*/ virtual void unk_vfn_68();
    /*78*/ virtual float getCameraOffset() const;
    /*79*/ virtual float getShadowHeightOffs();
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void unk_vfn_82();
    /*87*/ virtual void unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player&);
    /*93*/ virtual bool isPickable();
    /*94*/ virtual void unk_vfn_94();
    /*95*/ virtual bool isSleeping() const;
    /*96*/ virtual void setSleeping(bool);
    /*97*/ virtual void unk_vfn_97();
    /*99*/ virtual bool isBlocking() const;
    /*100*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*104*/ virtual void unk_vfn_104();
    /*105*/ virtual bool isSurfaceMob() const;
    /*106*/ virtual void unk_vfn_106();
    /*107*/ virtual void unk_vfn_107();
    /*108*/ virtual void unk_vfn_108();
    /*112*/ virtual class Actor* findAttackTarget();
    /*113*/ virtual bool isValidTarget(class Actor*) const;
    /*116*/ virtual void adjustDamageAmount(int&) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*128*/ virtual bool isJumping() const;
    /*130*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*134*/ virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /*137*/ virtual void animateHurt();
    /*140*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*143*/ virtual float getPickRadius();
    /*152*/ virtual void awardKillScore(class Actor&, int);
    /*156*/ virtual int /*enum ArmorMaterialType*/ getArmorMaterialTypeInSlot(int /*enum ArmorSlot*/) const;
    /*157*/ virtual int /*enum ArmorTextureType*/ getArmorMaterialTextureTypeInSlot(int /*enum ArmorSlot*/) const;
    /*158*/ virtual float getArmorColorInSlot(int /*enum ArmorSlot*/, int) const;
    /*160*/ virtual void setEquippedSlot(int /*enum EquipmentSlot*/, class ItemStack const&);
    /*171*/ virtual class HashedString const& queryEntityRenderer() const;
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*174*/ virtual bool canFreeze() const;
    /*179*/ virtual int getPortalWaitTime() const;
    /*181*/ virtual bool canChangeDimensions() const;
    /*182*/ virtual void unk_vfn_182();
    /*184*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*193*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*194*/ virtual bool canBePulledIntoVehicle() const;
    /*195*/ virtual bool inCaravan() const;
    /*196*/ virtual void unk_vfn_196();
    /*199*/ virtual bool canSynchronizeNewEntity() const;
    /*203*/ virtual void buildDebugInfo(std::string&) const;
    /*208*/ virtual int getDeathTime() const;
    /*219*/ virtual void swing();
    /*221*/ virtual void unk_vfn_221();
    /*222*/ virtual void unk_vfn_222();
    /*226*/ virtual float getYHeadRot() const;
    /*227*/ virtual bool isWorldBuilder() const;
    /*228*/ virtual void unk_vfn_228();
    /*229*/ virtual bool isAdventure() const;
    /*233*/ virtual bool canDestroyBlock(class Block const&) const;
    /*234*/ virtual void setAuxValue(int);
    /*240*/ virtual void stopSpinAttack();
    /*242*/ virtual void unk_vfn_242();
    /*245*/ virtual void unk_vfn_245();
    /*246*/ virtual void kill();
    /*254*/ virtual void interpolatorTick();
    /*255*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*257*/ virtual void unk_vfn_257();
    /*258*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*261*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*262*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*265*/ virtual void unk_vfn_265();
    /*273*/ virtual void _onSizeUpdated();
    /*274*/ virtual void unk_vfn_274();
    /*275*/ virtual void destroy(class ActorDamageSource const&, bool);
    /*276*/ virtual int /*enum MinecartType*/ getType() = 0;
    /*277*/ virtual class Block const* getDefaultDisplayBlock() const;
    /*278*/ virtual void unk_vfn_278();
    /*279*/ virtual int getDefaultDisplayOffset() const;
    /*280*/ virtual void applyNaturalSlowdown(class BlockSource&);
    /*281*/ virtual void _lazyInitDisplayBlock();

public:
    MCAPI void setCustomDisplay(bool);
    MCAPI void setDisplayBlock(class Block const&);

private:
    MCAPI void _registerLoopingSounds();
};