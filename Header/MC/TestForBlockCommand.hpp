// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TESTFORBLOCKCOMMAND
#include "Extra/TestForBlockCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_TESTFORBLOCKCOMMAND
class TestForBlockCommand {
#include "Extra/TestForBlockCommandAPI.hpp"
public:
    /*0*/ virtual ~TestForBlockCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&);
};