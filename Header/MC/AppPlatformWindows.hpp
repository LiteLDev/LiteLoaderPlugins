// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_APPPLATFORMWINDOWS
#include "Extra/AppPlatformWindowsAPI.hpp"
#undef EXTRA_INCLUDE_PART_APPPLATFORMWINDOWS
class AppPlatformWindows {
#include "Extra/AppPlatformWindowsAPI.hpp"
public:    /*
    inline bool getPlatformTTSExists() const{
        bool (AppPlatformWindows::*rv)() const;
        *((void**)&rv) = dlsym("?getPlatformTTSExists@AppPlatformWindows@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canAppSelfTerminate() const{
        bool (AppPlatformWindows::*rv)() const;
        *((void**)&rv) = dlsym("?canAppSelfTerminate@AppPlatformWindows@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool allowContentLogWriteToDisk(){
        bool (AppPlatformWindows::*rv)();
        *((void**)&rv) = dlsym("?allowContentLogWriteToDisk@AppPlatformWindows@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline class Core::PathBuffer<std::string > copyImportFileToTempFolder(class Core::Path const& a0){
        class Core::PathBuffer<std::string > (AppPlatformWindows::*rv)(class Core::Path const&);
        *((void**)&rv) = dlsym("?copyImportFileToTempFolder@AppPlatformWindows@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z");
        return (this->*rv)(std::forward<class Core::Path const&>(a0));
    }
    inline unsigned __int64 calculateAvailableDiskFreeSpace(class Core::Path const& a0){
        unsigned __int64 (AppPlatformWindows::*rv)(class Core::Path const&);
        *((void**)&rv) = dlsym("?calculateAvailableDiskFreeSpace@AppPlatformWindows@@UEAA_KAEBVPath@Core@@@Z");
        return (this->*rv)(std::forward<class Core::Path const&>(a0));
    }
    inline class Core::PathBuffer<std::string > getCurrentStoragePath() const{
        class Core::PathBuffer<std::string > (AppPlatformWindows::*rv)() const;
        *((void**)&rv) = dlsym("?getCurrentStoragePath@AppPlatformWindows@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ");
        return (this->*rv)();
    }
    inline class Core::PathBuffer<std::string > getExternalStoragePath() const{
        class Core::PathBuffer<std::string > (AppPlatformWindows::*rv)() const;
        *((void**)&rv) = dlsym("?getExternalStoragePath@AppPlatformWindows@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ");
        return (this->*rv)();
    }
    inline unsigned __int64 getHighPerformanceThreadsCount() const{
        unsigned __int64 (AppPlatformWindows::*rv)() const;
        *((void**)&rv) = dlsym("?getHighPerformanceThreadsCount@AppPlatformWindows@@UEBA_KXZ");
        return (this->*rv)();
    }
    inline class Core::PathBuffer<std::string > getInternalStoragePath() const{
        class Core::PathBuffer<std::string > (AppPlatformWindows::*rv)() const;
        *((void**)&rv) = dlsym("?getInternalStoragePath@AppPlatformWindows@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ");
        return (this->*rv)();
    }
    inline class Core::PathBuffer<std::string > getPackagedShaderCachePath(){
        class Core::PathBuffer<std::string > (AppPlatformWindows::*rv)();
        *((void**)&rv) = dlsym("?getPackagedShaderCachePath@AppPlatformWindows@@MEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ");
        return (this->*rv)();
    }
    inline bool getPlatformTTSEnabled() const{
        bool (AppPlatformWindows::*rv)() const;
        *((void**)&rv) = dlsym("?getPlatformTTSEnabled@AppPlatformWindows@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline class Core::PathBuffer<std::string > getPlatformTempPath() const{
        class Core::PathBuffer<std::string > (AppPlatformWindows::*rv)() const;
        *((void**)&rv) = dlsym("?getPlatformTempPath@AppPlatformWindows@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ");
        return (this->*rv)();
    }
    inline unsigned __int64 getTotalHardwareThreadsCount() const{
        unsigned __int64 (AppPlatformWindows::*rv)() const;
        *((void**)&rv) = dlsym("?getTotalHardwareThreadsCount@AppPlatformWindows@@UEBA_KXZ");
        return (this->*rv)();
    }
    inline class Core::PathBuffer<std::string > getUserdataPath() const{
        class Core::PathBuffer<std::string > (AppPlatformWindows::*rv)() const;
        *((void**)&rv) = dlsym("?getUserdataPath@AppPlatformWindows@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ");
        return (this->*rv)();
    }
    inline void queueForMainThread_DEPRECATED(class std::function<void (void)> a0){
        void (AppPlatformWindows::*rv)(class std::function<void (void)>);
        *((void**)&rv) = dlsym("?queueForMainThread_DEPRECATED@AppPlatformWindows@@UEAAXV?$function@$$A6AXXZ@std@@@Z");
        return (this->*rv)(std::forward<class std::function<void (void)>>(a0));
    }
    inline void registerExperimentsActiveCrashDump(std::vector<std::string> const& a0) const{
        void (AppPlatformWindows::*rv)(std::vector<std::string> const&) const;
        *((void**)&rv) = dlsym("?registerExperimentsActiveCrashDump@AppPlatformWindows@@UEBAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
        return (this->*rv)(std::forward<std::vector<std::string> const&>(a0));
    }
    inline bool supportsScripting() const{
        bool (AppPlatformWindows::*rv)() const;
        *((void**)&rv) = dlsym("?supportsScripting@AppPlatformWindows@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI static std::string const EXPERIMENTS_ACTIVE_KEY;

protected:
    MCAPI unsigned __int64 _findHighPerformanceThreadsCount() const;

private:
};