// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BlockEventListener.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTBLOCKEVENTLISTENER
#include "Extra/ScriptBlockEventListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBLOCKEVENTLISTENER
class ScriptBlockEventListener : public BlockEventListener {
#include "Extra/ScriptBlockEventListenerAPI.hpp"
public:
    /*0*/ virtual ~ScriptBlockEventListener();
    /*1*/ virtual void unk_vfn_1();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual void unk_vfn_6();
    /*7*/ virtual int /*enum EventResult*/ onBlockExploded(class BlockPos const&, class Block const&, class Actor*);
    /*8*/ virtual void unk_vfn_8();
    /*9*/ virtual void unk_vfn_9();
    /*10*/ virtual void unk_vfn_10();
    /*11*/ virtual void unk_vfn_11();
    /*12*/ virtual void unk_vfn_12();
    /*13*/ virtual int /*enum EventResult*/ onPistonActionEvent(struct PistonActionEvent const&);
    /*14*/ virtual void unk_vfn_14();
    /*15*/ virtual void unk_vfn_15();
    /*16*/ virtual void unk_vfn_16();
    /*17*/ virtual int /*enum EventResult*/ onExplosionStartedEvent(struct ExplosionStartedEvent const&);
};