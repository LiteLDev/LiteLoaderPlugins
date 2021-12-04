// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSTRENGTHCOMPONENTFACTORY
#include "Extra/ScriptStrengthComponentFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSTRENGTHCOMPONENTFACTORY
class ScriptStrengthComponentFactory {
#include "Extra/ScriptStrengthComponentFactoryAPI.hpp"
public:
    /*0*/ virtual ~ScriptStrengthComponentFactory();
    /*1*/ virtual class Scripting::StrongTypedObjectHandle<class ScriptActorComponent> createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);
    /*2*/ virtual bool hasComponent(class WeakEntityRef) const;
};