// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_AUTOMATIONCLIENTCONNECTPACKET
#include "Extra/AutomationClientConnectPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_AUTOMATIONCLIENTCONNECTPACKET
class AutomationClientConnectPacket : public Packet {
#include "Extra/AutomationClientConnectPacketAPI.hpp"
public:
    /*0*/ virtual ~AutomationClientConnectPacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
    /*
    inline int \/*enum enum StreamReadResult*\/ _read(class ReadOnlyBinaryStream& a0){
        int \/*enum enum StreamReadResult*\/ (AutomationClientConnectPacket::*rv)(class ReadOnlyBinaryStream&);
        *((void**)&rv) = dlsym("?_read@AutomationClientConnectPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z");
        return (this->*rv)(std::forward<class ReadOnlyBinaryStream&>(a0));
    }
    inline void write(class BinaryStream& a0) const{
        void (AutomationClientConnectPacket::*rv)(class BinaryStream&) const;
        *((void**)&rv) = dlsym("?write@AutomationClientConnectPacket@@UEBAXAEAVBinaryStream@@@Z");
        return (this->*rv)(std::forward<class BinaryStream&>(a0));
    }
    inline int \/*enum enum MinecraftPacketIds*\/ getId() const{
        int \/*enum enum MinecraftPacketIds*\/ (AutomationClientConnectPacket::*rv)() const;
        *((void**)&rv) = dlsym("?getId@AutomationClientConnectPacket@@UEBA?AW4MinecraftPacketIds@@XZ");
        return (this->*rv)();
    }
    inline std::string getName() const{
        std::string (AutomationClientConnectPacket::*rv)() const;
        *((void**)&rv) = dlsym("?getName@AutomationClientConnectPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    */

protected:

private:
};