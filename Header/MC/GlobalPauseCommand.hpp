// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_GLOBALPAUSECOMMAND
#include "Extra/GlobalPauseCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_GLOBALPAUSECOMMAND
class GlobalPauseCommand {
#include "Extra/GlobalPauseCommandAPI.hpp"
public:
    /*0*/ virtual ~GlobalPauseCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /*
    inline void execute(class CommandOrigin const& a0, class CommandOutput& a1) const{
        void (GlobalPauseCommand::*rv)(class CommandOrigin const&, class CommandOutput&) const;
        *((void**)&rv) = dlsym("?execute@GlobalPauseCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z");
        return (this->*rv)(std::forward<class CommandOrigin const&>(a0), std::forward<class CommandOutput&>(a1));
    }
    */

protected:

private:
};