// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "PredictableProjectile.hpp"
#include "Actor.hpp"
#define EXTRA_INCLUDE_PART_PRIMEDTNT
#include "Extra/PrimedTntAPI.hpp"
#undef EXTRA_INCLUDE_PART_PRIMEDTNT
class PrimedTnt : public PredictableProjectile {
#include "Extra/PrimedTntAPI.hpp"
public:
    /*0*/ virtual void reloadHardcoded(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*1*/ virtual void reloadHardcodedClient(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*2*/ virtual ~PrimedTnt();
    /*3*/ virtual int /*enum enum ActorType*/ getOwnerEntityType();
    /*4*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*5*/ virtual void __unk_vfn_0();
    /*6*/ virtual float getInterpolatedHeadRot(float) const;
    /*7*/ virtual float getInterpolatedBodyYaw(float) const;
    /*8*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*9*/ virtual void __unk_vfn_1();
    /*10*/ virtual void teleportTo(class Vec3 const&, bool, int, int);
    /*11*/ virtual void normalTick();
    /*12*/ virtual float getRidingHeight();
    /*13*/ virtual void __unk_vfn_2();
    /*14*/ virtual void __unk_vfn_3();
    /*15*/ virtual float getCameraOffset() const;
    /*16*/ virtual float getShadowHeightOffs();
    /*17*/ virtual float getShadowRadius() const;
    /*18*/ virtual void __unk_vfn_4();
    /*19*/ virtual void __unk_vfn_5();
    /*20*/ virtual void playerTouch(class Player&);
    /*21*/ virtual bool isPickable();
    /*22*/ virtual void __unk_vfn_6();
    /*23*/ virtual bool isSleeping() const;
    /*24*/ virtual void setSleeping(bool);
    /*25*/ virtual void __unk_vfn_7();
    /*26*/ virtual bool isBlocking() const;
    /*27*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*28*/ virtual void __unk_vfn_8();
    /*29*/ virtual bool isSurfaceMob() const;
    /*30*/ virtual void __unk_vfn_9();
    /*31*/ virtual void __unk_vfn_10();
    /*32*/ virtual void __unk_vfn_11();
    /*33*/ virtual class Actor* findAttackTarget();
    /*34*/ virtual bool isValidTarget(class Actor*) const;
    /*35*/ virtual void adjustDamageAmount(int&) const;
    /*36*/ virtual void onTame();
    /*37*/ virtual void onFailedTame();
    /*38*/ virtual bool isJumping() const;
    /*39*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*40*/ virtual void animateHurt();
    /*41*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*42*/ virtual void __unk_vfn_12();
    /*43*/ virtual void awardKillScore(class Actor&, int);
    /*44*/ virtual int /*enum enum ArmorMaterialType*/ getArmorMaterialTypeInSlot(int /*enum enum ArmorSlot*/) const;
    /*45*/ virtual int /*enum enum ArmorTextureType*/ getArmorMaterialTextureTypeInSlot(int /*enum enum ArmorSlot*/) const;
    /*46*/ virtual float getArmorColorInSlot(int /*enum enum ArmorSlot*/, int) const;
    /*47*/ virtual void setEquippedSlot(int /*enum enum EquipmentSlot*/, class ItemStack const&);
    /*48*/ virtual class HashedString const& queryEntityRenderer() const;
    /*49*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*50*/ virtual bool canFreeze() const;
    /*51*/ virtual int getPortalWaitTime() const;
    /*52*/ virtual bool canChangeDimensions() const;
    /*53*/ virtual void __unk_vfn_13();
    /*54*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*55*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*56*/ virtual bool canBePulledIntoVehicle() const;
    /*57*/ virtual bool inCaravan() const;
    /*58*/ virtual void __unk_vfn_14();
    /*59*/ virtual bool canSynchronizeNewEntity() const;
    /*60*/ virtual void buildDebugInfo(std::string&) const;
    /*61*/ virtual int getDeathTime() const;
    /*62*/ virtual void swing();
    /*63*/ virtual void __unk_vfn_15();
    /*64*/ virtual void __unk_vfn_16();
    /*65*/ virtual float getYHeadRot() const;
    /*66*/ virtual bool isWorldBuilder() const;
    /*67*/ virtual void __unk_vfn_17();
    /*68*/ virtual bool isAdventure() const;
    /*69*/ virtual bool canDestroyBlock(class Block const&) const;
    /*70*/ virtual void setAuxValue(int);
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
    /*
    inline void readAdditionalSaveData(class CompoundTag const& a0, class DataLoadHelper& a1){
        void (PrimedTnt::*rv)(class CompoundTag const&, class DataLoadHelper&);
        *((void**)&rv) = dlsym("?readAdditionalSaveData@PrimedTnt@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0), std::forward<class DataLoadHelper&>(a1));
    }
    inline void addAdditionalSaveData(class CompoundTag& a0){
        void (PrimedTnt::*rv)(class CompoundTag&);
        *((void**)&rv) = dlsym("?addAdditionalSaveData@PrimedTnt@@MEAAXAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0));
    }
    inline float getShadowRadius() const{
        float (PrimedTnt::*rv)() const;
        *((void**)&rv) = dlsym("?getShadowRadius@PrimedTnt@@UEBAMXZ");
        return (this->*rv)();
    }
    inline float getShadowHeightOffs(){
        float (PrimedTnt::*rv)();
        *((void**)&rv) = dlsym("?getShadowHeightOffs@PrimedTnt@@UEAAMXZ");
        return (this->*rv)();
    }
    inline bool _hurt(class ActorDamageSource const& a0, int a1, bool a2, bool a3){
        bool (PrimedTnt::*rv)(class ActorDamageSource const&, int, bool, bool);
        *((void**)&rv) = dlsym("?_hurt@PrimedTnt@@MEAA_NAEBVActorDamageSource@@H_N1@Z");
        return (this->*rv)(std::forward<class ActorDamageSource const&>(a0), std::forward<int>(a1), std::forward<bool>(a2), std::forward<bool>(a3));
    }
    inline int \/*enum enum ActorType*\/ getOwnerEntityType(){
        int \/*enum enum ActorType*\/ (PrimedTnt::*rv)();
        *((void**)&rv) = dlsym("?getOwnerEntityType@PrimedTnt@@UEAA?AW4ActorType@@XZ");
        return (this->*rv)();
    }
    inline struct ActorUniqueID getSourceUniqueID() const{
        struct ActorUniqueID (PrimedTnt::*rv)() const;
        *((void**)&rv) = dlsym("?getSourceUniqueID@PrimedTnt@@UEBA?AUActorUniqueID@@XZ");
        return (this->*rv)();
    }
    inline bool isPickable(){
        bool (PrimedTnt::*rv)();
        *((void**)&rv) = dlsym("?isPickable@PrimedTnt@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void normalTick(){
        void (PrimedTnt::*rv)();
        *((void**)&rv) = dlsym("?normalTick@PrimedTnt@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void reloadHardcoded(int \/*enum enum Actor::InitializationMethod*\/ a0, class VariantParameterList const& a1){
        void (PrimedTnt::*rv)(int \/*enum enum Actor::InitializationMethod*\/, class VariantParameterList const&);
        *((void**)&rv) = dlsym("?reloadHardcoded@PrimedTnt@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z");
        return (this->*rv)(std::forward<int \/*enum enum Actor::InitializationMethod*\/>(a0), std::forward<class VariantParameterList const&>(a1));
    }
    inline void reloadHardcodedClient(int \/*enum enum Actor::InitializationMethod*\/ a0, class VariantParameterList const& a1){
        void (PrimedTnt::*rv)(int \/*enum enum Actor::InitializationMethod*\/, class VariantParameterList const&);
        *((void**)&rv) = dlsym("?reloadHardcodedClient@PrimedTnt@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z");
        return (this->*rv)(std::forward<int \/*enum enum Actor::InitializationMethod*\/>(a0), std::forward<class VariantParameterList const&>(a1));
    }
    inline void teleportTo(class Vec3 const& a0, bool a1, int a2, int a3){
        void (PrimedTnt::*rv)(class Vec3 const&, bool, int, int);
        *((void**)&rv) = dlsym("?teleportTo@PrimedTnt@@UEAAXAEBVVec3@@_NHH@Z");
        return (this->*rv)(std::forward<class Vec3 const&>(a0), std::forward<bool>(a1), std::forward<int>(a2), std::forward<int>(a3));
    }
    */

protected:

private:
};