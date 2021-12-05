// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSERVERACTORSTOPRIDINGEVENT
#include "Extra/ScriptServerActorStopRidingEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERACTORSTOPRIDINGEVENT
class ScriptServerActorStopRidingEvent {
#include "Extra/ScriptServerActorStopRidingEventAPI.hpp"
public:
    /*0*/ virtual ~ScriptServerActorStopRidingEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;
    /*
    inline bool _serialize(class ScriptEngine& a0, class ScriptApi::ScriptObjectHandle& a1) const{
        bool (ScriptServerActorStopRidingEvent::*rv)(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;
        *((void**)&rv) = dlsym("?_serialize@ScriptServerActorStopRidingEvent@@EEBA_NAEAVScriptEngine@@AEAVScriptObjectHandle@ScriptApi@@@Z");
        return (this->*rv)(std::forward<class ScriptEngine&>(a0), std::forward<class ScriptApi::ScriptObjectHandle&>(a1));
    }
    */
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setEntityIsBeingDestroyed(bool);
    MCAPI void setExitFromPassenger(bool);
    MCAPI void setSwitchingVehicles(bool);

protected:

private:
    MCAPI static class HashedString const mHash;
};