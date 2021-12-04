// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_SETSCOREPACKET
#include "Extra/SetScorePacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_SETSCOREPACKET
class SetScorePacket : public Packet {
#include "Extra/SetScorePacketAPI.hpp"
public:
    /*0*/ virtual ~SetScorePacket();
    /*1*/ virtual int /*enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*5*/ virtual bool disallowBatching() const;
    /*6*/ virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI static class SetScorePacket change(struct ScoreboardId const&, class Objective const&);
    MCAPI static class SetScorePacket change(std::vector<struct ScorePacketInfo>);
    MCAPI static class SetScorePacket remove(struct ScoreboardId const&, class Objective const&);
};