// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "CraftHandlerBase.hpp"
#define EXTRA_INCLUDE_PART_CRAFTHANDLERTRADE
#include "Extra/CraftHandlerTradeAPI.hpp"
#undef EXTRA_INCLUDE_PART_CRAFTHANDLERTRADE
class CraftHandlerTrade : public CraftHandlerBase {
#include "Extra/CraftHandlerTradeAPI.hpp"
public:
    /*0*/ virtual ~CraftHandlerTrade();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void endRequestBatch();
    /*3*/ virtual int /*enum enum ItemStackNetResult*/ _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /*4*/ virtual void _postCraftRequest(bool);
    /*
    inline int \/*enum enum ItemStackNetResult*\/ _handleCraftAction(class ItemStackRequestActionCraftBase const& a0){
        int \/*enum enum ItemStackNetResult*\/ (CraftHandlerTrade::*rv)(class ItemStackRequestActionCraftBase const&);
        *((void**)&rv) = dlsym("?_handleCraftAction@CraftHandlerTrade@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z");
        return (this->*rv)(std::forward<class ItemStackRequestActionCraftBase const&>(a0));
    }
    */

protected:

private:
};