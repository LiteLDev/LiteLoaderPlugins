// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ENTITYSET
#include "Extra/EntitySetAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENTITYSET
class EntitySet {
#include "Extra/EntitySetAPI.hpp"

public:
    MCAPI bool add(class EntityContext const&);
    MCAPI class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned __int64 const, class WeakEntityRef>>>> erase(class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned __int64 const, class WeakEntityRef>>>>);
    MCAPI class EntitySet& operator=(class EntitySet&&);
};