// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NetworkPacketEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKPACKETEVENTLISTENER
public:
    class NetworkPacketEventListener& operator=(class NetworkPacketEventListener const&) = delete;
    NetworkPacketEventListener(class NetworkPacketEventListener const&) = delete;
    NetworkPacketEventListener() = delete;
#endif

public:
    /*0*/ virtual ~NetworkPacketEventListener();
    /*
    inline enum EventResult onPacketReceivedFrom(class PacketHeader const& a0, class Packet const& a1){
        enum EventResult (NetworkPacketEventListener::*rv)(class PacketHeader const&, class Packet const&);
        *((void**)&rv) = dlsym("?onPacketReceivedFrom@NetworkPacketEventListener@@UEAA?AW4EventResult@@AEBVPacketHeader@@AEBVPacket@@@Z");
        return (this->*rv)(std::forward<class PacketHeader const&>(a0), std::forward<class Packet const&>(a1));
    }
    */

protected:

private:

};