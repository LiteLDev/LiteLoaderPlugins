// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PLAYERSCOREBOARDEVENTLISTENER
#include "Extra/PlayerScoreboardEventListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_PLAYERSCOREBOARDEVENTLISTENER
class PlayerScoreboardEventListener {
#include "Extra/PlayerScoreboardEventListenerAPI.hpp"
public:
    /*0*/ virtual ~PlayerScoreboardEventListener();
    /*1*/ virtual int /*enum EventResult*/ onScoreChanged(struct ScoreboardId const&, std::string const&, int);

public:
    MCAPI class SubscribedObjectives& getPlayerSubscriptions(struct ScoreboardId const&, class Player const&);
    MCAPI void removePlayerSubscriptions(struct ScoreboardId const&);
};