// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "CraftHandlerBase.hpp"
#define EXTRA_INCLUDE_PART_CRAFTHANDLERLOOM
#include "Extra/CraftHandlerLoomAPI.hpp"
#undef EXTRA_INCLUDE_PART_CRAFTHANDLERLOOM
class CraftHandlerLoom : public CraftHandlerBase {
#include "Extra/CraftHandlerLoomAPI.hpp"
public:
    /*0*/ virtual ~CraftHandlerLoom();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void endRequestBatch();
    /*3*/ virtual int /*enum enum ItemStackNetResult*/ _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /*4*/ virtual void _postCraftRequest(bool);
    /*
    inline int \/*enum enum ItemStackNetResult*\/ _handleCraftAction(class ItemStackRequestActionCraftBase const& a0){
        int \/*enum enum ItemStackNetResult*\/ (CraftHandlerLoom::*rv)(class ItemStackRequestActionCraftBase const&);
        *((void**)&rv) = dlsym("?_handleCraftAction@CraftHandlerLoom@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z");
        return (this->*rv)(std::forward<class ItemStackRequestActionCraftBase const&>(a0));
    }
    */

protected:

private:
};