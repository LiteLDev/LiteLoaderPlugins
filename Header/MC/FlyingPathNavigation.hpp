// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "PathNavigation.hpp"
#define EXTRA_INCLUDE_PART_FLYINGPATHNAVIGATION
#include "Extra/FlyingPathNavigationAPI.hpp"
#undef EXTRA_INCLUDE_PART_FLYINGPATHNAVIGATION
class FlyingPathNavigation : public PathNavigation {
#include "Extra/FlyingPathNavigationAPI.hpp"
public:
    /*0*/ virtual ~FlyingPathNavigation();
    /*1*/ virtual void initializeInternal(class Mob&, struct NavigationDescription*);
    /*2*/ virtual void tick(class NavigationComponent&, class Mob&);
    /*3*/ virtual class Vec3 getTempMobPos(class Mob const&) const;
    /*4*/ virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Vec3 const&);
    /*5*/ virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Actor&);
    /*6*/ virtual void stop(class NavigationComponent&, class Mob&);
    /*7*/ virtual bool travel(class NavigationComponent&, class Mob&, float&, float&, float&);
    /*8*/ virtual bool canUpdatePath(class Mob const&) const;
    /*9*/ virtual void updatePath(class NavigationComponent&, class Mob&);
    /*
    inline bool canUpdatePath(class Mob const& a0) const{
        bool (FlyingPathNavigation::*rv)(class Mob const&) const;
        *((void**)&rv) = dlsym("?canUpdatePath@FlyingPathNavigation@@MEBA_NAEBVMob@@@Z");
        return (this->*rv)(std::forward<class Mob const&>(a0));
    }
    inline std::unique_ptr<class Path> createPath(class NavigationComponent& a0, class Mob& a1, class Actor& a2){
        std::unique_ptr<class Path> (FlyingPathNavigation::*rv)(class NavigationComponent&, class Mob&, class Actor&);
        *((void**)&rv) = dlsym("?createPath@FlyingPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEAVActor@@@Z");
        return (this->*rv)(std::forward<class NavigationComponent&>(a0), std::forward<class Mob&>(a1), std::forward<class Actor&>(a2));
    }
    inline std::unique_ptr<class Path> createPath(class NavigationComponent& a0, class Mob& a1, class Vec3 const& a2){
        std::unique_ptr<class Path> (FlyingPathNavigation::*rv)(class NavigationComponent&, class Mob&, class Vec3 const&);
        *((void**)&rv) = dlsym("?createPath@FlyingPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEBVVec3@@@Z");
        return (this->*rv)(std::forward<class NavigationComponent&>(a0), std::forward<class Mob&>(a1), std::forward<class Vec3 const&>(a2));
    }
    inline class Vec3 getTempMobPos(class Mob const& a0) const{
        class Vec3 (FlyingPathNavigation::*rv)(class Mob const&) const;
        *((void**)&rv) = dlsym("?getTempMobPos@FlyingPathNavigation@@MEBA?AVVec3@@AEBVMob@@@Z");
        return (this->*rv)(std::forward<class Mob const&>(a0));
    }
    inline void initializeInternal(class Mob& a0, struct NavigationDescription* a1){
        void (FlyingPathNavigation::*rv)(class Mob&, struct NavigationDescription*);
        *((void**)&rv) = dlsym("?initializeInternal@FlyingPathNavigation@@UEAAXAEAVMob@@PEAUNavigationDescription@@@Z");
        return (this->*rv)(std::forward<class Mob&>(a0), std::forward<struct NavigationDescription*>(a1));
    }
    inline void stop(class NavigationComponent& a0, class Mob& a1){
        void (FlyingPathNavigation::*rv)(class NavigationComponent&, class Mob&);
        *((void**)&rv) = dlsym("?stop@FlyingPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z");
        return (this->*rv)(std::forward<class NavigationComponent&>(a0), std::forward<class Mob&>(a1));
    }
    inline void tick(class NavigationComponent& a0, class Mob& a1){
        void (FlyingPathNavigation::*rv)(class NavigationComponent&, class Mob&);
        *((void**)&rv) = dlsym("?tick@FlyingPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z");
        return (this->*rv)(std::forward<class NavigationComponent&>(a0), std::forward<class Mob&>(a1));
    }
    inline void updatePath(class NavigationComponent& a0, class Mob& a1){
        void (FlyingPathNavigation::*rv)(class NavigationComponent&, class Mob&);
        *((void**)&rv) = dlsym("?updatePath@FlyingPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z");
        return (this->*rv)(std::forward<class NavigationComponent&>(a0), std::forward<class Mob&>(a1));
    }
    */

protected:

private:
};