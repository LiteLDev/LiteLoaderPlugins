// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SERIALIZEDSKIN
#include "Extra/SerializedSkinAPI.hpp"
#undef EXTRA_INCLUDE_PART_SERIALIZEDSKIN
class SerializedSkin {
#include "Extra/SerializedSkinAPI.hpp"
public:
    MCAPI std::string const& getName() const;
    MCAPI bool isTrustedSkin() const;
    MCAPI class SerializedSkin& operator=(class SerializedSkin const&);
    MCAPI bool read(class ReadOnlyBinaryStream&);
    MCAPI void setIsTrustedSkin(bool);
    MCAPI void updateGeometryName();
    MCAPI void write(class BinaryStream&) const;

protected:

private:
};