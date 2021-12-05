// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "CraftHandlerBase.hpp"
#define EXTRA_INCLUDE_PART_CRAFTHANDLERMAP
#include "Extra/CraftHandlerMapAPI.hpp"
#undef EXTRA_INCLUDE_PART_CRAFTHANDLERMAP
class CraftHandlerMap : public CraftHandlerBase {
#include "Extra/CraftHandlerMapAPI.hpp"
public:
    /*0*/ virtual ~CraftHandlerMap();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void endRequestBatch();
    /*3*/ virtual int /*enum enum ItemStackNetResult*/ _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /*4*/ virtual void _postCraftRequest(bool);
    /*
    inline class Recipes const* _getLevelRecipes() const{
        class Recipes const* (CraftHandlerMap::*rv)() const;
        *((void**)&rv) = dlsym("?_getLevelRecipes@CraftHandlerMap@@EEBAPEBVRecipes@@XZ");
        return (this->*rv)();
    }
    inline int \/*enum enum ItemStackNetResult*\/ _handleCraftAction(class ItemStackRequestActionCraftBase const& a0){
        int \/*enum enum ItemStackNetResult*\/ (CraftHandlerMap::*rv)(class ItemStackRequestActionCraftBase const&);
        *((void**)&rv) = dlsym("?_handleCraftAction@CraftHandlerMap@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z");
        return (this->*rv)(std::forward<class ItemStackRequestActionCraftBase const&>(a0));
    }
    */

protected:

private:
};