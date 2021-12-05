// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_PLAYERCONTAINERSETTER
#include "Extra/PlayerContainerSetterAPI.hpp"
#undef EXTRA_INCLUDE_PART_PLAYERCONTAINERSETTER
class PlayerContainerSetter {
#include "Extra/PlayerContainerSetterAPI.hpp"
public:
    /*0*/ virtual ~PlayerContainerSetter();
    /*1*/ virtual void setArmor(int, class ItemStack const&);
    /*2*/ virtual void setOffhandSlot(class ItemStack const&);
    /*3*/ virtual void setPlayerUIItem(int, class ItemStack const&);
    /*
    inline void setArmor(int a0, class ItemStack const& a1){
        void (PlayerContainerSetter::*rv)(int, class ItemStack const&);
        *((void**)&rv) = dlsym("?setArmor@PlayerContainerSetter@@UEAAXHAEBVItemStack@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStack const&>(a1));
    }
    inline void setOffhandSlot(class ItemStack const& a0){
        void (PlayerContainerSetter::*rv)(class ItemStack const&);
        *((void**)&rv) = dlsym("?setOffhandSlot@PlayerContainerSetter@@UEAAXAEBVItemStack@@@Z");
        return (this->*rv)(std::forward<class ItemStack const&>(a0));
    }
    inline void setPlayerUIItem(int a0, class ItemStack const& a1){
        void (PlayerContainerSetter::*rv)(int, class ItemStack const&);
        *((void**)&rv) = dlsym("?setPlayerUIItem@PlayerContainerSetter@@UEAAXHAEBVItemStack@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStack const&>(a1));
    }
    */

protected:

private:
};