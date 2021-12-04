// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "entt.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTBINDERITEMACTORTEMPLATE
#include "Extra/ScriptBinderItemActorTemplateAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBINDERITEMACTORTEMPLATE
class ScriptBinderItemActorTemplate {
#include "Extra/ScriptBinderItemActorTemplateAPI.hpp"
public:
    /*0*/ virtual ~ScriptBinderItemActorTemplate();
    /*1*/ virtual std::string const& getTemplateIdentifier() const;
    /*2*/ virtual void applyTemplate(class ScriptObjectBinder&) const;

public:
    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(class entt::basic_registry<enum entt::entity>&, class ItemActor const&);
};