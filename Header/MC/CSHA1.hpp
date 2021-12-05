// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_CSHA1
#include "Extra/CSHA1API.hpp"
#undef EXTRA_INCLUDE_PART_CSHA1
class CSHA1 {
#include "Extra/CSHA1API.hpp"
public:
    MCAPI void Final();
    MCAPI unsigned char* GetHash() const;
    MCAPI void Reset();
    MCAPI void Update(unsigned char const*, unsigned int);

protected:

private:
    MCAPI void Transform(unsigned int*, unsigned char const*);
};