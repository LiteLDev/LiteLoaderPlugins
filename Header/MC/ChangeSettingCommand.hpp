// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CHANGESETTINGCOMMAND
#include "Extra/ChangeSettingCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_CHANGESETTINGCOMMAND
class ChangeSettingCommand {
#include "Extra/ChangeSettingCommandAPI.hpp"
public:
    /*0*/ virtual ~ChangeSettingCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&);
};