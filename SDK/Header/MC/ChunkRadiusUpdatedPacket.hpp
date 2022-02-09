// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChunkRadiusUpdatedPacket : public Packet {
public:
    int chunkRaduis;

    inline std::string toDebugString() {
        return fmt::format("{}: radius: {}",
            __super::toDebugString(), chunkRaduis);
    }
#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKRADIUSUPDATEDPACKET
public:
    class ChunkRadiusUpdatedPacket& operator=(class ChunkRadiusUpdatedPacket const&) = delete;
    ChunkRadiusUpdatedPacket(class ChunkRadiusUpdatedPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~ChunkRadiusUpdatedPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~ChunkRadiusUpdatedPacket(){
         (ChunkRadiusUpdatedPacket::*rv)();
        *((void**)&rv) = dlsym("??1ChunkRadiusUpdatedPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ChunkRadiusUpdatedPacket(int);
    MCAPI ChunkRadiusUpdatedPacket();

protected:

private:

};