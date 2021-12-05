// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_INCOMINGDATAHELPERS
#include "Extra/IncomingDataHelpersAPI.hpp"
#undef EXTRA_INCLUDE_PART_INCOMINGDATAHELPERS
namespace IncomingDataHelpers {
#include "Extra/IncomingDataHelpersAPI.hpp"
    MCAPI void clearIncomingCachedData(unsigned __int64);
    MCAPI extern class std::recursive_mutex mDataMutex;
    MCAPI extern class std::unordered_map<unsigned __int64, bool, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, bool> > > mIsDataReady;
    MCAPI extern class std::unordered_map<unsigned __int64, std::string, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, std::string > > > mPartialDataBuffers;
    MCAPI extern class std::unordered_map<unsigned __int64, class std::queue<std::string, std::deque<std::string> >, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, class std::queue<std::string, std::deque<std::string> > > > > mReadyDataBuffers;
};