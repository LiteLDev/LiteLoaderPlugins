// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_CALLBACKTOKEN
#include "Extra/CallbackTokenAPI.hpp"
#undef EXTRA_INCLUDE_PART_CALLBACKTOKEN
class CallbackToken {
#include "Extra/CallbackTokenAPI.hpp"
public:
    MCAPI void cancelCallback();
    MCAPI class CallbackToken& operator=(class CallbackToken&&);
    MCAPI void release();

protected:

private:
};