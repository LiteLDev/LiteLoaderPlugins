// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScoreboardEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARDEVENTLISTENER
public:
    class ScoreboardEventListener& operator=(class ScoreboardEventListener const&) = delete;
    ScoreboardEventListener(class ScoreboardEventListener const&) = delete;
    ScoreboardEventListener() = delete;
#endif

public:
    /*0*/ virtual ~ScoreboardEventListener();
    /*
    inline enum EventResult onScoreChanged(struct ScoreboardId const& a0, std::string const& a1, int a2){
        enum EventResult (ScoreboardEventListener::*rv)(struct ScoreboardId const&, std::string const&, int);
        *((void**)&rv) = dlsym("?onScoreChanged@ScoreboardEventListener@@UEAA?AW4EventResult@@AEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z");
        return (this->*rv)(std::forward<struct ScoreboardId const&>(a0), std::forward<std::string const&>(a1), std::forward<int>(a2));
    }
    inline  ~ScoreboardEventListener(){
         (ScoreboardEventListener::*rv)();
        *((void**)&rv) = dlsym("??1ScoreboardEventListener@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};