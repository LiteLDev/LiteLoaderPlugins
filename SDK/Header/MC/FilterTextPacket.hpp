// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FilterTextPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTEXTPACKET
public:
    class FilterTextPacket& operator=(class FilterTextPacket const&) = delete;
    FilterTextPacket(class FilterTextPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~FilterTextPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~FilterTextPacket(){
         (FilterTextPacket::*rv)();
        *((void**)&rv) = dlsym("??1FilterTextPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI FilterTextPacket(std::string const&, bool);
    MCAPI FilterTextPacket();

protected:

private:

};