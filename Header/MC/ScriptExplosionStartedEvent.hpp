// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTEXPLOSIONSTARTEDEVENT
#include "Extra/ScriptExplosionStartedEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTEXPLOSIONSTARTEDEVENT
struct ScriptExplosionStartedEvent {
#include "Extra/ScriptExplosionStartedEventAPI.hpp"

public:
    MCAPI struct ScriptExplosionStartedEvent& operator=(struct ScriptExplosionStartedEvent const&);
    MCAPI struct ScriptExplosionStartedEvent& operator=(struct ScriptExplosionStartedEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptExplosionStartedEvent> bind(struct Scripting::Version);
};