// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BEDROCKITEMS
#include "Extra/BedrockItemsAPI.hpp"
#undef EXTRA_INCLUDE_PART_BEDROCKITEMS
class BedrockItems {
#include "Extra/BedrockItemsAPI.hpp"

public:
    MCAPI static class WeakPtr<class Item> mAir;
    MCAPI static void registerItems();
    MCAPI static void unregisterItems();
};