// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Horse : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSE
public:
    class Horse& operator=(class Horse const&) = delete;
    Horse(class Horse const&) = delete;
    Horse() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const&);
    /*14*/ virtual ~Horse();
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*36*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*41*/ virtual void __unk_vfn_41();
    /*48*/ virtual void normalTick();
    /*51*/ virtual void positionPassenger(class Actor&, float);
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*78*/ virtual float getCameraOffset() const;
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player&);
    /*91*/ virtual bool isImmobile() const;
    /*94*/ virtual void __unk_vfn_94();
    /*97*/ virtual void __unk_vfn_97();
    /*100*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*112*/ virtual class Actor* findAttackTarget();
    /*113*/ virtual bool isValidTarget(class Actor*) const;
    /*116*/ virtual void adjustDamageAmount(int&) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*125*/ virtual void setStanding(bool);
    /*130*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*140*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*141*/ virtual void feed(int);
    /*142*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*152*/ virtual void awardKillScore(class Actor&, int);
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*174*/ virtual bool canFreeze() const;
    /*179*/ virtual int getPortalWaitTime() const;
    /*181*/ virtual bool canChangeDimensions() const;
    /*182*/ virtual void __unk_vfn_182();
    /*184*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*186*/ virtual void causeFallDamage(float, float, class ActorDamageSource);
    /*187*/ virtual void handleFallDistanceOnServer(float, float, bool);
    /*191*/ virtual void onSynchedDataUpdate(int);
    /*193*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*194*/ virtual bool canBePulledIntoVehicle() const;
    /*196*/ virtual void __unk_vfn_196();
    /*199*/ virtual bool canSynchronizeNewEntity() const;
    /*218*/ virtual void openContainerComponent(class Player&);
    /*221*/ virtual void __unk_vfn_221();
    /*222*/ virtual void __unk_vfn_222();
    /*227*/ virtual bool isWorldBuilder() const;
    /*228*/ virtual void __unk_vfn_228();
    /*229*/ virtual bool isAdventure() const;
    /*233*/ virtual bool canDestroyBlock(class Block const&) const;
    /*234*/ virtual void __unk_vfn_234();
    /*240*/ virtual void stopSpinAttack();
    /*242*/ virtual void __unk_vfn_242();
    /*245*/ virtual void __unk_vfn_245();
    /*247*/ virtual void die(class ActorDamageSource const&);
    /*255*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*257*/ virtual void __unk_vfn_257();
    /*258*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*263*/ virtual void _playStepSound(class BlockPos const&, class Block const&);
    /*265*/ virtual void __unk_vfn_265();
    /*274*/ virtual void __unk_vfn_274();
    /*276*/ virtual void spawnAnim();
    /*287*/ virtual void travel(float, float, float);
    /*290*/ virtual void aiStep();
    /*298*/ virtual int getItemUseDuration() const;
    /*299*/ virtual float getItemUseStartupProgress() const;
    /*300*/ virtual float getItemUseIntervalProgress() const;
    /*303*/ virtual void __unk_vfn_303();
    /*305*/ virtual bool isAlliedTo(class Mob*);
    /*307*/ virtual void __unk_vfn_307();
    /*312*/ virtual int getArmorValue();
    /*316*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*331*/ virtual void onBorn(class Actor&, class Actor&);
    /*338*/ virtual void __unk_vfn_338();
    /*348*/ virtual void _serverAiMobStep();
    /*354*/ virtual void __unk_vfn_354();
    /*356*/ virtual void setType(int);
    /*357*/ virtual int getType() const;
    /*358*/ virtual void setHorseEating(bool);
    /*359*/ virtual float getStandAnim(float) const;
    /*360*/ virtual bool isAdult() const;
    /*361*/ virtual bool isHorseEating() const;
    /*362*/ virtual bool isMouthOpen() const;
    /*363*/ virtual bool isTailMoving() const;
    /*364*/ virtual void makeMad();
    /*365*/ virtual bool tameToPlayer(class Player&, bool);
    /*
    inline bool useNewAi() const{
        bool (Horse::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Horse@@MEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Horse(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    MCAPI static int const DONKEY_CHEST_COUNT;

protected:

private:
    MCAPI void openMouth();
    MCAPI void setHorseFlag(enum HorseFlags, bool);
    MCAPI bool setHorseType(enum ActorType&);
    MCAPI static int const DATA_AGE;

};