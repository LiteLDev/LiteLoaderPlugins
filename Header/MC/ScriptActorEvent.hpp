// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTACTOREVENT
#include "Extra/ScriptActorEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTACTOREVENT
struct ScriptActorEvent {
#include "Extra/ScriptActorEventAPI.hpp"
public:
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptActorEvent> bind(struct Scripting::Version);

protected:

private:
};