// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_DYEABLECOMPONENT
#include "Extra/DyeableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_DYEABLECOMPONENT
class DyeableComponent {
#include "Extra/DyeableComponentAPI.hpp"
public:
    MCAPI void appendFormattedHovertext(class ItemStackBase const&, std::string&, bool) const;
    MCAPI void clearColor(class ItemStackBase&) const;
    MCAPI bool hasCustomColor(class ItemStackBase const&) const;
    MCAPI void setColor(class ItemStackBase&, class mce::Color const&) const;
    MCAPI static class mce::Color DEFAULT_HORSE_LEATHER_COLOR;
    MCAPI static class mce::Color DEFAULT_LEATHER_COLOR;
    MCAPI static void ResetDefaultLeatherColor();

protected:

private:
};