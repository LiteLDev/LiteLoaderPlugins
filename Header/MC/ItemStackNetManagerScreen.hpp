// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ITEMSTACKNETMANAGERSCREEN
#include "Extra/ItemStackNetManagerScreenAPI.hpp"
#undef EXTRA_INCLUDE_PART_ITEMSTACKNETMANAGERSCREEN
class ItemStackNetManagerScreen {
#include "Extra/ItemStackNetManagerScreenAPI.hpp"
public:
    /*0*/ virtual ~ItemStackNetManagerScreen();

public:
    MCAPI class EntityContext& getEntity();
    MCAPI class EntityContext const& getEntity() const;
};