// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_CATCHFIRESUBCOMPONENT
#include "Extra/CatchFireSubcomponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_CATCHFIRESUBCOMPONENT
class CatchFireSubcomponent {
#include "Extra/CatchFireSubcomponentAPI.hpp"
public:
    /*0*/ virtual ~CatchFireSubcomponent();
    /*1*/ virtual void readfromJSON(class Json::Value&, class SemVersion const&);
    /*2*/ virtual void writetoJSON(class Json::Value&) const;
    /*3*/ virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    /*4*/ virtual char const* getName();
    /*
    inline void doOnHitEffect(class Actor& a0, class ProjectileComponent& a1){
        void (CatchFireSubcomponent::*rv)(class Actor&, class ProjectileComponent&);
        *((void**)&rv) = dlsym("?doOnHitEffect@CatchFireSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z");
        return (this->*rv)(std::forward<class Actor&>(a0), std::forward<class ProjectileComponent&>(a1));
    }
    inline char const* getName(){
        char const* (CatchFireSubcomponent::*rv)();
        *((void**)&rv) = dlsym("?getName@CatchFireSubcomponent@@UEAAPEBDXZ");
        return (this->*rv)();
    }
    inline void readfromJSON(class Json::Value& a0, class SemVersion const& a1){
        void (CatchFireSubcomponent::*rv)(class Json::Value&, class SemVersion const&);
        *((void**)&rv) = dlsym("?readfromJSON@CatchFireSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z");
        return (this->*rv)(std::forward<class Json::Value&>(a0), std::forward<class SemVersion const&>(a1));
    }
    inline void writetoJSON(class Json::Value& a0) const{
        void (CatchFireSubcomponent::*rv)(class Json::Value&) const;
        *((void**)&rv) = dlsym("?writetoJSON@CatchFireSubcomponent@@UEBAXAEAVValue@Json@@@Z");
        return (this->*rv)(std::forward<class Json::Value&>(a0));
    }
    */

protected:

private:
};