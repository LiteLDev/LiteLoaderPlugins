// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SERIALIZERCONTEXT
#include "Extra/SerializerContextAPI.hpp"
#undef EXTRA_INCLUDE_PART_SERIALIZERCONTEXT
class SerializerContext {
#include "Extra/SerializerContextAPI.hpp"
public:
    MCAPI void clear();
    MCAPI void error(std::string const&);
    MCAPI void popContext();
    MCAPI void pushContext(std::string const&);

protected:

private:
};