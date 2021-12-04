// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "entt.hpp"
#define EXTRA_INCLUDE_PART_BASICSAVER
#include "Extra/BasicSaverAPI.hpp"
#undef EXTRA_INCLUDE_PART_BASICSAVER
class BasicSaver {
#include "Extra/BasicSaverAPI.hpp"

public:
    MCAPI bool beginArray(unsigned __int64);
    MCAPI bool endArray();
    MCAPI void error(std::string const&);
    MCAPI class BasicSaver& operator=(class BasicSaver const&);
    MCAPI bool serializeFloat(float);
    MCAPI bool serializeS32(int);
    MCAPI bool serializeString(std::string const&);

private:
    MCAPI bool serialize(class entt::meta_any);
    MCAPI bool serialize(class entt::meta_any, struct SerializerTraits const&);
    MCAPI bool serializeAssociativeContainer(class entt::meta_associative_container, struct SerializerTraits const&);
    MCAPI bool serializeBasicType(class entt::meta_any const&);
    MCAPI bool serializeClass(class entt::meta_any const&, struct SerializerTraits const&);
    MCAPI bool serializeEnum(class entt::meta_any const&, struct SerializerTraits const&);
    MCAPI bool serializeObject(class entt::meta_any);
};