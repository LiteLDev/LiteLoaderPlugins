// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PACKSETTINGSERROR
#include "Extra/PackSettingsErrorAPI.hpp"
#undef EXTRA_INCLUDE_PART_PACKSETTINGSERROR
class PackSettingsError {
#include "Extra/PackSettingsErrorAPI.hpp"
public:
    /*0*/ virtual ~PackSettingsError();
    /*1*/ virtual std::string getLocErrorMessage() const;
    /*2*/ virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const& getLocErrorMessageMap() const;
    /*3*/ virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const& getEventErrorMessageMap() const;
};