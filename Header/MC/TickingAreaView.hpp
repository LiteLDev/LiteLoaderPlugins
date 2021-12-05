// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_TICKINGAREAVIEW
#include "Extra/TickingAreaViewAPI.hpp"
#undef EXTRA_INCLUDE_PART_TICKINGAREAVIEW
class TickingAreaView {
#include "Extra/TickingAreaViewAPI.hpp"
public:
    /*0*/ virtual ~TickingAreaView();
    /*1*/ virtual void init(struct Bounds const&, bool);
    /*2*/ virtual void tick(struct Tick const&, class BlockSource&, bool);
    /*3*/ virtual void tickSeasons(class BlockSource&, class Random&);
    /*4*/ virtual class AutomaticID<class Dimension, int> getDimensionId() const;
    /*5*/ virtual struct Bounds const& getBounds() const;
    /*6*/ virtual bool isCircle() const;
    /*7*/ virtual bool isDoneLoading() const;
    /*8*/ virtual bool checkInitialLoadDone();
    /*9*/ virtual float getInitialLoadPercentage();
    /*10*/ virtual void move(struct Bounds const&);
    /*11*/ virtual std::unique_ptr<class ChunkViewSource> createChildSource();
    /*12*/ virtual class std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const&);
    /*
    inline bool checkInitialLoadDone(){
        bool (TickingAreaView::*rv)();
        *((void**)&rv) = dlsym("?checkInitialLoadDone@TickingAreaView@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class ChunkViewSource> createChildSource(){
        std::unique_ptr<class ChunkViewSource> (TickingAreaView::*rv)();
        *((void**)&rv) = dlsym("?createChildSource@TickingAreaView@@UEAA?AV?$unique_ptr@VChunkViewSource@@U?$default_delete@VChunkViewSource@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline class std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const& a0){
        class std::shared_ptr<class LevelChunk> (TickingAreaView::*rv)(class ChunkPos const&);
        *((void**)&rv) = dlsym("?getAvailableChunk@TickingAreaView@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z");
        return (this->*rv)(std::forward<class ChunkPos const&>(a0));
    }
    inline struct Bounds const& getBounds() const{
        struct Bounds const& (TickingAreaView::*rv)() const;
        *((void**)&rv) = dlsym("?getBounds@TickingAreaView@@UEBAAEBUBounds@@XZ");
        return (this->*rv)();
    }
    inline class AutomaticID<class Dimension, int> getDimensionId() const{
        class AutomaticID<class Dimension, int> (TickingAreaView::*rv)() const;
        *((void**)&rv) = dlsym("?getDimensionId@TickingAreaView@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ");
        return (this->*rv)();
    }
    inline float getInitialLoadPercentage(){
        float (TickingAreaView::*rv)();
        *((void**)&rv) = dlsym("?getInitialLoadPercentage@TickingAreaView@@UEAAMXZ");
        return (this->*rv)();
    }
    inline void init(struct Bounds const& a0, bool a1){
        void (TickingAreaView::*rv)(struct Bounds const&, bool);
        *((void**)&rv) = dlsym("?init@TickingAreaView@@UEAAXAEBUBounds@@_N@Z");
        return (this->*rv)(std::forward<struct Bounds const&>(a0), std::forward<bool>(a1));
    }
    inline bool isCircle() const{
        bool (TickingAreaView::*rv)() const;
        *((void**)&rv) = dlsym("?isCircle@TickingAreaView@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isDoneLoading() const{
        bool (TickingAreaView::*rv)() const;
        *((void**)&rv) = dlsym("?isDoneLoading@TickingAreaView@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void move(struct Bounds const& a0){
        void (TickingAreaView::*rv)(struct Bounds const&);
        *((void**)&rv) = dlsym("?move@TickingAreaView@@UEAAXAEBUBounds@@@Z");
        return (this->*rv)(std::forward<struct Bounds const&>(a0));
    }
    inline void tick(struct Tick const& a0, class BlockSource& a1, bool a2){
        void (TickingAreaView::*rv)(struct Tick const&, class BlockSource&, bool);
        *((void**)&rv) = dlsym("?tick@TickingAreaView@@UEAAXAEBUTick@@AEAVBlockSource@@_N@Z");
        return (this->*rv)(std::forward<struct Tick const&>(a0), std::forward<class BlockSource&>(a1), std::forward<bool>(a2));
    }
    inline void tickSeasons(class BlockSource& a0, class Random& a1){
        void (TickingAreaView::*rv)(class BlockSource&, class Random&);
        *((void**)&rv) = dlsym("?tickSeasons@TickingAreaView@@UEAAXAEAVBlockSource@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class Random&>(a1));
    }
    */
    MCAPI void unregisterChunkBuildOrderPolicies(class ChunkBuildOrderPolicyBase&);

protected:

private:
    MCAPI void _tickChunk(struct Tick const&, class BlockSource&, class Level&, class ChunkPos const&);
};