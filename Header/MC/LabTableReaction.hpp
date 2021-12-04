// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_LABTABLEREACTION
#include "Extra/LabTableReactionAPI.hpp"
#undef EXTRA_INCLUDE_PART_LABTABLEREACTION
class LabTableReaction {
#include "Extra/LabTableReactionAPI.hpp"
public:
    /*0*/ virtual ~LabTableReaction();

public:
    MCAPI void addComponent(std::unique_ptr<class LabTableReactionComponent>);
    MCAPI void addResultItem(class ItemStack const&);
    MCAPI int getReactionId();
    MCAPI enum LabTableReactionType getType();
    MCAPI bool tick(class BlockSource&);

    MCAPI static std::unique_ptr<class LabTableReaction> createReaction(enum LabTableReactionType, class BlockPos const&, bool);
};