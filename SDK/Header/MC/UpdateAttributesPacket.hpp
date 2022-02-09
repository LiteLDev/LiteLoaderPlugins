// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class UpdateAttributesPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEATTRIBUTESPACKET
public:
    class UpdateAttributesPacket& operator=(class UpdateAttributesPacket const&) = delete;
    UpdateAttributesPacket(class UpdateAttributesPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~UpdateAttributesPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~UpdateAttributesPacket(){
         (UpdateAttributesPacket::*rv)();
        *((void**)&rv) = dlsym("??1UpdateAttributesPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI UpdateAttributesPacket(class Actor const&, std::vector<class AttributeInstanceHandle> const&);
    MCAPI UpdateAttributesPacket();

protected:

private:

};