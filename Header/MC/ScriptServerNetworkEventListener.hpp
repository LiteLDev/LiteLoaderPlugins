// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SCRIPTSERVERNETWORKEVENTLISTENER
#include "Extra/ScriptServerNetworkEventListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERNETWORKEVENTLISTENER
class ScriptServerNetworkEventListener {
#include "Extra/ScriptServerNetworkEventListenerAPI.hpp"
public:
    /*0*/ virtual ~ScriptServerNetworkEventListener();
    /*1*/ virtual int /*enum enum EventResult*/ onChat(struct ChatEvent const&);
    /*
    inline int \/*enum enum EventResult*\/ onChat(struct ChatEvent const& a0){
        int \/*enum enum EventResult*\/ (ScriptServerNetworkEventListener::*rv)(struct ChatEvent const&);
        *((void**)&rv) = dlsym("?onChat@ScriptServerNetworkEventListener@@UEAA?AW4EventResult@@AEBUChatEvent@@@Z");
        return (this->*rv)(std::forward<struct ChatEvent const&>(a0));
    }
    */

protected:

private:
};