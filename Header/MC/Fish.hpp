// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "WaterAnimal.hpp"
#include "Actor.hpp"
#define EXTRA_INCLUDE_PART_FISH
#include "Extra/FishAPI.hpp"
#undef EXTRA_INCLUDE_PART_FISH
class Fish : public WaterAnimal {
#include "Extra/FishAPI.hpp"
public:
    /*0*/ virtual void initializeComponents(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*1*/ virtual ~Fish();
    /*2*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void normalTick();
    /*7*/ virtual float getRidingHeight();
    /*8*/ virtual bool startRiding(class Actor&);
    /*9*/ virtual void __unk_vfn_2();
    /*10*/ virtual void __unk_vfn_3();
    /*11*/ virtual float getCameraOffset() const;
    /*12*/ virtual void __unk_vfn_4();
    /*13*/ virtual void __unk_vfn_5();
    /*14*/ virtual void playerTouch(class Player&);
    /*15*/ virtual void __unk_vfn_6();
    /*16*/ virtual void __unk_vfn_7();
    /*17*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*18*/ virtual void __unk_vfn_8();
    /*19*/ virtual void __unk_vfn_9();
    /*20*/ virtual void __unk_vfn_10();
    /*21*/ virtual void __unk_vfn_11();
    /*22*/ virtual class Actor* findAttackTarget();
    /*23*/ virtual bool isValidTarget(class Actor*) const;
    /*24*/ virtual void adjustDamageAmount(int&) const;
    /*25*/ virtual void onTame();
    /*26*/ virtual void onFailedTame();
    /*27*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*28*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*29*/ virtual void __unk_vfn_12();
    /*30*/ virtual void awardKillScore(class Actor&, int);
    /*31*/ virtual class HashedString const& queryEntityRenderer() const;
    /*32*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*33*/ virtual int getPortalWaitTime() const;
    /*34*/ virtual bool canChangeDimensions() const;
    /*35*/ virtual void __unk_vfn_13();
    /*36*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*37*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*38*/ virtual bool canBePulledIntoVehicle() const;
    /*39*/ virtual void __unk_vfn_14();
    /*40*/ virtual bool canSynchronizeNewEntity() const;
    /*41*/ virtual void __unk_vfn_15();
    /*42*/ virtual void __unk_vfn_16();
    /*43*/ virtual bool isWorldBuilder() const;
    /*44*/ virtual void __unk_vfn_17();
    /*45*/ virtual bool isAdventure() const;
    /*46*/ virtual bool canDestroyBlock(class Block const&) const;
    /*47*/ virtual void setAuxValue(int);
    /*48*/ virtual void stopSpinAttack();
    /*49*/ virtual void __unk_vfn_18();
    /*50*/ virtual void __unk_vfn_19();
    /*51*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*52*/ virtual void __unk_vfn_20();
    /*53*/ virtual void __unk_vfn_21();
    /*54*/ virtual void __unk_vfn_22();
    /*55*/ virtual void spawnAnim();
    /*56*/ virtual int getItemUseDuration() const;
    /*57*/ virtual float getItemUseStartupProgress() const;
    /*58*/ virtual float getItemUseIntervalProgress() const;
    /*59*/ virtual void __unk_vfn_23();
    /*60*/ virtual bool isAlliedTo(class Mob*);
    /*61*/ virtual void __unk_vfn_24();
    /*62*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*63*/ virtual bool createAIGoals();
    /*64*/ virtual void onBorn(class Actor&, class Actor&);
    /*65*/ virtual void __unk_vfn_25();
    /*66*/ virtual float _getWalkTargetValue(class BlockPos const&);
    /*67*/ virtual void __unk_vfn_26();
    /*68*/ virtual void _serverAiMobStep();
    /*69*/ virtual void __unk_vfn_27();
    /*
    inline bool startRiding(class Actor& a0){
        bool (Fish::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?startRiding@Fish@@UEAA_NAEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor&>(a0));
    }
    inline bool createAIGoals(){
        bool (Fish::*rv)();
        *((void**)&rv) = dlsym("?createAIGoals@Fish@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void initializeComponents(int \/*enum enum Actor::InitializationMethod*\/ a0, class VariantParameterList const& a1){
        void (Fish::*rv)(int \/*enum enum Actor::InitializationMethod*\/, class VariantParameterList const&);
        *((void**)&rv) = dlsym("?initializeComponents@Fish@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z");
        return (this->*rv)(std::forward<int \/*enum enum Actor::InitializationMethod*\/>(a0), std::forward<class VariantParameterList const&>(a1));
    }
    inline void normalTick(){
        void (Fish::*rv)();
        *((void**)&rv) = dlsym("?normalTick@Fish@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void updateEntitySpecificMolangVariables(class RenderParams& a0){
        void (Fish::*rv)(class RenderParams&);
        *((void**)&rv) = dlsym("?updateEntitySpecificMolangVariables@Fish@@UEAAXAEAVRenderParams@@@Z");
        return (this->*rv)(std::forward<class RenderParams&>(a0));
    }
    */

protected:

private:
};