// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Actor.hpp"
#define EXTRA_INCLUDE_PART_HANGINGACTOR
#include "Extra/HangingActorAPI.hpp"
#undef EXTRA_INCLUDE_PART_HANGINGACTOR
class HangingActor : public Actor {
#include "Extra/HangingActorAPI.hpp"
public:
    /*0*/ virtual void reloadHardcoded(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*1*/ virtual void reloadHardcodedClient(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*2*/ virtual ~HangingActor();
    /*3*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual void move(class Vec3 const&);
    /*6*/ virtual float getInterpolatedHeadRot(float) const;
    /*7*/ virtual float getInterpolatedBodyYaw(float) const;
    /*8*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*9*/ virtual void __unk_vfn_1();
    /*10*/ virtual void normalTick();
    /*11*/ virtual float getRidingHeight();
    /*12*/ virtual void __unk_vfn_2();
    /*13*/ virtual void __unk_vfn_3();
    /*14*/ virtual float getCameraOffset() const;
    /*15*/ virtual void __unk_vfn_4();
    /*16*/ virtual float getBrightness(float) const;
    /*17*/ virtual void __unk_vfn_5();
    /*18*/ virtual void playerTouch(class Player&);
    /*19*/ virtual bool isPickable();
    /*20*/ virtual void __unk_vfn_6();
    /*21*/ virtual bool isSleeping() const;
    /*22*/ virtual void setSleeping(bool);
    /*23*/ virtual void __unk_vfn_7();
    /*24*/ virtual bool isBlocking() const;
    /*25*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*26*/ virtual void __unk_vfn_8();
    /*27*/ virtual bool isSurfaceMob() const;
    /*28*/ virtual void __unk_vfn_9();
    /*29*/ virtual void __unk_vfn_10();
    /*30*/ virtual void __unk_vfn_11();
    /*31*/ virtual class Actor* findAttackTarget();
    /*32*/ virtual bool isValidTarget(class Actor*) const;
    /*33*/ virtual void adjustDamageAmount(int&) const;
    /*34*/ virtual void onTame();
    /*35*/ virtual void onFailedTame();
    /*36*/ virtual bool isJumping() const;
    /*37*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*38*/ virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /*39*/ virtual void animateHurt();
    /*40*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*41*/ virtual void __unk_vfn_12();
    /*42*/ virtual void awardKillScore(class Actor&, int);
    /*43*/ virtual int /*enum enum ArmorMaterialType*/ getArmorMaterialTypeInSlot(int /*enum enum ArmorSlot*/) const;
    /*44*/ virtual int /*enum enum ArmorTextureType*/ getArmorMaterialTextureTypeInSlot(int /*enum enum ArmorSlot*/) const;
    /*45*/ virtual float getArmorColorInSlot(int /*enum enum ArmorSlot*/, int) const;
    /*46*/ virtual void setEquippedSlot(int /*enum enum EquipmentSlot*/, class ItemStack const&);
    /*47*/ virtual class HashedString const& queryEntityRenderer() const;
    /*48*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*49*/ virtual bool canFreeze() const;
    /*50*/ virtual int getPortalWaitTime() const;
    /*51*/ virtual bool canChangeDimensions() const;
    /*52*/ virtual void __unk_vfn_13();
    /*53*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*54*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*55*/ virtual bool canBePulledIntoVehicle() const;
    /*56*/ virtual bool inCaravan() const;
    /*57*/ virtual void __unk_vfn_14();
    /*58*/ virtual bool canSynchronizeNewEntity() const;
    /*59*/ virtual void buildDebugInfo(std::string&) const;
    /*60*/ virtual int getDeathTime() const;
    /*61*/ virtual void swing();
    /*62*/ virtual void __unk_vfn_15();
    /*63*/ virtual void __unk_vfn_16();
    /*64*/ virtual float getYHeadRot() const;
    /*65*/ virtual bool isWorldBuilder() const;
    /*66*/ virtual void __unk_vfn_17();
    /*67*/ virtual bool isAdventure() const;
    /*68*/ virtual bool canDestroyBlock(class Block const&) const;
    /*69*/ virtual void setAuxValue(int);
    /*70*/ virtual void setSize(float, float);
    /*71*/ virtual void stopSpinAttack();
    /*72*/ virtual void __unk_vfn_18();
    /*73*/ virtual void __unk_vfn_19();
    /*74*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*75*/ virtual void __unk_vfn_20();
    /*76*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*77*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*78*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*79*/ virtual void __unk_vfn_21();
    /*80*/ virtual void _onSizeUpdated();
    /*81*/ virtual void __unk_vfn_22();
    /*82*/ virtual void setDir(int);
    /*83*/ virtual int getWidth() const = 0;
    /*84*/ virtual int getHeight() const = 0;
    /*85*/ virtual void dropItem() = 0;
    /*86*/ virtual bool placeHangingEntity(class BlockSource&, int);
    /*87*/ virtual bool wouldSurvive(class BlockSource&);
    /*
    inline void setSize(float a0, float a1){
        void (HangingActor::*rv)(float, float);
        *((void**)&rv) = dlsym("?setSize@HangingActor@@UEAAXMM@Z");
        return (this->*rv)(std::forward<float>(a0), std::forward<float>(a1));
    }
    inline bool placeHangingEntity(class BlockSource& a0, int a1){
        bool (HangingActor::*rv)(class BlockSource&, int);
        *((void**)&rv) = dlsym("?placeHangingEntity@HangingActor@@UEAA_NAEAVBlockSource@@H@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<int>(a1));
    }
    inline bool isPickable(){
        bool (HangingActor::*rv)();
        *((void**)&rv) = dlsym("?isPickable@HangingActor@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool _hurt(class ActorDamageSource const& a0, int a1, bool a2, bool a3){
        bool (HangingActor::*rv)(class ActorDamageSource const&, int, bool, bool);
        *((void**)&rv) = dlsym("?_hurt@HangingActor@@MEAA_NAEBVActorDamageSource@@H_N1@Z");
        return (this->*rv)(std::forward<class ActorDamageSource const&>(a0), std::forward<int>(a1), std::forward<bool>(a2), std::forward<bool>(a3));
    }
    inline void addAdditionalSaveData(class CompoundTag& a0){
        void (HangingActor::*rv)(class CompoundTag&);
        *((void**)&rv) = dlsym("?addAdditionalSaveData@HangingActor@@MEAAXAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0));
    }
    inline float getBrightness(float a0) const{
        float (HangingActor::*rv)(float) const;
        *((void**)&rv) = dlsym("?getBrightness@HangingActor@@UEBAMM@Z");
        return (this->*rv)(std::forward<float>(a0));
    }
    inline bool isInvulnerableTo(class ActorDamageSource const& a0) const{
        bool (HangingActor::*rv)(class ActorDamageSource const&) const;
        *((void**)&rv) = dlsym("?isInvulnerableTo@HangingActor@@UEBA_NAEBVActorDamageSource@@@Z");
        return (this->*rv)(std::forward<class ActorDamageSource const&>(a0));
    }
    inline void move(class Vec3 const& a0){
        void (HangingActor::*rv)(class Vec3 const&);
        *((void**)&rv) = dlsym("?move@HangingActor@@UEAAXAEBVVec3@@@Z");
        return (this->*rv)(std::forward<class Vec3 const&>(a0));
    }
    inline void normalTick(){
        void (HangingActor::*rv)();
        *((void**)&rv) = dlsym("?normalTick@HangingActor@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void readAdditionalSaveData(class CompoundTag const& a0, class DataLoadHelper& a1){
        void (HangingActor::*rv)(class CompoundTag const&, class DataLoadHelper&);
        *((void**)&rv) = dlsym("?readAdditionalSaveData@HangingActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0), std::forward<class DataLoadHelper&>(a1));
    }
    inline void reloadHardcoded(int \/*enum enum Actor::InitializationMethod*\/ a0, class VariantParameterList const& a1){
        void (HangingActor::*rv)(int \/*enum enum Actor::InitializationMethod*\/, class VariantParameterList const&);
        *((void**)&rv) = dlsym("?reloadHardcoded@HangingActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z");
        return (this->*rv)(std::forward<int \/*enum enum Actor::InitializationMethod*\/>(a0), std::forward<class VariantParameterList const&>(a1));
    }
    inline void reloadHardcodedClient(int \/*enum enum Actor::InitializationMethod*\/ a0, class VariantParameterList const& a1){
        void (HangingActor::*rv)(int \/*enum enum Actor::InitializationMethod*\/, class VariantParameterList const&);
        *((void**)&rv) = dlsym("?reloadHardcodedClient@HangingActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z");
        return (this->*rv)(std::forward<int \/*enum enum Actor::InitializationMethod*\/>(a0), std::forward<class VariantParameterList const&>(a1));
    }
    inline void setDir(int a0){
        void (HangingActor::*rv)(int);
        *((void**)&rv) = dlsym("?setDir@HangingActor@@UEAAXH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline bool wouldSurvive(class BlockSource& a0){
        bool (HangingActor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?wouldSurvive@HangingActor@@UEAA_NAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0));
    }
    */
    MCAPI int getDirection() const;

protected:
    MCAPI void _calculateAABB();
    MCAPI void _calculateActorPositionFromPlacementPosition(class BlockPos const&);
    MCAPI bool _wouldSurvive(class BlockSource&, class BlockPos const&, bool);

private:
    MCAPI bool _canSurviveOnBlock(class BlockSource const&, class BlockPos const&, bool) const;
    MCAPI static float const HANGING_OFFSET;
};