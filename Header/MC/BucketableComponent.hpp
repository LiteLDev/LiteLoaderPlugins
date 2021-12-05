// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_BUCKETABLECOMPONENT
#include "Extra/BucketableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_BUCKETABLECOMPONENT
class BucketableComponent {
#include "Extra/BucketableComponentAPI.hpp"
public:
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    MCAPI void initFromDefinition(class Actor&);
    MCAPI static void implInteraction(class Actor&, class Player&);

protected:

private:
    MCAPI static class BaseGameVersion const WATER_BUCKET_USEABLE_VERSION;
};