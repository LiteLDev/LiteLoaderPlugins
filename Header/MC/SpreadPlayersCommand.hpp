// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SPREADPLAYERSCOMMAND
#include "Extra/SpreadPlayersCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_SPREADPLAYERSCOMMAND
class SpreadPlayersCommand {
#include "Extra/SpreadPlayersCommandAPI.hpp"
public:
    /*0*/ virtual ~SpreadPlayersCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&);

private:
    MCAPI static std::vector<class Vec2> createInitialPositions(class Random&, int, class Vec2 const&, class Vec2 const&);
    MCAPI static float setPlayerPositions(class CommandSelectorResults<class Actor>&, class BlockSource&, std::vector<class Vec2>&);
    MCAPI static bool spreadEntities(class CommandOutput&, class CommandSelectorResults<class Actor>&, class BlockSource&, class Vec2 const&, float, float);
    MCAPI static int spreadPositions(class CommandOutput&, class Random&, class BlockSource&, class Vec2 const&, float, class Vec2 const&, class Vec2 const&, std::vector<class Vec2>&);
};