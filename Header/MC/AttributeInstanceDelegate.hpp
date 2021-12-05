// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_ATTRIBUTEINSTANCEDELEGATE
#include "Extra/AttributeInstanceDelegateAPI.hpp"
#undef EXTRA_INCLUDE_PART_ATTRIBUTEINSTANCEDELEGATE
class AttributeInstanceDelegate {
#include "Extra/AttributeInstanceDelegateAPI.hpp"
public:
    /*0*/ virtual ~AttributeInstanceDelegate();
    /*1*/ virtual void tick();
    /*2*/ virtual void notify(__int64);
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual float getBuffValue(class AttributeBuff const&) const;
    /*
    inline void notify(__int64 a0){
        void (AttributeInstanceDelegate::*rv)(__int64);
        *((void**)&rv) = dlsym("?notify@AttributeInstanceDelegate@@UEAAX_J@Z");
        return (this->*rv)(std::forward<__int64>(a0));
    }
    inline void tick(){
        void (AttributeInstanceDelegate::*rv)();
        *((void**)&rv) = dlsym("?tick@AttributeInstanceDelegate@@UEAAXXZ");
        return (this->*rv)();
    }
    inline bool change(float a0, float a1, struct AttributeBuffInfo a2){
        bool (AttributeInstanceDelegate::*rv)(float, float, struct AttributeBuffInfo);
        *((void**)&rv) = dlsym("?change@AttributeInstanceDelegate@@UEAA_NMMUAttributeBuffInfo@@@Z");
        return (this->*rv)(std::forward<float>(a0), std::forward<float>(a1), std::forward<struct AttributeBuffInfo>(a2));
    }
    inline float getBuffValue(class AttributeBuff const& a0) const{
        float (AttributeInstanceDelegate::*rv)(class AttributeBuff const&) const;
        *((void**)&rv) = dlsym("?getBuffValue@AttributeInstanceDelegate@@UEBAMAEBVAttributeBuff@@@Z");
        return (this->*rv)(std::forward<class AttributeBuff const&>(a0));
    }
    */

protected:
    MCAPI class AttributeInstance const& _getInstance() const;
    MCAPI class AttributeInstance* _getMutableInstance() const;

private:
};