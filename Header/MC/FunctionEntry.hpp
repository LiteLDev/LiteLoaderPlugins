// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_FUNCTIONENTRY
#include "Extra/FunctionEntryAPI.hpp"
#undef EXTRA_INCLUDE_PART_FUNCTIONENTRY
class FunctionEntry {
#include "Extra/FunctionEntryAPI.hpp"
public:
    /*0*/ virtual ~FunctionEntry();
    /*1*/ virtual void execute(class FunctionManager&, class CommandOrigin const&);
    /*
    inline void execute(class FunctionManager& a0, class CommandOrigin const& a1){
        void (FunctionEntry::*rv)(class FunctionManager&, class CommandOrigin const&);
        *((void**)&rv) = dlsym("?execute@FunctionEntry@@UEAAXAEAVFunctionManager@@AEBVCommandOrigin@@@Z");
        return (this->*rv)(std::forward<class FunctionManager&>(a0), std::forward<class CommandOrigin const&>(a1));
    }
    */
    MCAPI enum FunctionState getErrorState() const;

protected:

private:
};