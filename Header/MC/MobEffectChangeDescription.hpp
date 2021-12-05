// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_MOBEFFECTCHANGEDESCRIPTION
#include "Extra/MobEffectChangeDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOBEFFECTCHANGEDESCRIPTION
class MobEffectChangeDescription {
#include "Extra/MobEffectChangeDescriptionAPI.hpp"
public:
    /*0*/ virtual char const* getJsonName() const;
    /*1*/ virtual ~MobEffectChangeDescription();
    /*2*/ virtual void deserializeData(struct DeserializeDataParams);
    /*3*/ virtual void serializeData(class Json::Value&) const;
    /*
    inline void deserializeData(struct DeserializeDataParams a0){
        void (MobEffectChangeDescription::*rv)(struct DeserializeDataParams);
        *((void**)&rv) = dlsym("?deserializeData@MobEffectChangeDescription@@UEAAXUDeserializeDataParams@@@Z");
        return (this->*rv)(std::forward<struct DeserializeDataParams>(a0));
    }
    inline char const* getJsonName() const{
        char const* (MobEffectChangeDescription::*rv)() const;
        *((void**)&rv) = dlsym("?getJsonName@MobEffectChangeDescription@@UEBAPEBDXZ");
        return (this->*rv)();
    }
    inline void serializeData(class Json::Value& a0) const{
        void (MobEffectChangeDescription::*rv)(class Json::Value&) const;
        *((void**)&rv) = dlsym("?serializeData@MobEffectChangeDescription@@UEBAXAEAVValue@Json@@@Z");
        return (this->*rv)(std::forward<class Json::Value&>(a0));
    }
    */

protected:

private:
};