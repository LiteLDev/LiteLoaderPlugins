// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "NavigationScriptActorComponent.hpp"
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTNAVIGATIONHOVERCOMPONENT
#include "Extra/ScriptNavigationHoverComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTNAVIGATIONHOVERCOMPONENT
class ScriptNavigationHoverComponent : public NavigationScriptActorComponent {
#include "Extra/ScriptNavigationHoverComponentAPI.hpp"
public:
    /*0*/ virtual ~ScriptNavigationHoverComponent();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptNavigationHoverComponent> bind(struct Scripting::Version);

protected:

private:
};