// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSEAT
#include "Extra/ScriptSeatAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSEAT
class ScriptSeat {
#include "Extra/ScriptSeatAPI.hpp"
public:
    MCAPI static class Scripting::ClassBindingBuilder<struct SeatDescription> bind(struct Scripting::Version);

protected:

private:
};