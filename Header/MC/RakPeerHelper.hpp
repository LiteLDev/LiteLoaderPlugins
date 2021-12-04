// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "RakNet.hpp"
#define EXTRA_INCLUDE_PART_RAKPEERHELPER
#include "Extra/RakPeerHelperAPI.hpp"
#undef EXTRA_INCLUDE_PART_RAKPEERHELPER
class RakPeerHelper {
#include "Extra/RakPeerHelperAPI.hpp"

public:
    MCAPI enum RakNet::StartupResult peerStartup(class RakNet::RakPeerInterface*, struct ConnectionDefinition const&);

private:
    MCAPI void LogIPSupport();
    MCAPI void _resetToIPv6Only(class gsl::span<struct RakNet::SocketDescriptor, 2>, int&);
    MCAPI enum RakNet::StartupResult _startupInternal(class gsl::not_null<class RakNet::RakPeerInterface*>, struct ConnectionDefinition const&, struct RakNet::SocketDescriptor*, int&, int);
};