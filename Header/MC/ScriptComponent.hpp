// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ScriptObject.hpp"
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTCOMPONENT
#include "Extra/ScriptComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTCOMPONENT
class ScriptComponent : public ScriptObject {
#include "Extra/ScriptComponentAPI.hpp"
public:
    /*0*/ virtual ~ScriptComponent();

    MCAPI std::string const& getId() const;
    MCAPI class ScriptComponent& operator=(class ScriptComponent const&);

protected:

private:
};