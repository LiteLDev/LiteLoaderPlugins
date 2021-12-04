// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_ACTORANIMATIONGROUP
#include "Extra/ActorAnimationGroupAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORANIMATIONGROUP
class ActorAnimationGroup {
#include "Extra/ActorAnimationGroupAPI.hpp"

public:
    MCAPI class ActorSkeletalAnimationPtr getActorAnimation(class HashedString const&);
    MCAPI class std::shared_ptr<class ActorAnimationInfo> getActorAnimationInfo(class HashedString const&);
    MCAPI void loadActorAnimation(std::string const&, class Core::Path const&, class PackStats&, class SemVersion const&, enum CurrentCmdVersion, bool);
    MCAPI void loadActorAnimationsSync(class ResourcePackManager&);
};