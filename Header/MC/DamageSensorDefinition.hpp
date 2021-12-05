// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_DAMAGESENSORDEFINITION
#include "Extra/DamageSensorDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_DAMAGESENSORDEFINITION
class DamageSensorDefinition {
#include "Extra/DamageSensorDefinitionAPI.hpp"
public:
    MCAPI void addDamageSensorTrigger(struct DamageSensorTrigger const&);
    MCAPI void deserializeData(class Json::Value&, class SemVersion const&);
    MCAPI void initialize(class EntityContext&, class DamageSensorComponent&) const;
    MCAPI void serializeData(class Json::Value&) const;
    MCAPI void uninitialize(class EntityContext&, class DamageSensorComponent&) const;
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DamageSensorDefinition> >&);

protected:

private:
    MCAPI void deserializeTrigger(class Json::Value&, class SemVersion const&);
};