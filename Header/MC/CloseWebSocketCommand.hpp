// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_CLOSEWEBSOCKETCOMMAND
#include "Extra/CloseWebSocketCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_CLOSEWEBSOCKETCOMMAND
class CloseWebSocketCommand {
#include "Extra/CloseWebSocketCommandAPI.hpp"
public:
    /*0*/ virtual ~CloseWebSocketCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /*
    inline void execute(class CommandOrigin const& a0, class CommandOutput& a1) const{
        void (CloseWebSocketCommand::*rv)(class CommandOrigin const&, class CommandOutput&) const;
        *((void**)&rv) = dlsym("?execute@CloseWebSocketCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z");
        return (this->*rv)(std::forward<class CommandOrigin const&>(a0), std::forward<class CommandOutput&>(a1));
    }
    */
    MCAPI static void setup(class CommandRegistry&, class IMinecraftApp&);

protected:

private:
};