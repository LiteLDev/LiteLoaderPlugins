// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PathNavigation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FlyingPathNavigation : public PathNavigation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYINGPATHNAVIGATION
public:
    class FlyingPathNavigation& operator=(class FlyingPathNavigation const&) = delete;
    FlyingPathNavigation(class FlyingPathNavigation const&) = delete;
    FlyingPathNavigation() = delete;
#endif

public:
    /*0*/ virtual ~FlyingPathNavigation();
    /*1*/ virtual void initializeInternal(class Mob&, struct NavigationDescription*);
    /*2*/ virtual void tick(class NavigationComponent&, class Mob&);
    /*3*/ virtual class Vec3 getTempMobPos(class Mob const&) const;
    /*4*/ virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Vec3 const&);
    /*5*/ virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Actor&);
    /*9*/ virtual void stop(class NavigationComponent&, class Mob&);
    /*11*/ virtual bool canUpdatePath(class Mob const&) const;
    /*12*/ virtual void updatePath(class NavigationComponent&, class Mob&);

protected:

private:
    MCAPI void _restorePreviousGravityFlag(class Mob&);
    MCAPI void _storePreviousGravityFlag(class Mob&);

};