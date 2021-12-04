// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTOBJECT
#include "Extra/ScriptObjectAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTOBJECT
class ScriptObject {
#include "Extra/ScriptObjectAPI.hpp"
public:
    /*0*/ virtual ~ScriptObject();
    /*1*/ virtual struct Scripting::Error _functionError(std::string const&) const;
    /*2*/ virtual struct Scripting::Error _getPropertyError(std::string const&) const;
    /*3*/ virtual struct Scripting::Error _setPropertyError(std::string const&) const;
};