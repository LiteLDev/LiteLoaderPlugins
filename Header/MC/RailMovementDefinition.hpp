// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_RAILMOVEMENTDEFINITION
#include "Extra/RailMovementDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_RAILMOVEMENTDEFINITION
class RailMovementDefinition {
#include "Extra/RailMovementDefinitionAPI.hpp"

public:
    MCAPI void initialize(class EntityContext&, class RailMovementComponent&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RailMovementDefinition>>&);
};