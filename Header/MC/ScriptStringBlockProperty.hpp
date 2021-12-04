// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSTRINGBLOCKPROPERTY
#include "Extra/ScriptStringBlockPropertyAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSTRINGBLOCKPROPERTY
class ScriptStringBlockProperty {
#include "Extra/ScriptStringBlockPropertyAPI.hpp"
public:
    /*0*/ virtual ~ScriptStringBlockProperty();

public:
    MCAPI class Scripting::Result<std::string> getState() const;
    MCAPI class ScriptStringBlockProperty& operator=(class ScriptStringBlockProperty&&);
    MCAPI std::vector<std::string> const& getAllValues() const;
    MCAPI std::string const& getName() const;
    MCAPI class Scripting::Result<void> setState(std::string);
};