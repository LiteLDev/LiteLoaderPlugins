// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "LevelContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART_DISPENSERCONTAINERMANAGERMODEL
#include "Extra/DispenserContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_DISPENSERCONTAINERMANAGERMODEL
class DispenserContainerManagerModel : public LevelContainerManagerModel {
#include "Extra/DispenserContainerManagerModelAPI.hpp"
public:
    /*0*/ virtual ~DispenserContainerManagerModel();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_3();
    /*5*/ virtual void setData(int, int);
    /*6*/ virtual class ContainerScreenContext _postInit();
    /*
    inline class ContainerScreenContext _postInit(){
        class ContainerScreenContext (DispenserContainerManagerModel::*rv)();
        *((void**)&rv) = dlsym("?_postInit@DispenserContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ");
        return (this->*rv)();
    }
    */

protected:

private:
};