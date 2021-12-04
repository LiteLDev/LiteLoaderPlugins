// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSERVERACTORSTARTRIDINGEVENT
#include "Extra/ScriptServerActorStartRidingEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERACTORSTARTRIDINGEVENT
class ScriptServerActorStartRidingEvent {
#include "Extra/ScriptServerActorStartRidingEventAPI.hpp"
public:
    /*0*/ virtual ~ScriptServerActorStartRidingEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;

public:
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setVehicleEntityId(struct ActorUniqueID const&);

private:
    MCAPI static class HashedString const mHash;
};