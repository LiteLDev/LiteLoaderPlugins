// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class EcsEventDispatcher {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ECSEVENTDISPATCHER
public:
    class EcsEventDispatcher& operator=(class EcsEventDispatcher const&) = delete;
    EcsEventDispatcher(class EcsEventDispatcher const&) = delete;
    EcsEventDispatcher() = delete;
#endif

public:
    MCAPI void update();

protected:

private:

};