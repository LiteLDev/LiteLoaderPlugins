// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_SITTABLEDEFINITION
#include "Extra/SittableDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_SITTABLEDEFINITION
class SittableDefinition {
#include "Extra/SittableDefinitionAPI.hpp"

public:
    MCAPI void uninitialize(class EntityContext&, class SitComponent&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SittableDefinition>>&);
};