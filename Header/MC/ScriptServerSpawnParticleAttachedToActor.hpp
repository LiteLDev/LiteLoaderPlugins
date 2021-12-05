// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSERVERSPAWNPARTICLEATTACHEDTOACTOR
#include "Extra/ScriptServerSpawnParticleAttachedToActorAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERSPAWNPARTICLEATTACHEDTOACTOR
class ScriptServerSpawnParticleAttachedToActor {
#include "Extra/ScriptServerSpawnParticleAttachedToActorAPI.hpp"
public:
    /*0*/ virtual ~ScriptServerSpawnParticleAttachedToActor();
    /*1*/ virtual bool receivedEvent(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, std::string const&, class ScriptApi::ScriptObjectHandle const&);
    /*2*/ virtual bool getEventData(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, std::string const&, class ScriptApi::ScriptObjectHandle&);
    /*
    inline bool getEventData(class ScriptApi::ScriptVersionInfo const& a0, class ScriptEngine& a1, class ScriptServerContext& a2, std::string const& a3, class ScriptApi::ScriptObjectHandle& a4){
        bool (ScriptServerSpawnParticleAttachedToActor::*rv)(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, std::string const&, class ScriptApi::ScriptObjectHandle&);
        *((void**)&rv) = dlsym("?getEventData@ScriptServerSpawnParticleAttachedToActor@@UEAA_NAEBVScriptVersionInfo@ScriptApi@@AEAVScriptEngine@@AEAVScriptServerContext@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVScriptObjectHandle@3@@Z");
        return (this->*rv)(std::forward<class ScriptApi::ScriptVersionInfo const&>(a0), std::forward<class ScriptEngine&>(a1), std::forward<class ScriptServerContext&>(a2), std::forward<std::string const&>(a3), std::forward<class ScriptApi::ScriptObjectHandle&>(a4));
    }
    inline bool receivedEvent(class ScriptApi::ScriptVersionInfo const& a0, class ScriptEngine& a1, class ScriptServerContext& a2, std::string const& a3, class ScriptApi::ScriptObjectHandle const& a4){
        bool (ScriptServerSpawnParticleAttachedToActor::*rv)(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, std::string const&, class ScriptApi::ScriptObjectHandle const&);
        *((void**)&rv) = dlsym("?receivedEvent@ScriptServerSpawnParticleAttachedToActor@@UEAA_NAEBVScriptVersionInfo@ScriptApi@@AEAVScriptEngine@@AEAVScriptServerContext@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVScriptObjectHandle@3@@Z");
        return (this->*rv)(std::forward<class ScriptApi::ScriptVersionInfo const&>(a0), std::forward<class ScriptEngine&>(a1), std::forward<class ScriptServerContext&>(a2), std::forward<std::string const&>(a3), std::forward<class ScriptApi::ScriptObjectHandle const&>(a4));
    }
    */

protected:

private:
    MCAPI static class HashedString const mHash;
};