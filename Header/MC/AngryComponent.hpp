// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ANGRYCOMPONENT
#include "Extra/AngryComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_ANGRYCOMPONENT
class AngryComponent {
#include "Extra/AngryComponentAPI.hpp"

public:
    MCAPI bool canAttack(class Mob&, class Mob*, class Actor*, bool, bool);
    MCAPI enum LevelSoundEvent const getAngrySound(class Mob const&) const;
    MCAPI bool getBroadcastAnger() const;
    MCAPI bool getBroadcastAngerOnAttack() const;
    MCAPI bool getBroadcastAngerOnBeingAttacked() const;
    MCAPI class AngryComponent& operator=(class AngryComponent&&);
    MCAPI class ActorFilterGroup const& getBroadcastFilter() const;
    MCAPI int getBroadcastRange() const;
    MCAPI bool getHasTicked() const;
    MCAPI struct Tick const getNextSoundEventTick() const;
    MCAPI void restartTimer(class Mob&);
    MCAPI void setAngry(class Mob&, bool);
    MCAPI void setHasTicked(bool);
    MCAPI void setNextSoundEventTick(class Mob const&);
};