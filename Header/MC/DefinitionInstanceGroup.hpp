// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_DEFINITIONINSTANCEGROUP
#include "Extra/DefinitionInstanceGroupAPI.hpp"
#undef EXTRA_INCLUDE_PART_DEFINITIONINSTANCEGROUP
class DefinitionInstanceGroup {
#include "Extra/DefinitionInstanceGroupAPI.hpp"
public:
    MCAPI void add(class std::shared_ptr<class IDefinitionInstance> const&);
    MCAPI void clear();
    MCAPI void combine(class DefinitionInstanceGroup const&);
    MCAPI bool contains(class DefinitionInstanceGroup const&) const;
    MCAPI class DefinitionInstanceGroup& operator=(class DefinitionInstanceGroup&&);
    MCAPI class DefinitionInstanceGroup& operator=(class DefinitionInstanceGroup const&);
    MCAPI bool overlaps(class DefinitionInstanceGroup const&) const;
    MCAPI void remove(class std::shared_ptr<class IDefinitionInstance> const&);
    MCAPI void subtract(class DefinitionInstanceGroup const&);

protected:

private:
    MCAPI std::string const& _getDefinitionNameFromTypeId(unsigned short const&) const;
};