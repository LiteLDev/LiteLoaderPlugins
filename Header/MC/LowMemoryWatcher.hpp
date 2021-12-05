// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_LOWMEMORYWATCHER
#include "Extra/LowMemoryWatcherAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOWMEMORYWATCHER
class LowMemoryWatcher {
#include "Extra/LowMemoryWatcherAPI.hpp"
public:

protected:

private:
    MCAPI static bool mPlatformToldUsLowMemory;
    MCAPI static std::list<class std::vector<char, class std::allocator<char> >> mPleaseLeakMemory;
    MCAPI static class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> > > mTimeToResetWarning;
};