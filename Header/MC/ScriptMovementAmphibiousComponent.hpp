// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ScriptActorComponent.hpp"
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTMOVEMENTAMPHIBIOUSCOMPONENT
#include "Extra/ScriptMovementAmphibiousComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTMOVEMENTAMPHIBIOUSCOMPONENT
class ScriptMovementAmphibiousComponent : public ScriptActorComponent {
#include "Extra/ScriptMovementAmphibiousComponentAPI.hpp"
public:
    /*0*/ virtual ~ScriptMovementAmphibiousComponent();

    MCAPI class Scripting::Result<float> getMaxTurn() const;
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptMovementAmphibiousComponent> bind(struct Scripting::Version);

protected:

private:
};