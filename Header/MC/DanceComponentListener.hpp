// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BlockSourceListener.hpp"
#define EXTRA_INCLUDE_PART_DANCECOMPONENTLISTENER
#include "Extra/DanceComponentListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_DANCECOMPONENTLISTENER
class DanceComponentListener : public BlockSourceListener {
#include "Extra/DanceComponentListenerAPI.hpp"
public:
    /*0*/ virtual ~DanceComponentListener();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void onSourceDestroyed(class BlockSource&);
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual void __unk_vfn_3();
    /*6*/ virtual void __unk_vfn_4();
    /*7*/ virtual void __unk_vfn_5();
    /*8*/ virtual void __unk_vfn_6();
    /*9*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_8();
    /*11*/ virtual void __unk_vfn_9();
    /*12*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_12();
    /*15*/ virtual void __unk_vfn_13();
    /*16*/ virtual void __unk_vfn_14();
    /*17*/ virtual void __unk_vfn_15();
    /*18*/ virtual void __unk_vfn_16();
    /*19*/ virtual void __unk_vfn_17();
    /*20*/ virtual void __unk_vfn_18();
    /*21*/ virtual void __unk_vfn_19();
    /*22*/ virtual void __unk_vfn_20();
    /*23*/ virtual void __unk_vfn_21();
    /*24*/ virtual void __unk_vfn_22();
    /*25*/ virtual void __unk_vfn_23();
    /*26*/ virtual void __unk_vfn_24();
    /*27*/ virtual void __unk_vfn_25();
    /*28*/ virtual void __unk_vfn_26();
    /*29*/ virtual void levelSoundEvent(int /*enum enum LevelSoundEvent*/, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
    /*
    inline void levelSoundEvent(int \/*enum enum LevelSoundEvent*\/ a0, class Vec3 const& a1, int a2, struct ActorDefinitionIdentifier const& a3, bool a4, bool a5){
        void (DanceComponentListener::*rv)(int \/*enum enum LevelSoundEvent*\/, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
        *((void**)&rv) = dlsym("?levelSoundEvent@DanceComponentListener@@UEAAXW4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z");
        return (this->*rv)(std::forward<int \/*enum enum LevelSoundEvent*\/>(a0), std::forward<class Vec3 const&>(a1), std::forward<int>(a2), std::forward<struct ActorDefinitionIdentifier const&>(a3), std::forward<bool>(a4), std::forward<bool>(a5));
    }
    */

protected:

private:
};