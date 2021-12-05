// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ContainerModel.hpp"
#define EXTRA_INCLUDE_PART_PLAYERUICONTAINERMODELBASE
#include "Extra/PlayerUIContainerModelBaseAPI.hpp"
#undef EXTRA_INCLUDE_PART_PLAYERUICONTAINERMODELBASE
class PlayerUIContainerModelBase : public ContainerModel {
#include "Extra/PlayerUIContainerModelBaseAPI.hpp"
public:
    /*0*/ virtual void containerContentChanged(int);
    /*1*/ virtual ~PlayerUIContainerModelBase();
    /*2*/ virtual void postInit();
    /*3*/ virtual void releaseResources();
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual class ContainerWeakRef getContainerWeakRef() const;
    /*6*/ virtual void __unk_vfn_1();
    /*7*/ virtual void __unk_vfn_2();
    /*8*/ virtual void __unk_vfn_3();
    /*9*/ virtual bool isValid();
    /*10*/ virtual void __unk_vfn_4();
    /*11*/ virtual void __unk_vfn_5();
    /*12*/ virtual void __unk_vfn_6();
    /*13*/ virtual void __unk_vfn_7();
    /*14*/ virtual void __unk_vfn_8();
    /*15*/ virtual class Container* _getContainer() const;
    /*16*/ virtual int _getContainerOffset() const;
    /*17*/ virtual void _onItemChanged(int, class ItemStack const&, class ItemStack const&);
    /*
    inline int _getContainerOffset() const{
        int (PlayerUIContainerModelBase::*rv)() const;
        *((void**)&rv) = dlsym("?_getContainerOffset@PlayerUIContainerModelBase@@MEBAHXZ");
        return (this->*rv)();
    }
    inline class Container* _getContainer() const{
        class Container* (PlayerUIContainerModelBase::*rv)() const;
        *((void**)&rv) = dlsym("?_getContainer@PlayerUIContainerModelBase@@MEBAPEAVContainer@@XZ");
        return (this->*rv)();
    }
    inline void _onItemChanged(int a0, class ItemStack const& a1, class ItemStack const& a2){
        void (PlayerUIContainerModelBase::*rv)(int, class ItemStack const&, class ItemStack const&);
        *((void**)&rv) = dlsym("?_onItemChanged@PlayerUIContainerModelBase@@MEAAXHAEBVItemStack@@0@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStack const&>(a1), std::forward<class ItemStack const&>(a2));
    }
    inline void containerContentChanged(int a0){
        void (PlayerUIContainerModelBase::*rv)(int);
        *((void**)&rv) = dlsym("?containerContentChanged@PlayerUIContainerModelBase@@UEAAXH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline class ContainerWeakRef getContainerWeakRef() const{
        class ContainerWeakRef (PlayerUIContainerModelBase::*rv)() const;
        *((void**)&rv) = dlsym("?getContainerWeakRef@PlayerUIContainerModelBase@@UEBA?AVContainerWeakRef@@XZ");
        return (this->*rv)();
    }
    inline bool isValid(){
        bool (PlayerUIContainerModelBase::*rv)();
        *((void**)&rv) = dlsym("?isValid@PlayerUIContainerModelBase@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void postInit(){
        void (PlayerUIContainerModelBase::*rv)();
        *((void**)&rv) = dlsym("?postInit@PlayerUIContainerModelBase@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void releaseResources(){
        void (PlayerUIContainerModelBase::*rv)();
        *((void**)&rv) = dlsym("?releaseResources@PlayerUIContainerModelBase@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:
    MCAPI void _refreshContainer(bool);

private:
};