// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SCOREBOARDEVENTLISTENER
#include "Extra/ScoreboardEventListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCOREBOARDEVENTLISTENER
class ScoreboardEventListener {
#include "Extra/ScoreboardEventListenerAPI.hpp"
public:
    /*0*/ virtual ~ScoreboardEventListener();
    /*
    inline int \/*enum enum EventResult*\/ onScoreChanged(struct ScoreboardId const& a0, std::string const& a1, int a2){
        int \/*enum enum EventResult*\/ (ScoreboardEventListener::*rv)(struct ScoreboardId const&, std::string const&, int);
        *((void**)&rv) = dlsym("?onScoreChanged@ScoreboardEventListener@@UEAA?AW4EventResult@@AEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z");
        return (this->*rv)(std::forward<struct ScoreboardId const&>(a0), std::forward<std::string const&>(a1), std::forward<int>(a2));
    }
    */

protected:

private:
};