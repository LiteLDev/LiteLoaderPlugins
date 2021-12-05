// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_DENYLIST
#include "Extra/DenyListAPI.hpp"
#undef EXTRA_INCLUDE_PART_DENYLIST
class DenyList {
#include "Extra/DenyListAPI.hpp"
public:
    MCAPI void addEntry(struct DenyList::Entry const&);
    MCAPI enum DenyList::Duration getDuration(struct DenyList::Entry const&) const;
    MCAPI std::string const& getMessage(struct DenyList::Entry const&) const;
    MCAPI bool isBlocked(struct DenyList::Entry const&) const;
    MCAPI void removeEntry(struct DenyList::Entry const&);

protected:

private:
    MCAPI bool isBlocked(struct DenyList::Entry const&, class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<struct DenyList::Entry> > >&) const;
};