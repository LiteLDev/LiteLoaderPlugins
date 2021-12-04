// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ROLECHECKER
#include "Extra/RoleCheckerAPI.hpp"
#undef EXTRA_INCLUDE_PART_ROLECHECKER
class RoleChecker {
#include "Extra/RoleCheckerAPI.hpp"

public:
    MCAPI void checkRole(std::string const&, class std::function<void(enum ADRole, std::string const&, std::string const&)>);
    MCAPI bool lookupInProgress() const;
};