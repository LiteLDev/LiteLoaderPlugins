// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ATTRIBUTEINSTANCEHANDLE
#include "Extra/AttributeInstanceHandleAPI.hpp"
#undef EXTRA_INCLUDE_PART_ATTRIBUTEINSTANCEHANDLE
class AttributeInstanceHandle {
#include "Extra/AttributeInstanceHandleAPI.hpp"

public:
    MCAPI class AttributeInstance const& getInstance() const;
    MCAPI class AttributeInstance* getMutableInstance() const;
};