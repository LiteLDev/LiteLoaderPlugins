// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_SWIMWANDERDEFINITION
#include "Extra/SwimWanderDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_SWIMWANDERDEFINITION
class SwimWanderDefinition {
#include "Extra/SwimWanderDefinitionAPI.hpp"
public:
    /*0*/ virtual ~SwimWanderDefinition();

public:
    MCAPI static void buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwimWanderDefinition>>&);
};