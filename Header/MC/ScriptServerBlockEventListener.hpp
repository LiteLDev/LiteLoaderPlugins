// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTSERVERBLOCKEVENTLISTENER
#include "Extra/ScriptServerBlockEventListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERBLOCKEVENTLISTENER
class ScriptServerBlockEventListener {
#include "Extra/ScriptServerBlockEventListenerAPI.hpp"
public:
    /*0*/ virtual ~ScriptServerBlockEventListener();
    /*1*/ virtual int /*enum EventResult*/ onBlockPlacedByPlayer(class Player&, class Block const&, class BlockPos const&, bool);
    /*2*/ virtual int /*enum EventResult*/ onBlockDestroyedByPlayer(class Player&, std::string, class BlockPos const&);
    /*3*/ virtual int /*enum EventResult*/ onBlockMovedByPiston(class BlockPos const&, class BlockPos const&, int /*enum PistonState*/);
    /*4*/ virtual int /*enum EventResult*/ onBlockDestructionStopped(class Player&, class BlockPos const&, int);
    /*5*/ virtual int /*enum EventResult*/ onBlockDestructionStarted(class Player&, class BlockPos const&);
    /*6*/ virtual int /*enum EventResult*/ onBlockInteractedWith(class Player&, class BlockPos const&);
    /*7*/ virtual int /*enum EventResult*/ onBlockExploded(class BlockPos const&, class Block const&, class Actor*);
};