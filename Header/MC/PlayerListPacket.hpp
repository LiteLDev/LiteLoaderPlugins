// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PLAYERLISTPACKET
#include "Extra/PlayerListPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_PLAYERLISTPACKET
class PlayerListPacket {
#include "Extra/PlayerListPacketAPI.hpp"
public:
    /*0*/ virtual ~PlayerListPacket();
    /*1*/ virtual int /*enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream&);
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI void emplace(class PlayerListEntry&&);
};