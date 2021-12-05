// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_ROTATIONDESCRIPTION
#include "Extra/RotationDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_ROTATIONDESCRIPTION
class RotationDescription {
#include "Extra/RotationDescriptionAPI.hpp"
public:
    /*0*/ virtual char const* getJsonName() const;
    /*1*/ virtual ~RotationDescription();
    /*2*/ virtual void deserializeData(struct DeserializeDataParams);
    /*3*/ virtual void serializeData(class Json::Value&) const;
    /*
    inline void deserializeData(struct DeserializeDataParams a0){
        void (RotationDescription::*rv)(struct DeserializeDataParams);
        *((void**)&rv) = dlsym("?deserializeData@RotationDescription@@UEAAXUDeserializeDataParams@@@Z");
        return (this->*rv)(std::forward<struct DeserializeDataParams>(a0));
    }
    inline char const* getJsonName() const{
        char const* (RotationDescription::*rv)() const;
        *((void**)&rv) = dlsym("?getJsonName@RotationDescription@@UEBAPEBDXZ");
        return (this->*rv)();
    }
    inline void serializeData(class Json::Value& a0) const{
        void (RotationDescription::*rv)(class Json::Value&) const;
        *((void**)&rv) = dlsym("?serializeData@RotationDescription@@UEBAXAEAVValue@Json@@@Z");
        return (this->*rv)(std::forward<class Json::Value&>(a0));
    }
    */

protected:

private:
};