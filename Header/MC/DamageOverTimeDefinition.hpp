// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_DAMAGEOVERTIMEDEFINITION
#include "Extra/DamageOverTimeDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_DAMAGEOVERTIMEDEFINITION
class DamageOverTimeDefinition {
#include "Extra/DamageOverTimeDefinitionAPI.hpp"
public:
    MCAPI void initialize(class EntityContext&, class DamageOverTimeComponent&);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DamageOverTimeDefinition> >&);

protected:

private:
};