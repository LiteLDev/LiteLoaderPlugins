// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_VARIANTDEFINITION
#include "Extra/VariantDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_VARIANTDEFINITION
struct VariantDefinition {
#include "Extra/VariantDefinitionAPI.hpp"

public:
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct VariantDefinition>>&);
};