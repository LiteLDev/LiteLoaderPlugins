// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DEFINITIONTRIGGER
#include "Extra/DefinitionTriggerAPI.hpp"
#undef EXTRA_INCLUDE_PART_DEFINITIONTRIGGER
class DefinitionTrigger {
#include "Extra/DefinitionTriggerAPI.hpp"

public:
    MCAPI bool canTrigger(class RenderParams&) const;
    MCAPI bool canTrigger(class Actor const&, class VariantParameterList const&) const;
    MCAPI class DefinitionTrigger& operator=(class DefinitionTrigger&&);
    MCAPI class DefinitionTrigger& operator=(class DefinitionTrigger const&);
    MCAPI std::unique_ptr<class CompoundTag> toCompoundTag() const;

    MCAPI static class BidirectionalUnorderedMap<std::string, enum FilterSubject> TargetEnumValues;
    MCAPI static void bindType();
    MCAPI static class DefinitionTrigger fromCompoundTag(class CompoundTag const&);
};