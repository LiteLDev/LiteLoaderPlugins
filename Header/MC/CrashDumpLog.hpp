// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_CRASHDUMPLOG
#include "Extra/CrashDumpLogAPI.hpp"
#undef EXTRA_INCLUDE_PART_CRASHDUMPLOG
class CrashDumpLog {
#include "Extra/CrashDumpLogAPI.hpp"
public:
    MCAPI static void logEvent(struct CrashDumpEventData const&);
    MCAPI static void logFrame(struct CrashDumpFrameData const&);
    MCAPI static void logKeyValue(struct CrashDumpKeyValueData const&);
    MCAPI static void setAssertMessage(char const*, int, char const*, char const*);
    MCAPI static bool setDeviceSessionID(std::string const&);
    MCAPI static void setGameVersion(char const*);
    MCAPI static void setPlatform(char const*);
    MCAPI static void setTotalMemory(unsigned __int64);
    MCAPI static bool startCrashDumpLogThread();
    MCAPI static void stopCrashDumpLogThread();

protected:

private:
    MCAPI static void crashDumpLogThreadRoutine();
    MCAPI static class std::mutex mAssertDataMutex;
    MCAPI static std::unique_ptr<class std::thread> mCrashDumpLog_logThread;
    MCAPI static class std::mutex mCrashDumpThreadMutex;
    MCAPI static class std::condition_variable mCrashDumpThreadMutexCV;
    MCAPI static class std::mutex mEventDataMutex;
    MCAPI static class std::mutex mFrameDataMutex;
    MCAPI static class std::mutex mGameplayDataMutex;
    MCAPI static class std::mutex mGlobalDataMutex;
    MCAPI static bool mIsThreadRunning;
    MCAPI static class std::mutex mKeyValueDataMutex;
    MCAPI static class std::mutex mPlayerDataMutex;
    MCAPI static class std::mutex mRenderDataMutex;
};