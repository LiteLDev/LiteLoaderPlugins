// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART_MATERIALREDUCERCONTAINERMANAGERMODEL
#include "Extra/MaterialReducerContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_MATERIALREDUCERCONTAINERMANAGERMODEL
class MaterialReducerContainerManagerModel : public ContainerManagerModel {
#include "Extra/MaterialReducerContainerManagerModelAPI.hpp"
public:
    /*0*/ virtual ~MaterialReducerContainerManagerModel();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_3();
    /*5*/ virtual std::vector<class ItemStack> getItemCopies() const;
    /*6*/ virtual void setSlot(int, class ItemStack const&, bool);
    /*7*/ virtual class ItemStack const& getSlot(int) const;
    /*8*/ virtual void setData(int, int);
    /*9*/ virtual void broadcastChanges();
    /*10*/ virtual bool isValid(float);
    /*11*/ virtual class ContainerScreenContext _postInit();
    /*
    inline void setData(int a0, int a1){
        void (MaterialReducerContainerManagerModel::*rv)(int, int);
        *((void**)&rv) = dlsym("?setData@MaterialReducerContainerManagerModel@@UEAAXHH@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1));
    }
    inline void broadcastChanges(){
        void (MaterialReducerContainerManagerModel::*rv)();
        *((void**)&rv) = dlsym("?broadcastChanges@MaterialReducerContainerManagerModel@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void setSlot(int a0, class ItemStack const& a1, bool a2){
        void (MaterialReducerContainerManagerModel::*rv)(int, class ItemStack const&, bool);
        *((void**)&rv) = dlsym("?setSlot@MaterialReducerContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStack const&>(a1), std::forward<bool>(a2));
    }
    inline class ContainerScreenContext _postInit(){
        class ContainerScreenContext (MaterialReducerContainerManagerModel::*rv)();
        *((void**)&rv) = dlsym("?_postInit@MaterialReducerContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ");
        return (this->*rv)();
    }
    inline std::vector<class ItemStack> getItemCopies() const{
        std::vector<class ItemStack> (MaterialReducerContainerManagerModel::*rv)() const;
        *((void**)&rv) = dlsym("?getItemCopies@MaterialReducerContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline class ItemStack const& getSlot(int a0) const{
        class ItemStack const& (MaterialReducerContainerManagerModel::*rv)(int) const;
        *((void**)&rv) = dlsym("?getSlot@MaterialReducerContainerManagerModel@@UEBAAEBVItemStack@@H@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline bool isValid(float a0){
        bool (MaterialReducerContainerManagerModel::*rv)(float);
        *((void**)&rv) = dlsym("?isValid@MaterialReducerContainerManagerModel@@UEAA_NM@Z");
        return (this->*rv)(std::forward<float>(a0));
    }
    */

protected:

private:
};