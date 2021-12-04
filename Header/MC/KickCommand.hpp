// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_KICKCOMMAND
#include "Extra/KickCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_KICKCOMMAND
class KickCommand {
#include "Extra/KickCommandAPI.hpp"
public:
    /*0*/ virtual ~KickCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&);

private:
    MCAPI class Player const* _findTarget(class CommandOrigin const&, class CommandOutput&, class Level*, std::string const&, std::string const&, std::string const&) const;
    MCAPI void _kickPlayer(class CommandOrigin const&, class CommandOutput&, class Player const&, class Level*, std::string const&, std::string const&) const;
    MCAPI class Player const* _loopPlayers(class CommandOrigin const&, class CommandOutput&, class Level*, std::string const&, std::string const&, class std::function<bool(class Player const*)>) const;
};