// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ITEMUSEMETHODMAP
#include "Extra/ItemUseMethodMapAPI.hpp"
#undef EXTRA_INCLUDE_PART_ITEMUSEMETHODMAP
class ItemUseMethodMap {
#include "Extra/ItemUseMethodMapAPI.hpp"

public:
    MCAPI static std::string const& getItemUseMethodName(enum ItemUseMethod);

private:
    MCAPI static class BidirectionalUnorderedMap<enum ItemUseMethod, std::string> const mMap;
};