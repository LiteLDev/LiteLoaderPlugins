// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_GROUNDOFFSETDEFINITION
#include "Extra/GroundOffsetDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_GROUNDOFFSETDEFINITION
struct GroundOffsetDefinition {
#include "Extra/GroundOffsetDefinitionAPI.hpp"
public:
    MCAPI void initialize(class EntityContext&);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct GroundOffsetDefinition> >&);

protected:

private:
};