// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BREAKDOORANNOTATIONCOMPONENT
#include "Extra/BreakDoorAnnotationComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_BREAKDOORANNOTATIONCOMPONENT
class BreakDoorAnnotationComponent {
#include "Extra/BreakDoorAnnotationComponentAPI.hpp"

public:
    MCAPI bool canMobBreakDoor(class Mob&, class Path const&) const;
    MCAPI void clearProgress(class Mob&);
    MCAPI void initFromDefinition(class Actor&);
    MCAPI void obstructionCheck(class Mob&);
    MCAPI void onComponentRemoved(class EntityContext&);

private:
    MCAPI void _cleanUp(class Mob&);
    MCAPI bool _shouldBreakDoor(class Mob&);
};