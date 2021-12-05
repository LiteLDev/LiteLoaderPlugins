// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ContainerModel.hpp"
#define EXTRA_INCLUDE_PART_INVENTORYCONTAINERMODEL
#include "Extra/InventoryContainerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_INVENTORYCONTAINERMODEL
class InventoryContainerModel : public ContainerModel {
#include "Extra/InventoryContainerModelAPI.hpp"
public:
    /*0*/ virtual void containerContentChanged(int);
    /*1*/ virtual ~InventoryContainerModel();
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
    inline class Container* _getContainer() const{
        class Container* (InventoryContainerModel::*rv)() const;
        *((void**)&rv) = dlsym("?_getContainer@InventoryContainerModel@@EEBAPEAVContainer@@XZ");
        return (this->*rv)();
    }
    inline int _getContainerOffset() const{
        int (InventoryContainerModel::*rv)() const;
        *((void**)&rv) = dlsym("?_getContainerOffset@InventoryContainerModel@@MEBAHXZ");
        return (this->*rv)();
    }
    inline void _onItemChanged(int a0, class ItemStack const& a1, class ItemStack const& a2){
        void (InventoryContainerModel::*rv)(int, class ItemStack const&, class ItemStack const&);
        *((void**)&rv) = dlsym("?_onItemChanged@InventoryContainerModel@@EEAAXHAEBVItemStack@@0@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStack const&>(a1), std::forward<class ItemStack const&>(a2));
    }
    inline void containerContentChanged(int a0){
        void (InventoryContainerModel::*rv)(int);
        *((void**)&rv) = dlsym("?containerContentChanged@InventoryContainerModel@@UEAAXH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline class ContainerWeakRef getContainerWeakRef() const{
        class ContainerWeakRef (InventoryContainerModel::*rv)() const;
        *((void**)&rv) = dlsym("?getContainerWeakRef@InventoryContainerModel@@UEBA?AVContainerWeakRef@@XZ");
        return (this->*rv)();
    }
    inline bool isValid(){
        bool (InventoryContainerModel::*rv)();
        *((void**)&rv) = dlsym("?isValid@InventoryContainerModel@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void postInit(){
        void (InventoryContainerModel::*rv)();
        *((void**)&rv) = dlsym("?postInit@InventoryContainerModel@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void releaseResources(){
        void (InventoryContainerModel::*rv)();
        *((void**)&rv) = dlsym("?releaseResources@InventoryContainerModel@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:
    MCAPI void _refreshSlot(int);
};